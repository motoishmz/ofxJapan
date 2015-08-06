#include "ofMain.h"
#include "ofxJapan.h"

class ofApp : public ofBaseApp
{
public:
	void draw() {
		ofBackground(255);
		ofxJapan::draw(ofGetMouseX(), ofGetMouseY(), 100);
	}
};

#pragma mark -
#pragma mark main
int main(){
	ofSetupOpenGL(1600, 900, OF_WINDOW);
	ofRunApp(new ofApp());
}
