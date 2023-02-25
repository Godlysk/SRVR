// name and the path of the shader
Shader "Unlit/SimpleShader" {
    Properties { // all the stuff defined for materials, temporarily ignored
        // _MainTex ("Texture", 2D) = "white" {}
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

            // mesh data (vertex position, normal, uv coordinates, vertex colors)
            // uv channels are used to map textures onto geometry
            struct VertexInput {
                float4 vertex : POSITION;
                // float4 color : COLOR;
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
            // sampler2D _MainTex;
            // float4 _MainTex_ST;

            // vertex shader
            VertexOutput vert (VertexInput v) {
                VertexOutput o; // output struct
                o.clipPosition = UnityObjectToClipPos(v.vertex);
                o.uv0 = v.uv0;
                o.normal = v.normal;
                return o;
            }

            // see fixed, float, half (data types)
            // fragment shader (returns a color)
            fixed4 frag (VertexOutput o) : SV_Target {
                float2 uv = o.uv0;
                float lightDirection = normalize( float3 (1, 1, 1) );
                float3 lightColor = float3(1.0, 1.0, 0.0);
                // float3 normal = (o.normal * 0.5 + 0.5);
                // lambert lighting
                float3 ambientLight = float3(0.1, 0.1, 0.1);
                float3 lightFalloff = dot(lightDirection, o.normal); 
                float3 diffuseLight = (lightColor * lightFalloff);
                float3 lighting = normalize(diffuseLight + ambientLight);
                
                return float4(lighting, 0);
            }

            ENDCG
        }
    }
}
