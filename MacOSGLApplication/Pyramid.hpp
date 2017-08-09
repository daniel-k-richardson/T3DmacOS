//
//  Pyramid.hpp
//  MacOSGLApplication
//
//  Created by adam dilger on 8/8/17.
//  Copyright © 2017 Adam Dilger. All rights reserved.
//

#ifndef Pyramid_hpp
#define Pyramid_hpp

#include "Mesh.h"

namespace T3D
{
    class Pyramid :
    public Mesh
    {
    public:
        Pyramid(float size);
        virtual ~Pyramid(void);
    };
}

#endif /* Pyramid_hpp */
