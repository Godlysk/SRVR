// name and the path of the shader
Shader "Unlit/SimpleShader" {
    Properties { // all the stuff defined for materials, temporarily ignored
        _MainTex ("Texture", 2D) = "white" {}
    }
    SubShader { // where the shader starts, it contains vertex and fragment shaders

        Tags { "RenderType"="Opaque" }

        Pass {
            // CG is a shader scripting language
            // you could use HLSL instead
            CGPROGRAM
            // names of the vertex and fragment shaders
            #pragma vertex vert
            #pragma fragment frag

            // includes Unity CG code (C-language include)
            #include "UnityCG.cginc"

            int bufferSize = 100;

            // Globally Set Values
            float _C;
            float4 _Beta;
            float _TimeResolution;
            int _BufferHead;
            float4 _PositionBuffer[100];

            // mesh data (vertex position, normal, uv coordinates, vertex colors)
            // uv channels are used to map textures onto geometry
            struct VertexInput {
                float4 vertex : POSITION;
                float4 color : COLOR;
                float3 normal : NORMAL;
                // float4 tangent : TANGENT;
                float2 uv0 : TEXCOORD0;
                // float2 uv1 : TEXCOORD1;
            };

            // output of the vertex shader that goes into the fragment shader
            // also called v2f
            struct VertexOutput {
                float4 clipPosition : SV_POSITION;  // clip-space position
                // these are called interpolators
                float2 uv0 : TEXCOORD0;
                float3 normal : TEXCOORD1;
                float3 worldPosition : TEXCOORD2;
                float3 transformedVelocity : TEXCOORD3;
            };

            // tied to the properties of the material/texture
            sampler2D _MainTex;
            float4 _MainTex_ST;

            float gamma(float beta) {
                return 1 / sqrt(1 - pow(beta, 2));
            }

            // vertex shader
            VertexOutput vert(VertexInput v) {
                VertexOutput o; // output struct
                float3 clipPosition = UnityObjectToViewPos(v.vertex);

                // Lorentz Contraction
                float4 transformed = mul(UNITY_MATRIX_V, _Beta);
                clipPosition.x /= gamma(transformed[0]);
                clipPosition.y /= gamma(transformed[1]);
                clipPosition.z /= gamma(transformed[2]);

                // Vision delay (laggy)
                // float dampFactor = 0.08f;
                // float distance = length(clipPosition.xyz);
                // float time = (distance / _C);
                // int shift = int((time / _TimeResolution));
                // int index = (_BufferHead - shift);
                // if (index < 0)
                //     index = bufferSize + index;
                // if (index < 0)
                //     index = _BufferHead;
                // float4 oldPosition = _PositionBuffer[index];
                // float4 viewPosition = mul(UNITY_MATRIX_V, oldPosition);
                // clipPosition.x -= (viewPosition.x * dampFactor);
                // clipPosition.y -= (viewPosition.y * dampFactor);
                // clipPosition.z -= (viewPosition.z * dampFactor);

                // Tiling and Transformation
                o.transformedVelocity = transformed;
                o.clipPosition = mul(UNITY_MATRIX_P, float4(clipPosition, 1.0));
                o.worldPosition = clipPosition;
                float tiling = _MainTex_ST.x;
                o.uv0 = v.uv0 * tiling;
                o.normal = v.normal;

                return o;
            }

            // sky wavelengths
            float blackBodyDistribution(float wavelength) {
                float factor = exp(wavelength / 200.0f) - 1;
                float upper = (wavelength * wavelength) / (pow(10, 7));
                float ratio =  (wavelength * upper) / (1.15f * factor);
                return ratio;
            }

            // hsv.shader (Przemyslaw Zaworski)
            float3 rgb2hsv(float3 c) {
                float4 K = float4(0.0, -1.0 / 3.0, 2.0 / 3.0, -1.0);
				float4 p = lerp( float4( c.bg, K.wz ), float4( c.gb, K.xy ), step( c.b, c.g ) );
				float4 q = lerp( float4( p.xyw, c.r ), float4( c.r, p.yzx ), step( p.x, c.r ) );
				float d = q.x - min( q.w, q.y );
				float e = 1.0e-10;
				return float3( abs(q.z + (q.w - q.y) / (6.0 * d + e)), d / (q.x + e), q.x);
            }

            // hsv.shader (Przemyslaw Zaworski)
            float3 hsv2rgb(float3 c) {
                float4 K = float4( 1.0, 2.0 / 3.0, 1.0 / 3.0, 3.0 );
				float3 p = abs( frac( c.xxx + K.xyz ) * 6.0 - K.www );
				return c.z * lerp( K.xxx, saturate( p - K.xxx ), c.y );
            }

            // For object reflections
            float hsv2lambda(float3 hsv) {
                float hue = hsv[0];
                float lambda = 650.0f - (350.0f * hue);
                return lambda;
            }
            
            // For object reflections
            float3 lambda2hsv(float lambda, float3 oldhsv) {
                if (lambda > 650.0f || lambda < 300.0f)
                    return float3(0.0f, 0.0f, 0.0f);
                float hue = (650.0f - lambda) / 350.0f;
                return float3(hue, oldhsv[1], oldhsv[2]);
            }

            // see fixed, float, half (data types)
            // fragment shader (returns a color)
            fixed4 frag(VertexOutput o) : SV_Target {
                fixed4 rgba = tex2D(_MainTex, o.uv0);
                float3 rgb = float3(rgba[0], rgba[1], rgba[2]);
                
                // Doppler Effect
                float3 hsv = rgb2hsv(rgb);
                float wavelength = hsv2lambda(hsv);
                
                float3 beta3 = float3(o.transformedVelocity[0], o.transformedVelocity[1], o.transformedVelocity[2]);
                float betaMagnitude = length(beta3);
                float gammaFull = gamma(betaMagnitude);

                if (betaMagnitude <= 0.1f) // change to enable/disable
                    return rgba;
                
                float3 directionUnit = normalize(o.worldPosition);
                float updatedWavelength = wavelength * gammaFull * (1 - dot(beta3, directionUnit));
                float3 hsvUpdated = lambda2hsv(updatedWavelength, hsv);
                hsvUpdated[0] *= 0.925;
                float3 rgbUpdated = hsv2rgb(hsvUpdated);

                // Diffused Sky Wavelengths
                float denominator = 0.1f;
                float hue = 0.0f;
                float dotProduct = dot(beta3, directionUnit);
                for (float skyWavelength = 200.0f; skyWavelength < 1200.0f; skyWavelength += 10.0f) {
                    float ratio = blackBodyDistribution(skyWavelength);
                    float transformedSkyWavelength = skyWavelength * gammaFull * (1 - dotProduct);
                    if (300.0f <= transformedSkyWavelength && transformedSkyWavelength <= 650.0f) {
                        hue += ratio * lambda2hsv(transformedSkyWavelength, hsv)[0];
                        denominator += ratio;
                    }
                }
                hue /= denominator;

                // Skylight Effect (TODO)
                
                // Combining Effects
                float3 skyColor = hsv2rgb(float3(hue, hsv[1], hsv[2]));
                fixed4 compositeColor;
                if (300.0f <= updatedWavelength && updatedWavelength <= 650.0f)
                    compositeColor = fixed4((rgbUpdated * 0.8f + skyColor * 0.2f), rgba[3]);
                else compositeColor = fixed4(skyColor, rgba[3]);

                return compositeColor;
            }

            ENDCG
        }
    }
}
