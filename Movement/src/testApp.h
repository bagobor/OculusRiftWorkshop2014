#pragma once

#include "ofMain.h"
#include "ofxOculusRift.h"
#include "Utils/Cameras/ofxWalkingFirstPersonCamera.h"

class testApp : public ofBaseApp
{
	public:

		void setup();
		void update();
		void draw();

		void drawScene();

		void keyPressed(int key);

		ofxOculusRift		oculusRift;

		ofLight				light;
		//ofCamera			cam;
		ofxWalkingFirstPersonCameraOculus camera;
	
		bool showOverlay;
		bool predictive;

		float gridSize;

		ofVec3f cursorRift;
		ofVec3f demoRift;

		ofVec2f lastMouse;
		ofVec2f rotationSpeed;
	
};
