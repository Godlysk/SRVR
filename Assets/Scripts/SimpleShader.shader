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
            };

            // tied to the properties of the material/texture
            sampler2D _MainTex;
            float4 _MainTex_ST;

            float gamma(float beta) {
                return 1 / sqrt(1 - pow(beta, 2));
            }

            // vertex shader
            VertexOutput vert (VertexInput v) {
                VertexOutput o; // output struct
                float3 clipPosition = UnityObjectToViewPos(v.vertex);

                // Lorentz Contraction
                float4 transformed = mul(UNITY_MATRIX_V, _Beta);
                clipPosition.x /= gamma(transformed[0]);
                clipPosition.y /= gamma(transformed[1]);
                clipPosition.z /= gamma(transformed[2]);

                // Curving (vision delay)
                float dampFactor = 0.2f;
                float distance = length(clipPosition.xyz);
                float time = (distance / _C);
                int shift = int((time / _TimeResolution));
                int index = (_BufferHead - shift);
                if (index < 0)
                    index = bufferSize + index;
                if (index < 0)
                    index = _BufferHead;
                float4 oldPosition = _PositionBuffer[index];
                float4 viewPosition = mul(UNITY_MATRIX_V, oldPosition);
                clipPosition.x -= (viewPosition.x * dampFactor);
                clipPosition.y -= (viewPosition.y * dampFactor);
                clipPosition.z -= (viewPosition.z * dampFactor);

                // Tiling and Transformation
                o.clipPosition = mul(UNITY_MATRIX_P, float4(clipPosition, 1.0));
                float tiling = _MainTex_ST.x;
                o.uv0 = v.uv0 * tiling;
                o.normal = v.normal;

                return o;
            }


            // see fixed, float, half (data types)
            // fragment shader (returns a color)
            fixed4 frag (VertexOutput o) : SV_Target {
                fixed4 col = tex2D(_MainTex, o.uv0);
                return col;
            }

            ENDCG
        }
    }
}
