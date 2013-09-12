//============================================================================
// Name        : AssetManager.h
// Author      : Duarte Peixinho
// Version     :
// Copyright   : ;)
// Description : AssetManager - It will provide loaders for Textures, Models, 
//               Sounds and Animations
//               It Upload Textures and Geometry to GPU (VBOS)
//============================================================================

#ifndef ASSETMANAGER_H
#define ASSETMANAGER_H

#include "../Ext/StringIDs/StringID.hpp"
#include "../Core/Buffers/GeometryBuffer.h"
#include "../AssetManager/Assets/Renderable/Renderables.h"
#include <map>
#include <vector>
#include <list>
#include <SFML/Graphics/Image.hpp>

#undef CreateFont

namespace p3d {

	using namespace Renderables;

    namespace TextureTransparency {
        enum {
            Opaque = 0,
            Transparent
        };
    }

    namespace TextureFilter {
        enum {
            Nearest = 0,
            Linear,
            LinearMipmapLinear,
            LinearMipmapNearest,
            NearestMipmapNearest,
            NearestMipmapLinear
        };
    }

    namespace TextureRepeat {
        enum {
            Clamp = 0,
            ClampToBorder,
            ClampToEdge,
            Repeat
        };
    }

    namespace TextureDataType {
        enum {
            RGBA = 0,
            DepthComponent,
            DepthComponent16,
            DepthComponent24,
            DepthComponent32,
            R,
            R16F,
            R32F,
            R16I,
            R32I,
            RG,
            RG16F,
            RG32F,
            RG16I,
            RG32I,
            RGB,
            RGB16F,
            RGB32F,
            RGB16I,
            RGB32I,
            RGBA16F,
            RGBA32F,
            RGBA16I,
            RGBA32I,
            ALPHA
        };
    }
    
    namespace TextureType {
        enum {
            CubemapPositive_X = 0,
            CubemapNegative_X,
            CubemapPositive_Y,
            CubemapNegative_Y,
            CubemapPositive_Z,
            CubemapNegative_Z,
            Texture
        };
    }
    
    struct Asset {
        uint32 ID;
        uint32 Type;
        uint32 Using;
        IAsset* AssetPTR;
    };

    class AssetManager {
        
        friend class RenderingComponent;
        
        public:
            
            // Renderables
            static uint32 LoadModel(const std::string &ModelPath, bool smooth = false);
            static uint32 CreateCube(const f32 &width, const f32 &height, const f32 &depth, bool smooth = false, bool flip = false);
            static uint32 CreateSphere(const f32 &radius, const uint32 &segmentsW = 16, const uint32 &segmentsH = 8, bool smooth = false, bool HalfSphere = false, bool flip = false);
            static uint32 CreateCone(const f32 &radius, const f32 &height, const uint32 &segmentsW, const uint32 &segmentsH, const bool &openEnded, bool smooth = false, bool flip = false);
            static uint32 CreateCylinder(const f32 &radius, const f32 &height, const uint32 &segmentsW, const uint32 &segmentsH, const bool &openEnded, bool smooth = false, bool flip = false);
            static uint32 CreateCapsule(const f32 &radius, const f32 &height, const uint32 &numRings, const uint32 &segmentsW, const uint32 &segmentsH, bool smooth = false, bool flip = false);
            static uint32 CreateTorus(const f32 &radius, const f32 &tube, const uint32 &segmentsW = 60, const uint32 segmentsH = 6, bool smooth = false, bool flip = false);
            static uint32 CreateTorusKnot(const f32 &radius, const f32 &tube, const uint32 &segmentsW = 60, const uint32 &segmentsH = 6, const f32 &p = 2, const f32 &q = 3, const uint32 &heightscale = 1, bool smooth = false, bool flip = false);
            static uint32 CreatePlane(const f32 &width, const f32 &height, bool smooth = false, bool flip = false);
            static uint32 CreateCustom(Renderables::Renderable* Custom);
            
            static uint32 CreateFont(const std::string &font,const f32 &size);
            static uint32 CreateText(const uint32 &Handle, const std::string &text, const f32 &charWidth, const f32 &charHeight, const Vec4 &color = Vec4(1,1,1,1));
            static uint32 CreateText(const uint32 &Handle, const std::string &text, const f32 &charWidth, const f32 &charHeight, const std::vector<Vec4> &Color);
            
            // Get and Delete Asset
            static Asset* GetAsset(const uint32 &Handle);
            static void DeleteAsset(const uint32 &Handle);

            // Texture
            static uint32 LoadTexture(const std::string& FileName, const uint32 &Type, bool Mipmapping = true); 
            static void LoadAddTexture(const uint32 &Handle, const std::string& FileName, const uint32 &Type, bool Mipmapping = true); 
            static uint32 CreateTexture(const uint32 &Type, const uint32 &DataType, const int32&width = 0, const int32&height = 0, bool Mipmapping = true);
            static void AddTexture(const uint32 &Handle, const uint32 &Type, const uint32 &DataType, const int32&width = 0, const int32&height = 0, bool Mipmapping = true);
            static uint32 CreateTexture(bool Mipmapping = true);
            static void SetMinMagFilter(const uint32 &Handle, const uint32 &MinFilter,const uint32 &MagFilter);
            static void SetRepeat(const uint32 &Handle, const uint32 &WrapS,const uint32 &WrapT);
            static void SetAnysotropy(const uint32 &Handle, const f32 &Anysotropic);
            static void SetTransparency(const uint32 &Handle, const f32 &Transparency);
            static void Resize(const uint32 &Handle, const uint32 &Width, const uint32 &Height);
            static void UpdateData(const uint32 &Handle, void* srcPTR);
            static void UpdateMipmap(const uint32 &Handle);
            static void EnableCompareMode(const uint32 &Handle);
            static void SetTextureByteAlignment(const uint32 &Handle, const uint32 &Value);
            
            // Use Asset
            static void BindTexture(const uint32 &Handle);
            static void UnbindTexture(const uint32 &Handle);
            
            // Get Last Binded Texture
            static uint32 GetLastTextureBindedUnit();
        
            // Get Asset Type
            static int32 GetAssetType(const uint32 &Handle);
            
        protected:
            
            // Asset Usage
            static Asset* UseAsset(const uint32 &Handle);
            static void UnUseAsset(const uint32 &Handle);
            
        private:
            
            // List Of Assets
            static std::map<uint32, Asset*> AssetsList;
            static uint32 AssetsCount;        

            // Texture Unit Binded
            static uint32 LastUnitBinded, UnitBinded;
            
    };

}

#endif	/* ASSETMANAGER_H */
