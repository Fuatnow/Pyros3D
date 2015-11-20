//============================================================================
// Name        : Resources.cpp
// Author      : Duarte Peixinho
// Version     :
// Copyright   : ;)
// Description : Resources
//============================================================================

#include <Pyros3D/Resources/Resources.h>

// MISSING TEXTURE

namespace p3d {

	const unsigned char MISSING_TEXTURE[] = {
		0x44,0x44,0x53,0x20,0x7c,0x00,0x00,0x00,0x07,0x10,0x0a,0x00,0x20,0x00,0x00,0x00,
		0x20,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,
		0x04,0x00,0x00,0x00,0x44,0x58,0x54,0x35,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x10,0x40,0x00,
		0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xfd,0xdb,0xef,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xff,0xa0,0xfa,0xff,0xff,0xff,0xff,
		0x00,0x05,0xff,0xff,0xff,0xff,0xff,0xff,0x60,0xfc,0x3c,0xf7,0x50,0x50,0x05,0x05,
		0x00,0x05,0x3f,0xf0,0x03,0x00,0x00,0x00,0x60,0xfc,0x3c,0xf7,0xf4,0xf1,0xff,0xff,
		0x00,0x05,0x07,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0xa6,0xf4,0xab,0xaa,0xaa,0xaa
	};

