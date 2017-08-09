//
//  T3DAdam.hpp
//  MacOSGLApplication
//
//  Created by adam dilger on 8/8/17.
//  Copyright © 2017 Adam Dilger. All rights reserved.
//

#ifndef Tutorial4_hpp
#define Tutorial4_hpp

#include <stdio.h>
#include "MacOSGLApplication.h"

namespace T3D {
    
    class Tutorial4 :
    public MacOSGLApplication
    {
    public:
        Tutorial4(void);
        ~Tutorial4(void);
        
        bool init();
    };
    
}

#endif /* Tutorial4_hpp */
