//
//  Cylinder.hpp
//  MacOSGLApplication
//
//  Created by adam dilger on 8/8/17.
//  Copyright © 2017 Adam Dilger. All rights reserved.
//

#ifndef Cylinder_hpp
#define Cylinder_hpp

#include "Mesh.h"

namespace T3D
{
    class Cylinder :
    public Mesh
    {
    public:
        Cylinder(int density, float radius, float height);
        virtual ~Cylinder(void);
    };
}

#endif /* Cylinder_hpp */