	const char SHADER_CODE[] =	"#define MAX_BONES 60\n"
"#define MAX_LIGHTS 4\n"
"\n"
"#ifdef VERTEX\n"
"\n"
"    #ifdef GLES2\n"
"        precision mediump float;\n"
"    #endif\n"
"\n"
"    #ifdef PHYSICSDEBUG\n"
"        attribute vec4 aColor;\n"
"        varying vec4 vColor;\n"
"    #endif\n"
"\n"
"    #if defined(TEXTURE) || defined(TEXTRENDERING) || defined(BUMPMAPPING) || defined(SPECULARMAP)\n"
"        varying vec2 vTexcoord;\n"
"    #endif\n"
"\n"
"    #if defined(BUMPMAPPING) || defined(SKINNING) || defined(ENVMAP) || defined(REFRACTION) || defined(DIFFUSE) || defined(CELLSHADING) || defined(TEXTRENDERING)\n"
"        varying vec3 vNormal;\n"
"    #endif\n"
"          \n"
"    #if defined(DIRECTIONALSHADOW) || defined(POINTSHADOW) || defined(SPOTSHADOW) || defined(SKINNING) || defined(ENVMAP) || defined(REFRACTION) || defined(DIFFUSE) || defined(CELLSHADING)\n"
"        varying vec4 vWorldPosition;\n"
"    #endif\n"
"\n"
"    #ifdef BUMPMAPPING\n"
"        attribute vec3 aTangent, aBitangent;\n"
"        varying mat3 vTangentMatrix;\n"
"    #endif\n"
"\n"
"    #ifdef SKINNING\n"
"        attribute vec4 aBonesID, aBonesWeight;\n"
"        uniform mat4 uBoneMatrix[MAX_BONES];\n"
"    #endif\n"
"\n"
"    #if defined(ENVMAP) || defined(REFRACTION) || defined(DIFFUSE) || defined(CELLSHADING)\n"
"        uniform vec3 uCameraPos;\n"
"        varying vec3 vCameraPos;\n"
"    #endif\n"
"\n"
"    #ifdef REFRACTION\n"
"        varying vec3 vTRed, vTGreen, vTBlue;\n"
"        varying float vReflectionFactor;\n"
"    #endif\n"
"\n"
"    #ifdef SKYBOX\n"
"        varying vec3 v3Texcoord;\n"
"    #endif\n"
"\n"
"    // Defaults\n"
"    attribute vec3 aPosition, aNormal;\n"
"    attribute vec2 aTexcoord;\n"
"    uniform mat4 uProjectionMatrix, uViewMatrix, uModelMatrix;\n"
"    mat4 matAnimation = mat4(1.0);\n"
"    void main() {\n"
"\n"
"        #ifdef PHYSICSDEBUG\n"
"            vColor = aColor;\n"
"        #endif\n"
"\n"
"        #if defined(TEXTURE) || defined(TEXTRENDERING) || defined(BUMPMAPPING) || defined(SPECULARMAP)\n"
"            vTexcoord = aTexcoord;\n"
"        #endif\n"
"\n"
"        #if defined(DIRECTIONALSHADOW) || defined(POINTSHADOW) || defined(SPOTSHADOW) || defined(SKINNING) || defined(ENVMAP) || defined(REFRACTION) || defined(DIFFUSE) || defined(CELLSHADING)\n"
"            #ifndef SKINNING\n"
"                vWorldPosition=uModelMatrix * vec4(aPosition,1.0);\n"
"            #else\n"
"                vWorldPosition=uModelMatrix * (matAnimation * vec4(aPosition,1.0));\n"
"            #endif\n"
"        #endif\n"
"\n"
"        #if defined(ENVMAP) || defined(REFRACTION) || defined(DIFFUSE) || defined(CELLSHADING)\n"
"            vCameraPos = uCameraPos;\n"
"        #endif\n"
"\n"
"        #ifdef SKYBOX\n"
"            v3Texcoord = aPosition.xyz;\n"
"        #endif\n"
"\n"
"        #ifdef REFRACTION\n"
"            float fresnelBias, fresnelScale, fresnelPower;\n"
"            vec3 etaRatio;\n"
"            fresnelBias = 0.9;\n"
"            fresnelScale=0.7;\n"
"            fresnelPower=1.0;\n"
"            etaRatio=vec3(0.943,0.949,0.945);\n"
"            vec3 I = normalize(vWorldPosition.xyz - uCameraPos);\n"
"            vTRed = refract(I,vNormal,etaRatio.x);\n"
"            vTGreen =  refract(I,vNormal,etaRatio.y);\n"
"            vTBlue = refract(I,vNormal,etaRatio.z);\n"
"            vReflectionFactor = fresnelBias + fresnelScale * pow(1.0+dot(I,vNormal),fresnelPower);\n"
"        #endif\n"
"\n"
"        gl_Position = uProjectionMatrix * uViewMatrix * uModelMatrix * vec4(aPosition,1.0);\n"
"\n"
"        // This Overwrites GL Position\n"
"        #ifdef SKINNING\n"
"            matAnimation = uBoneMatrix[int(aBonesID.x)] * aBonesWeight.x;\n"
"            matAnimation += uBoneMatrix[int(aBonesID.y)] * aBonesWeight.y;\n"
"            matAnimation += uBoneMatrix[int(aBonesID.z)] * aBonesWeight.z;\n"
"            matAnimation += uBoneMatrix[int(aBonesID.w)] * aBonesWeight.w;\n"
"            gl_Position = uProjectionMatrix * uViewMatrix * uModelMatrix * matAnimation * vec4(aPosition,1.0);\n"
"        #endif\n"
"\n"
"        #ifdef TEXTRENDERING\n"
"            vNormal = aNormal;\n"
"        #endif\n"
"\n"
"        #if defined(BUMPMAPPING) || defined(SKINNING) || defined(ENVMAP) || defined(REFRACTION) || defined(DIFFUSE) || defined(CELLSHADING)\n"
"            #ifndef SKINNING\n"
"                vNormal = normalize((uModelMatrix * vec4(aNormal,0.0)).xyz);\n"
"            #else\n"
"                vNormal = normalize((uModelMatrix * (matAnimation * vec4(aNormal,0.0))).xyz);\n"
"            #endif\n"
"        #endif\n"
"\n"
"        #ifdef BUMPMAPPING\n"
"            vec3 Tangent = normalize((uModelMatrix * vec4(aTangent,0)).xyz);\n"
"            vec3 Binormal = normalize((uModelMatrix * vec4(aBitangent,0)).xyz);\n"
"            vTangentMatrix = mat3(Tangent.x, Binormal.x, vNormal.x,Tangent.y, Binormal.y, vNormal.y,Tangent.z, Binormal.z, vNormal.z);\n"
"        #endif\n"
"    }\n"
"\n"
"#endif\n"
"\n"
"#ifdef FRAGMENT\n"
"\n"
"    #ifdef GLES2\n"
"        precision mediump float;\n"
"    #endif\n"
"\n"
"    #if defined(DIFFUSE) || defined(CELLSHADING)\n"
"\n"
"        /*  DECODE AND ENCODE FLOAT TO RGBA\n"
"        float DecodeFloatRGBA(vec4 rgba)\n"
"        {\n"
"            return dot(rgba, vec4(1.0,1.0/255.0, 1.0/65025.0, 1.0/160581375.0));\n"
"        }\n"
"        vec4 EncodeFloatRGBA(float v) {\n"
"            vec4 enc = vec4(1.0, 255.0, 65025.0, 160581375.0) * v;\n"
"            enc = frac(enc);\n"
"            enc -= enc.yzww * vec4(1.0 / 255.0, 1.0 / 255.0, 1.0 / 255.0, 0.0);\n"
"            return enc;\n"
"        }\n"
"        */\n"
"        \n"
"        struct LIGHT \n"
"        {\n"
"            vec4 Color;\n"
"            vec3 Direction;\n"
"            vec3 Position;\n"
"            float Radius;\n"
"            vec2 Cones;\n"
"            float Type;\n"
"            bool HaveShadowMap;\n"
"            int ShadowMap;\n"
"        };\n"
"        void buildLightFromMatrix(mat4 Light, inout LIGHT L) \n"
"        {\n"
"            L.Color = Light[0];\n"
"            L.Position = vec3(Light[1][0],Light[1][1],Light[1][2]);;\n"
"            L.Direction = vec3(Light[1][3],Light[2][0],Light[2][1]);\n"
"            L.Radius = Light[2][2];\n"
"            L.Cones = vec2(Light[2][3],Light[3][0]);\n"
"            L.Type = Light[3][1];\n"
"            L.HaveShadowMap = (Light[3][2]>0.0? true : false);\n"
"            L.ShadowMap = int(Light[3][3]); // Only for Point and Spot Shadows (Directional have only one shadow map)\n"
"        }\n"
"\n"
"        float Attenuation(vec3 Vertex, vec3 LightPosition, float Radius)\n"
"        {\n"
"            if (Radius>0.0) {\n"
"            float d = distance(Vertex,LightPosition);\n"
"            return clamp(1.0 - (1.0/Radius) * sqrt(d*d), 0.0, 1.0);\n"
"            };\n"
"            return 1.0;\n"
"        }\n"
"\n"
"        // SpotLight Cones\n"
"        float DualConeSpotLight(vec3 Vertex, vec3 SpotLightPosition, vec3 SpotLightDirection, float cosOutterCone, float cosInnerCone)\n"
"        {\n"
"            if (cosOutterCone>0.0 || cosInnerCone>0.0) {\n"
"                vec3 to_light = normalize(SpotLightPosition-Vertex);\n"
"                float angle = dot(-to_light, normalize(SpotLightDirection));\n"
"                float funcX = 1.0/(cosInnerCone-cosOutterCone);\n"
"                float funcY = -funcX * cosOutterCone;\n"
"                return clamp(angle*funcX+funcY,0.0,1.0);\n"
"            }\n"
"            return 0.0;\n"
"        }\n"
"\n"
"        void CalculateLighting(vec3 LightVec, vec3 HalfVec, vec3 Normal, float Shininess, out float lightIntensity, out float specularPower)\n"
"        {\n"
"                       \n"
"            float specularLight = 0.0;\n"
"            float diffuseLight = max(dot(LightVec,Normal),0.0);\n"
"            lightIntensity = max(dot(LightVec,Normal),0.0);\n"
"            specularPower = (lightIntensity>0.0?pow(max(dot(HalfVec,Normal),0.0), Shininess):0.0);\n"
"        }\n"
"\n"
"        uniform mat4 uLights[MAX_LIGHTS];\n"
"        uniform int uNumberOfLights;\n"
"        uniform vec4 uAmbientLight;\n"
"        uniform float uShininess;\n"
"        uniform float uUseLights;\n"
"\n"
"    #endif\n"
"\n"
"    // Defaults\n"
"    vec4 diffuse = vec4(0.0,0.0,0.0,1.0);\n"
"    vec4 specular = vec4(0.0,0.0,0.0,1.0);\n"
"    bool diffuseIsSet = false;\n"
"    uniform float uOpacity;\n"
"\n"
"    #ifdef COLOR\n"
"        uniform vec4 uColor;\n"
"    #endif\n"
"\n"
"    #ifdef PHYSICSDEBUG\n"
"        varying vec4 vColor;\n"
"    #endif\n"
"\n"
"    #if defined(TEXTURE) || defined(TEXTRENDERING) || defined(SPECULARMAP) || defined(BUMPMAPPING)\n"
"        varying vec2 vTexcoord;\n"
"    #endif\n"
"\n"
"    #ifdef TEXTURE\n"
"        uniform sampler2D uColormap;\n"
"    #endif\n"
"\n"
"    #ifdef TEXTRENDERING\n"
"        uniform sampler2D uFontmap;\n"
"    #endif\n"
"\n"
"    #if defined(TEXTRENDERING) || defined(BUMPMAPPING) || defined(ENVMAP) || defined(REFRACTION) || defined(DIFFUSE) || defined(CELLSHADING)\n"
"        varying vec3 vNormal;\n"
"    #endif\n"
"\n"
"    #ifdef BUMPMAPPING\n"
"        varying mat3 vTangentMatrix;\n"
"        uniform sampler2D uNormalmap;\n"
"    #endif\n"
"\n"
"    #if defined(DIRECTIONALSHADOW) || defined(POINTSHADOW) || defined(SPOTSHADOW)\n"
"        uniform float uPCFTexelSize1;\n"
"    #endif\n"
"\n"
"    #ifdef DIRECTIONALSHADOW\n"
"        #if defined(GLES2)\n"
"            float PCFDIRECTIONAL(sampler2D shadowMap, float width, float height, mat4 sMatrix, float scale, vec4 pos, bool MoreThanOneCascade) \n"
"        #else\n"
"            float PCFDIRECTIONAL(sampler2DShadow shadowMap, float width, float height, mat4 sMatrix, float scale, vec4 pos, bool MoreThanOneCascade) \n"
"        #endif\n"
"        {\n"
"            vec4 coord = sMatrix * pos;\n"
"            if (MoreThanOneCascade) coord.xy = (coord.xy * 0.5) + vec2(width,height);\n"
"            float shadow = 0.0;\n"
"            float x,y;\n"
"            for (y = -1.5 ; y <=1.5 ; y+=1.0)\n"
"                for (x = -1.5 ; x <=1.5 ; x+=1.0)\n"
"                    #if defined(GLES2)\n"
"                        shadow += (texture2D(shadowMap, (coord.xy + vec2(x,y) * scale)).x - coord.z+uPCFTexelSize1>0.0?1.0:0.0);\n"
"                    #else\n"
"                        shadow += shadow2D(shadowMap, (coord.xyz + vec3(vec2(x,y) * scale,0.0))).x;\n"
"                    #endif                    \n"
"            shadow /= 16.0;\n"
"            return shadow;\n"
"        }\n"
"        uniform float uPCFTexelSize2;\n"
"        uniform float uPCFTexelSize3;\n"
"        uniform float uPCFTexelSize4;\n"
"        uniform mat4 uDirectionalDepthsMVP[4];\n"
"        uniform vec4 uDirectionalShadowFar[4];\n"
"\n"
"        #if defined(GLES2)\n"
"            uniform sampler2D uDirectionalShadowMaps;\n"
"        #else\n"
"            uniform sampler2DShadow uDirectionalShadowMaps;\n"
"        #endif    \n"
"    #endif\n"
"\n"
"    #ifdef POINTSHADOW\n"
"        #if defined(GLES2)\n"
"            float PCFPOINT(samplerCube shadowMap, mat4 Matrix1, mat4 Matrix2, float scale, vec4 pos) \n"
"        #else\n"
"            #extension GL_EXT_gpu_shader4 : require\n"
"            float PCFPOINT(samplerCubeShadow shadowMap, mat4 Matrix1, mat4 Matrix2, float scale, vec4 pos) \n"
"        #endif        \n"
"        {\n"
"            vec4 position_ls = Matrix2 * pos;\n"
"            position_ls.xyz/=position_ls.w;\n"
"            vec4 abs_position = abs(position_ls);\n"
"            float fs_z = -max(abs_position.x, max(abs_position.y, abs_position.z));\n"
"            vec4 clip = Matrix1 * vec4(0.0, 0.0, fs_z, 1.0);\n"
"            float depth = (clip.z / clip.w) * 0.5 + 0.5;\n"
"            float shadow = 0.0;\n"
"            float x,y;\n"
"            for (y = -1.5 ; y <=1.5 ; y+=1.0)\n"
"                for (x = -1.5 ; x <=1.5 ; x+=1.0)\n"
"                    #if defined(GLES2) \n"
"                        shadow += (textureCube(shadowMap, vec3(position_ls.xy, depth) + vec3(vec2(x,y) * scale,0.0)).x - fs_z+uPCFTexelSize1>0.0?1.0:0.0);\n"
"                    #else                \n"
"                        shadow += shadowCube(shadowMap, vec4(position_ls.xyz, depth) + vec4(vec2(x,y) * scale,0.0,0.0)).x;\n"
"                    #endif\n"
"            shadow /= 16.0;\n"
"            return shadow;\n"
"        }\n"
"        uniform mat4 uPointDepthsMVP[2];\n"
"        uniform int uNumberOfPointShadows;\n"
"\n"
"        #if defined(GLES2)\n"
"            uniform samplerCube uPointShadowMaps;\n"
"        #else\n"
"            uniform samplerCubeShadow uPointShadowMaps;\n"
"        #endif\n"
"    #endif\n"
"\n"
"    #ifdef SPOTSHADOW\n"
"    \n"
"        #if defined(GLES2)\n"
"            float PCFSPOT(sampler2D shadowMap, mat4 sMatrix, float scale, vec4 pos) \n"
"        #else\n"
"            float PCFSPOT(sampler2DShadow shadowMap, mat4 sMatrix, float scale, vec4 pos) \n"
"        #endif\n"
"        {\n"
"            vec4 coord = sMatrix * pos;\n"
"            coord.xyz/=coord.w;\n"
"            float shadow = 0.0;\n"
"            float x,y;\n"
"            for (y = -1.5 ; y <=1.5 ; y+=1.0)\n"
"               for (x = -1.5 ; x <=1.5 ; x+=1.0)\n"
"                    #if defined(GLES2)\n"
"                        shadow += (texture2D(shadowMap, (coord.xy + vec2(x,y) * scale)).x - coord.z+uPCFTexelSize1>0.0?1.0:0.0);\n"
"                    #else\n"
"                        shadow += shadow2D(shadowMap, (coord.xyz + vec3(vec2(x,y) * scale,0.0))).x;\n"
"                    #endif\n"
"            shadow /= 16.0;\n"
"            return shadow;\n"
"        }\n"
"\n"
"        #if defined(GLES2)\n"
"            uniform sampler2D uSpotShadowMaps;\n"
"        #else\n"
"            uniform sampler2DShadow uSpotShadowMaps;\n"
"        #endif\n"
"\n"
"        uniform mat4 uSpotDepthsMVP;\n"
"        uniform int uNumberOfSpotShadows; \n"
"    #endif\n"
"\n"
"    #if defined(DIRECTIONALSHADOW) || defined(POINTSHADOW) || defined(SPOTSHADOW) || defined(SKINNING) || defined(ENVMAP) || defined(DIFFUSE) || defined(CELLSHADING)\n"
"        varying vec4 vWorldPosition;\n"
"    #endif\n"
"\n"
"    #if defined(ENVMAP) || defined(REFRACTION) || defined(DIFFUSE) || defined(CELLSHADING)\n"
"        varying vec3 vCameraPos;\n"
"    #endif\n"
"\n"
"    #ifdef ENVMAP\n"
"        uniform samplerCube uEnvmap;\n"
"        uniform float uReflectivity;\n"
"    #endif\n"
"\n"
"    #ifdef REFRACTION\n"
"        uniform samplerCube uRefractmap;\n"
"        varying float vReflectionFactor;\n"
"        varying vec3 vTRed, vTGreen, vTBlue;\n"
"    #endif\n"
"\n"
"    #ifdef SKYBOX\n"
"        varying vec3 v3Texcoord;\n"
"        uniform samplerCube uSkyboxmap;\n"
"    #endif\n"
"\n"
"    #ifdef SPECULARCOLOR\n"
"        uniform vec4 uSpecular;\n"
"    #endif\n"
"\n"
"    #ifdef SPECULARMAP\n"
"        uniform sampler2D uSpecularmap;\n"
"    #endif\n"
"\n"
"    void main() {\n"
"\n"
"        // Default\n"
"        mat3 TangentMatrix = mat3(1.0);\n"
"\n"
"        #ifdef COLOR\n"
"            if (!diffuseIsSet) \n"
"            {\n"
"                diffuse=uColor;\n"
"                diffuseIsSet=true;\n"
"            } else diffuse *= uColor;\n"
"        #endif\n"
"\n"
"        #ifdef PHYSICSDEBUG\n"
"            if (!diffuseIsSet) \n"
"            {\n"
"                diffuse=vColor;\n"
"                diffuseIsSet=true;\n"
"            } else diffuse *= vColor;\n"
"        #endif\n"
"\n"
"        #if defined(TEXTURE) || defined(TEXTRENDERING) || defined(BUMPMAPPING) || defined(SPECULARMAP)\n"
"            vec2 Texcoord = vTexcoord;\n"
"        #endif\n"
"\n"
"        #ifdef TEXTURE\n"
"            if (!diffuseIsSet) \n"
"            {\n"
"                diffuse=texture2D(uColormap,Texcoord);\n"
"                diffuseIsSet=true;\n"
"            } else diffuse *= texture2D(uColormap,Texcoord);\n"
"        #endif\n"
"\n"
"        #if defined(TEXTRENDERING) || defined(BUMPMAPPING) || defined(ENVMAP) || defined(REFRACTION) || defined(DIFFUSE) || defined(CELLSHADING)\n"
"            vec3 Normal;\n"
"            #ifdef BUMPMAPPING\n"
"                TangentMatrix = vTangentMatrix;\n"
"                Normal = normalize((texture2D(uNormalmap, Texcoord).xyz * 2.0 - 1.0));\n"
"            #else\n"
"                Normal = vNormal;\n"
"            #endif\n"
"        #endif\n"
"\n"
"        #ifdef TEXTRENDERING\n"
"            if (!diffuseIsSet) \n"
"            {\n"
"                diffuse=vec4(Normal*texture2D(uFontmap,Texcoord).a,texture2D(uFontmap,Texcoord).a);\n"
"                diffuseIsSet=true;\n"
"            } else diffuse *= vec4(Normal*texture2D(uFontmap,Texcoord).a,texture2D(uFontmap,Texcoord).a);\n"
"        #endif\n"
"\n"
"        #if defined(ENVMAP) || defined(REFRACTION)\n"
"            vec3 Reflection = reflect(normalize(vWorldPosition.xyz - (vec4(vCameraPos,1.0)).xyz),normalize(vNormal));\n"
"            #ifdef ENVMAP\n"
"                diffuse.xyz = diffuse.xyz * (1.0-uReflectivity) + (textureCube(uEnvmap,Reflection)).xyz*uReflectivity;\n"
"            #endif\n"
"            #ifdef REFRACTION\n"
"                vec4 reflectedColor = textureCube( uRefractmap, Reflection);\n"
"                vec4 refractedColor = vec4(0,0,0,1);\n"
"                refractedColor.x = (textureCube( uRefractmap, vTRed)).x;\n"
"                refractedColor.y = (textureCube( uRefractmap, vTGreen)).y;\n"
"                refractedColor.z = (textureCube( uRefractmap, vTBlue)).z;\n"
"                refractedColor.w = 1.0;\n"
"                if (!diffuseIsSet) \n"
"                {\n"
"                    diffuse=mix(reflectedColor, refractedColor, vReflectionFactor);\n"
"                    diffuseIsSet=true;\n"
"                } else diffuse *= mix(reflectedColor, refractedColor, vReflectionFactor);\n"
"            #endif\n"
"        #endif\n"
"\n"
"        #ifdef SKYBOX\n"
"            if (!diffuseIsSet) \n"
"            {\n"
"                diffuse=textureCube(uSkyboxmap,v3Texcoord);\n"
"                diffuseIsSet=true;\n"
"            } else diffuse *= textureCube(uSkyboxmap,v3Texcoord);\n"
"        #endif\n"
"\n"
"        #ifdef SPECULARCOLOR\n"
"            specular = uSpecular;\n"
"        #endif\n"
"\n"
"        #ifdef SPECULARMAP\n"
"            specular = texture2D(uSpecularmap,Texcoord);\n"
"        #endif\n"
"\n"
"        #if defined(DIFFUSE) || defined(CELLSHADING)\n"
"            // Fragment Body\n"
"            vec4 _diffuse = uAmbientLight;\n"
"            vec4 _specular = vec4(0.0,0.0,0.0,1.0);\n"
"            \n"
"            vec3 Vertex = vWorldPosition.xyz;\n"
"            vec3 EyeVec = normalize(vCameraPos-Vertex);\n"
"            Normal = normalize(Normal);\n"
"\n"
"            float lightIntensityCellShading;\n"
"\n"
"            for (int i=0;i<MAX_LIGHTS;i++)\n"
"            {\n"
"                float lightIntensity, specularPower;\n"
"                float attenuation = 1.0;\n"
"                float spotEffect = 1.0;\n"
"                if (i<uNumberOfLights) \n"
"                {\n"
"                    mat4 Light = uLights[i];\n"
"                    \n"
"                    vec3 LightDir;\n"
"                    vec4 LightColor;\n"
"                    \n"
"                    LIGHT L;\n"
"                    buildLightFromMatrix(Light,L);\n"
"                    if (L.Type == 1.0) \n"
"                    {\n"
"                        LightDir = normalize(-L.Direction);\n"
"                        vec3 HalfVec = TangentMatrix * normalize(EyeVec + LightDir);\n"
"                        vec3 LightVec = TangentMatrix * LightDir;\n"
"\n"
"                        lightIntensity = specularPower = 0.0;\n"
"\n"
"                        CalculateLighting(LightVec, HalfVec, Normal, uShininess, lightIntensity, specularPower);\n"
"\n"
"                        #ifdef DIRECTIONALSHADOW\n"
"                            float DirectionalShadow = 0.0;\n"
"                            bool MoreThanOneCascade = (uDirectionalShadowFar[0].y>0.0);\n"
"                            if (gl_FragCoord.z<uDirectionalShadowFar[0].x) DirectionalShadow = PCFDIRECTIONAL( uDirectionalShadowMaps, 0.0, 0.0, uDirectionalDepthsMVP[0],uPCFTexelSize1,vWorldPosition, MoreThanOneCascade);\n"
"                            else if (gl_FragCoord.z<uDirectionalShadowFar[0].y) DirectionalShadow = PCFDIRECTIONAL( uDirectionalShadowMaps, 0.5,0.0, uDirectionalDepthsMVP[1],uPCFTexelSize2,vWorldPosition, MoreThanOneCascade);\n"
"                            else if (gl_FragCoord.z<uDirectionalShadowFar[0].z) DirectionalShadow = PCFDIRECTIONAL( uDirectionalShadowMaps, 0.0, 0.5, uDirectionalDepthsMVP[2],uPCFTexelSize3,vWorldPosition, MoreThanOneCascade);\n"
"                            else if (gl_FragCoord.z<uDirectionalShadowFar[0].w) DirectionalShadow = PCFDIRECTIONAL( uDirectionalShadowMaps, 0.5,0.5, uDirectionalDepthsMVP[3],uPCFTexelSize4,vWorldPosition, MoreThanOneCascade);\n"
"\n"
"                            _diffuse += lightIntensity * L.Color * DirectionalShadow;\n"
"                            _specular += specularPower * L.Color * specular * DirectionalShadow;\n"
"                            lightIntensityCellShading = max(lightIntensityCellShading, lightIntensity * DirectionalShadow);\n"
"                        #else\n"
"                            _diffuse += lightIntensity * L.Color;\n"
"                            _specular += specularPower * L.Color * specular;\n"
"                            lightIntensityCellShading = max(lightIntensityCellShading, lightIntensity);\n"
"                        #endif\n"
"                    }\n"
"                    else if (L.Type == 2.0) \n"
"                    {\n"
"                        LightDir = normalize(L.Position - Vertex);\n"
"                        vec3 HalfVec = TangentMatrix * normalize(EyeVec + LightDir);\n"
"                        vec3 LightVec = TangentMatrix * LightDir;\n"
"\n"
"                        lightIntensity = specularPower = 0.0;\n"
"\n"
"                        attenuation = Attenuation(Vertex, L.Position, L.Radius);\n"
"                        spotEffect = 1.0 - DualConeSpotLight(Vertex, L.Position, L.Direction, L.Cones.x, L.Cones.y);\n"
"\n"
"                        CalculateLighting(LightVec, HalfVec, Normal, uShininess, lightIntensity, specularPower);\n"
"\n"
"                        #ifdef POINTSHADOW\n"
"                            float PointShadow = 0.0;\n"
"                            if (attenuation>0.0 && L.HaveShadowMap)\n"
"                            {\n"
"                                PointShadow+=PCFPOINT(uPointShadowMaps,uPointDepthsMVP[0],uPointDepthsMVP[1],uPCFTexelSize1,vWorldPosition);\n"
"                            }\n"
"                            _diffuse += lightIntensity * L.Color * attenuation * PointShadow;\n"
"                            _specular += specularPower * L.Color * specular * attenuation * PointShadow;\n"
"                            lightIntensityCellShading = max(lightIntensityCellShading, lightIntensity * attenuation * PointShadow);\n"
"                        #else\n"
"                            _diffuse += (lightIntensity + specularPower * _specular) * L.Color * attenuation;\n"
"                            _specular += specularPower * L.Color * specular * attenuation;\n"
"                            lightIntensityCellShading = max(lightIntensityCellShading, lightIntensity * attenuation);\n"
"                        #endif\n"
"                    }\n"
"                    else if (L.Type == 3.0)\n"
"                    {\n"
"                        LightDir = normalize(L.Position - Vertex);\n"
"                        vec3 HalfVec = TangentMatrix * normalize(EyeVec + LightDir);\n"
"                        vec3 LightVec = TangentMatrix * LightDir;\n"
"\n"
"                        lightIntensity = specularPower = 0.0;\n"
"\n"
"                        attenuation = Attenuation(Vertex, L.Position, L.Radius);\n"
"                        spotEffect = 1.0 - DualConeSpotLight(Vertex, L.Position, L.Direction, L.Cones.x, L.Cones.y);\n"
"\n"
"                        CalculateLighting(LightVec, HalfVec, Normal, uShininess, lightIntensity, specularPower);\n"
"\n"
"                        #ifdef SPOTSHADOW\n"
"                            float SpotShadow = 0.0;\n"
"                            if (spotEffect>0.0 && L.HaveShadowMap)\n"
"                            {\n"
"                                SpotShadow+=PCFSPOT(uSpotShadowMaps,uSpotDepthsMVP,uPCFTexelSize1,vWorldPosition);\n"
"                            }\n"
"                            else SpotShadow = 1.0;\n"
"                            \n"
"                            _diffuse += lightIntensity * L.Color * SpotShadow * spotEffect * attenuation;\n"
"                            _specular += specularPower * L.Color * specular * spotEffect * attenuation * SpotShadow;\n"
"                            lightIntensityCellShading = max(lightIntensityCellShading, lightIntensity * spotEffect * attenuation * SpotShadow);\n"
"                        #else\n"
"                            _diffuse += lightIntensity * L.Color * attenuation;\n"
"                            _specular += specularPower * L.Color * specular * attenuation;\n"
"                            lightIntensityCellShading = max(lightIntensityCellShading, lightIntensity * spotEffect * attenuation);\n"
"                        #endif\n"
"                    }\n"
"                }\n"
"            }\n"
"            #if defined(DIFFUSE)\n"
"                diffuse = _diffuse * diffuse + _specular * specular;\n"
"            #elif defined(CELLSHADING)\n"
"                float factor = 3.0;\n"
"                if (lightIntensityCellShading > 0.95) factor = 3.0;\n"
"                else if (lightIntensityCellShading > 0.7) factor = 2.0;\n"
"                else if (lightIntensityCellShading > 0.5) factor = 1.0;\n"
"                else if (lightIntensityCellShading > 0.25) factor = 0.8;\n"
"                else factor = 0.5;\n"
"                diffuse = factor * diffuse;\n"
"            #endif\n"
"        #endif\n"
"\n"
"        #ifdef CASTSHADOWS\n"
"            diffuse.x = gl_FragCoord.z;\n"
"        #endif\n"
"\n"
"        gl_FragColor = vec4(diffuse.xyz,diffuse.w*uOpacity);\n"
"    }\n"
"    \n"
"#endif";
};