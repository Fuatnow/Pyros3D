//============================================================================
// Name        : ForwardRenderer.h
// Author      : Duarte Peixinho
// Version     :
// Copyright   : ;)
// Description : Forward Renderer
//============================================================================

#ifndef FORWARDRENDERER_H
#define FORWARDRENDERER_H

#include "../IRenderer.h"
#include "../../../Core/Projection/Projection.h"

namespace p3d {

    class ForwardRenderer : public IRenderer {
        
        public:
            
            ForwardRenderer(const uint32 &Width, const uint32 &Height);
            
            ~ForwardRenderer();
            
            virtual void GroupAndSortAssets();
            
        virtual void RenderScene(const p3d::Projection &projection, GameObject* Camera, SceneGraph* Scene);
            
        private:
            GenericShaderMaterial* shadowMaterial;
        protected:
            
    };
    
};

#endif /* FORWARDRENDERER_H */