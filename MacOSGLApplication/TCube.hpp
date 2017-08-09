//
//  TCube.hpp
//  MacOSGLApplication
//
//  Created by adam dilger on 8/8/17.
//  Copyright © 2017 Adam Dilger. All rights reserved.
//

#ifndef TCube_hpp
#define TCube_hpp

#include "Mesh.h"

namespace T3D
{
    class TCube :
    public Mesh
    {
    public:
        TCube(float size, float amount);
        virtual ~TCube(void);
    };
}

#endif /* TCube_hpp */
