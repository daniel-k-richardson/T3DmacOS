//
//  Cylinder.cpp
//  MacOSGLApplication
//
//  Created by adam dilger on 8/8/17.
//  Copyright © 2017 Adam Dilger. All rights reserved.
//

#include "Cylinder.hpp"
#include <math.h>
#include "Math.h"

namespace T3D
{
    Cylinder::Cylinder(int density, float radius, float height)
    {
        // Init vertex and index arrays
        initArrays(density * 2 + 2,	// num vertices
                   density * 2,		// num tris
                   density);		// num quads
        
        // Set vertices
        for (int i = 0; i < density; i++) {
            float theta = i * (Math::TWO_PI / density);
            
            float x = radius * cos(theta);
            float z = radius * sin(theta);
            float y = height/2;
            
            setVertex(i, x, y, z);
            setVertex(density + i, x, -y, z);
        }
        
        setVertex(density * 2, 0, height/2, 0);
        setVertex(density * 2 + 1, 0, -(height/2), 0);
        
        // Build quads
        for (int i = 0; i < density; i++) {
            setFace(i,
                    i,
                    (i + 1) % density,
                    density+(i+1)%density,
                    density+i);
        }
        
        //build tri
        for (int i = 0; i < density; i++) {
            setFace(i,
                    (i + 1) % density,
                    i,
                    density * 2);
        }
        
        for (int i = density; i < density * 2; i++) {
            setFace(i,
                    i + 1,
                    density+(i+1)%density + 1,
                    density * 2 + 1);
        }
        
        // Check vertex and index arrays
        checkArrays();
        
        // Calculate normals
        calcNormals();
    }
    
    
    Cylinder::~Cylinder(void)
    {
        // Mesh delete arrays if they have been created, not need to do anything here
    }
}
