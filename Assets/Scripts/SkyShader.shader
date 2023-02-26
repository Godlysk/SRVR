// name and the path of the shader
Shader "Unlit/SkyShader" {
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
                float4 transformed = mul(UNITY_MATRIX_V, _Beta);
                o.transformedVelocity = transformed;
                o.worldPosition = clipPosition;
                o.clipPosition = mul(UNITY_MATRIX_P, float4(clipPosition, 1.0));
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
                
                // Doppler Effect
                float3 hsv = float3(0.5f, 0.3f, 0.8f);

                float3 beta3 = float3(o.transformedVelocity[0], o.transformedVelocity[1], o.transformedVelocity[2]);
                float betaMagnitude = length(beta3);
                float gammaFull = gamma(betaMagnitude);
                float3 directionUnit = normalize(o.worldPosition);

                if (betaMagnitude <= 0.1f) // change to enable/disable
                    return fixed4(hsv2rgb(hsv), 1.0f);

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

                // float3 skyColor = hsv2rgb(hsv);
                float3 skyColor = hsv2rgb(float3(hue, 0.4f, 0.6f));
                return fixed4(skyColor, 1.0f);
            }

            ENDCG
        }
    }
}
