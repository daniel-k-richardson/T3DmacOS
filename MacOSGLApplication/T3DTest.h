// =========================================================================================
// KXG363 - Advanced Games Programming, 2012
// =========================================================================================
//
// Author: Robert Ollington
//
// t3dtest.h
//
// Example t3dapplication

#ifndef T3DTEST
#define T3DTEST

#include "MacOSGLApplication.h"

namespace T3D{

class T3DTest :
	public MacOSGLApplication
{
public:
	T3DTest(void);
	~T3DTest(void);

	bool init();
};

}
#endif

