// =========================================================================================
// KXG363 - Advanced Games Programming
// =========================================================================================
//
// Author: Robert Ollington
//
// GameObject.cpp
//
// Simple task for drawing to and animating textures, used in tutorial 1 for practice implementing drawing routines

#include <math.h>
#include "DrawTask.h"

namespace T3D {

	DrawTask::DrawTask(T3DApplication *app, Texture* tex) : Task(app)
	{
		drawArea = tex;
		init();
	}


	DrawTask::~DrawTask(void)
	{
	}

	void DrawTask::init(){		
		drawArea->clear(Colour(255,255,255,255));
		
        drawCircle(100,Colour(0,0,0,255));
        
        //drawDDALine(100,100,100,200,Colour(0,0,0,255));
	}

	void DrawTask::drawDDALine(int x1, int y1, int x2, int y2,Colour c)
    {
        // get the difference between between start and end
        int deltax = x2 - x1;
        int deltay = y2 - y1;
        
        // set how many steps are required to create the line
        float steps = abs(deltay);
        
        // if the length of y is greater than the length of x, then the y difference is used
        if (abs(deltay) > abs(deltax)) {
            
            steps = abs(deltay);
        } else {
            steps = abs(deltax);
        }
        
        float xIncrement = deltax / steps;
        float yIncrement = deltay / steps;
        
        // update the x and y coordinates
        float x = x1;
        float y = y1;
        
        // keep plotting the pixels and drawing it on the screen.
        for (int i = 0; i <= steps; i++) {
            drawArea->plotPixel(int(x), int(y), c);
            x += xIncrement;
            y += yIncrement;
        }
    }
    
    void DrawTask::drawCircle(float r, Colour c) {
        // start position or the centre of the circle
        int centerX = 100;
        int centreY = 100;
        
        // the plots to get the arc
        int x;
        int y;
        
        
        // divide the problem into a quard
        for (y = 0; y <= (r / sqrt(2)); y++){
            x = sqrt((r * r) - (y * y));
            
            drawArea->plotPixel(centerX + x, centreY + y, c);
            drawArea->plotPixel(centerX + x, centreY - y, c);
            
            drawArea->plotPixel(centerX - x, centreY + y, c);
            drawArea->plotPixel(centerX - x, centreY - y, c);
            
            drawArea->plotPixel(centerX + y, centreY + x, c);
            drawArea->plotPixel(centerX - y, centreY + x, c);
            
            drawArea->plotPixel(centerX + y, centreY - x, c);
            drawArea->plotPixel(centerX - y, centreY - x, c);
        }
      }
    
    Vector3 DrawTask::drawPolygon(Colour c) {
        
        Vector3 polygon[6] = {
            
        }
        
        return null;
    }
    
    void DrawTask::drawBresLine(int x1, int y1, int x2, int y2, Colour c){
	}

	void DrawTask::update(float dt){
		//drawArea->clear(Colour(255,255,255,255));

		app->getRenderer()->reloadTexture(drawArea);
	}

}
