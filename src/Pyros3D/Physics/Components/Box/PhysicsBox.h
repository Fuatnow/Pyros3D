//============================================================================
// Name        : PhysicsBox.h
// Author      : Duarte Peixinho
// Version     :
// Copyright   : ;)
// Description : Physics Box  
//============================================================================

#ifndef PHYSICSBOX_H
#define	PHYSICSBOX_H

#include "../IPhysicsComponent.h"

namespace p3d {

    class PhysicsBox : public IPhysicsComponent {
        public:

            PhysicsBox(IPhysics* engine,const f32 &width, const f32 &height, const f32 &depth, const f32 &mass = 0.f);

            virtual ~PhysicsBox();
            
            const f32 GetWidth()const  { return width; }
            const f32 GetHeight()const  { return height; }
            const f32 GetDepth()const  { return depth; }
            
        protected:

            f32 width;
            f32 height;
            f32 depth;

    };

}

#endif	/* PHYSICSBOX_H */

