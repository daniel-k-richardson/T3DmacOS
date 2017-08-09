//
//  Pyramid.cpp
//  MacOSGLApplication
//
//  Created by adam dilger on 8/8/17.
//  Copyright © 2017 Adam Dilger. All rights reserved.
//

#include "Pyramid.hpp"

namespace T3D
{
    Pyramid::Pyramid(float size)
    {
        // Init vertex and index arrays
        initArrays(4+3*4,	// num vertices
                   4,		// num tris
                   1);		// num quads
        
        // Set vertices
        
        int pos=0;
        
        //front
        setVertex(pos++, -size, -size, -size);
        setVertex(pos++, size, -size, -size);
        setVertex(pos++, 0, size, 0);
        //back
        setVertex(pos++,-size,-size,size);
        setVertex(pos++,0,size,0);
        setVertex(pos++,size,-size,size);
        //left
        setVertex(pos++,0,size,0);
        setVertex(pos++,-size,-size,size);
        setVertex(pos++,-size,-size,-size);
        //right
        setVertex(pos++,size,-size,-size);
        setVertex(pos++,size,-size,size);
        setVertex(pos++,0,size,0);
        //bottom
        setVertex(pos++,-size,-size,-size);
        setVertex(pos++,-size,-size,size);
        setVertex(pos++,size,-size,size);
        setVertex(pos++,size,-size,-size);
        
        // Build quads
        pos = 0;
        
        //bottom
        setFace(0, 12, 13, 14, 15);
        
        //front
        setFace(pos++,2,1,0);
        //back
        setFace(pos++,5,4,3);
        //left
        setFace(pos++,8,7,6);
        //right
        setFace(pos++,11,10,9);
        
        // Check vertex and index arrays
        checkArrays();
        
        // Calculate normals
        calcNormals();
    }
    
    
    Pyramid::~Pyramid(void)
    {
        // Mesh delete arrays if they have been created, not need to do anything here
    }
}