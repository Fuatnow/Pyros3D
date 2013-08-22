//============================================================================
// Name        : PhysicsCapsule.h
// Author      : Duarte Peixinho
// Version     :
// Copyright   : ;)
// Description : Physics Capsule  
//============================================================================

#ifndef PHYSICSCAPSULE_H
#define	PHYSICSCAPSULE_H

#include "../IPhysicsComponent.h"

namespace p3d {

    class PhysicsCapsule : public IPhysicsComponent {
        public:

            PhysicsCapsule();
            PhysicsCapsule(IPhysics* engine, const f32 &radius, const f32 &height, const f32 &mass = 0.f);

            virtual ~PhysicsCapsule();
	
            const f32 GetRadius()const  { return radius; }
            const f32 GetHeight()const  { return height; }
            
        protected:

            f32 radius;
            f32 height;

    };

}

#endif	/* PHYSICSCAPSULE_H */

