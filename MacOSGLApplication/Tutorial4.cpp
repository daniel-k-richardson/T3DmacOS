//
//  T3DAdam.cpp
//  MacOSGLApplication
//
//  Created by adam dilger on 8/8/17.
//  Copyright © 2017 Adam Dilger. All rights reserved.
//

#include "Tutorial4.hpp"
#include "TCube.hpp"
#include "Pyramid.hpp"
#include "Cylinder.hpp"
#include "PlaneMesh.h"
#include "Sphere.h"
#include "KeyboardController.h"
#include "TerrainFollower.h"
#include "RotateBehaviour.h"
#include "LookAtBehaviour.h"
#include "Terrain.h"
#include "Camera.h"
#include "ParticleEmitter.h"
#include "ParticleBehaviour.h"
#include "PerfLogTask.h"
#include "DiagMessageTask.h"
#include "Material.h"
#include "Animation.h"
#include "Billboard.h"
#include "Math.h"
#include "Sweep.h"
#include "PlaneMesh.h"

namespace T3D{
    
    Tutorial4::Tutorial4(void)
    {
    }
    
    
    Tutorial4::~Tutorial4(void)
    {
    }
    
    bool Tutorial4::init(){
        // Call init of superclass (sets up sdl and opengl)
        MacOSGLApplication::init();
        
        
        //MATERIALS
        Material *green = renderer->createMaterial(Renderer::PR_OPAQUE);
        green->setDiffuse(0,1,0,1);
        
        Material *blue = renderer->createMaterial(Renderer::PR_OPAQUE);
        blue->setDiffuse(0.3,0.3,0.9,1);
        
        
        GameObject *lightObj = new GameObject(this);
        Light *light = new Light(Light::DIRECTIONAL);
        light->setAmbient(1,1,1);
        light->setDiffuse(1,1,1);
        light->setSpecular(1,1,1);
        lightObj->setLight(light);
        lightObj->getTransform()->setLocalRotation(Vector3(-45*Math::DEG2RAD, 70*Math::DEG2RAD, 0));
        lightObj->getTransform()->setParent(root);
        
        GameObject *camObj = new GameObject(this);
        renderer->camera =
        new Camera(Camera::PERSPECTIVE,0.1,500.0,45.0,1.6);
        camObj->getTransform()->setLocalPosition(Vector3(0,0,20));
        camObj->getTransform()->setLocalRotation(Vector3(0,0,0));
        camObj->setCamera(renderer->camera);
        camObj->getTransform()->setParent(root);
        camObj->addComponent(new KeyboardController());
        
//        GameObject *cube = new GameObject(this);
//        cube->setMesh(new TCube(1, 3));
//        cube->setMaterial(green);
//        cube->getTransform()->setLocalPosition(Vector3(0,0,0));
//        cube->getTransform()->setParent(root);
//        cube->getTransform()->name = "TCube";
        
//        GameObject *cube = new GameObject(this);
//        cube->setMesh(new Pyramid(1));
//        cube->setMaterial(green);
//        cube->getTransform()->setLocalPosition(Vector3(0,0,0));
//        cube->getTransform()->setParent(root);
//        cube->getTransform()->name = "Pyramid";
        
        GameObject *cube = new GameObject(this);
        cube->setMesh(new Cylinder(10, 2, 2));
        cube->setMaterial(green);
        cube->getTransform()->setLocalPosition(Vector3(0,0,0));
        cube->getTransform()->setParent(root);
        cube->getTransform()->name = "Cylinder";
        
        return true;
    }
}
