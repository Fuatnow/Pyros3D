//============================================================================
// Name        : CubemapRenderer.h
// Author      : Duarte Peixinho
// Version     :
// Copyright   : ;)
// Description : Dynamic Cube Map aka Environment Map
//============================================================================

#ifndef CUBEMAPRENDERER_H
#define CUBEMAPRENDERER_H

#include "../../IRenderer.h"
#include "../../../../Core/Projection/Projection.h"

namespace p3d {
    
    class CubemapRenderer : public IRenderer {
        
        public:
            
            CubemapRenderer(const uint32 &Width, const uint32 &Height);
            
            ~CubemapRenderer();
            
            virtual std::vector<RenderingMesh*> GroupAndSortAssets(SceneGraph* Scene, GameObject* Camera);
            
            void RenderCubeMap(SceneGraph* Scene, GameObject* AllSeeingEye, const f32 &Near, const f32 &Far);
            
            virtual void RenderScene(const p3d::Projection &projection, GameObject* Camera, SceneGraph* Scene, const uint32 BufferOptions = Buffer_Bit::Color | Buffer_Bit::Depth) {}
            
            Texture* GetTexture();
            
        protected:
            
            GameObject* AllSeeingEye;
            Texture* environmentMap;
            FrameBuffer* fbo;
            
    };
    
};

#endif /* CUBEMAPRENDERER_H */