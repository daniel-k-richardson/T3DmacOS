// =========================================================================================
// KXG363 - Advanced Games Programming, 2012
// =========================================================================================
//
// Author: Robert Ollington
//
// MacOSGLApplication.h
//
// t3d application for macOS and OpenGL

#ifndef MACOSGLAPPLICATION_H
#define MACOSGLAPPLICATION_H

#include <OpenGL/glu.h>
#include <SDL2/SDL.h>
#include <SDL2_ttf/SDL_ttf.h>

#include "T3DApplication.h"
#include "FontCache.h"

namespace T3D 
{

	class MacOSGLApplication :
		public T3DApplication
	{
	protected:
        
        //MACOS DIFFERENT: instead of SDL_Surface, we use SDL_Window
        SDL_Window *window;
		FontCache fonts;

	public:
		MacOSGLApplication(void);
		virtual ~MacOSGLApplication(void);

		bool init();		
		int run(void);
		void quit(void);

		void handleEvent(SDL_Event *e);

		font *getFont(const char *filename, int pointSize) { return fonts.getFont(filename, pointSize); }

	};

}

#endif

