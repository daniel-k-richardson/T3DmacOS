// =========================================================================================
// KXG363 - Advanced Games Programming
// =========================================================================================
//
// Author: Robert Ollington
//
// GLTestApplication.cpp
//
// A dummy application for running the GLTestRenderer (used as an OpenGL sandbox)

#pragma once
#include "MacOSGLApplication.h"


namespace T3D{

	class GLTestApplication :
		public MacOSGLApplication
	{
	public:
		GLTestApplication(void);
		~GLTestApplication(void);

		bool init();
	};

}
