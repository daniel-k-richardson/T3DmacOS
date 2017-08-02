// =========================================================================================
// KXG363 - Advanced Games Programming, 2012
// =========================================================================================
//
// Author: Robert Ollington
//
// input.cpp
//
// Simple static class to track keyboard and mouse
// Adapted from Ogre3D

#include "Input.h"
#include <stdio.h>

namespace T3D
{
	bool Input::keyDown[512];
	int Input::mouseX = 0;
	int Input::mouseY = 0;

	void Input::init(){
		for (int i=0; i<512; i++){
			keyDown[i] = false;
		}
		mouseX = 0; mouseY = 0;
	}
    
    bool checkKeyCodeValidity(int keycode) {
        if (keycode >= 512) {
            printf("Input.c: Keyboard Code too high. key:[%d]\n", keycode);
            return true;
        }
        
        return false;
    }

	void Input::onKeyDown(int keycode) {
        
        if (checkKeyCodeValidity(keycode)) {
            return;
        }
        
		keyDown[keycode] = true;
	}

	void Input::onKeyUp(int keycode){
        
        if (checkKeyCodeValidity(keycode)) {
            return;
        }
        
		keyDown[keycode] = false;
	}

	void Input::onMouseMotion(int dx, int dy){
		mouseX = dx;
		mouseY = dy;
	}
}
