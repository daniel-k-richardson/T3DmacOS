// =========================================================================================
// KXG363 - Advanced Games Programming
// =========================================================================================
//
// Author: Robert Ollington
//
// ShaderTest.cpp
//
// A simple application used for testing lighting shaders

#pragma once
#include "MacOSGLApplication.h"

namespace T3D{

	class ShaderTest :
		public MacOSGLApplication
	{
	public:
		ShaderTest(void);
		~ShaderTest(void);
	
		bool init();
	};

}

