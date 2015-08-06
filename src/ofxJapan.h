#pragma once

/*!
 This addons is lisenced under DO WHAT THE FUCK YOU WANT TO PUBLIC LICENSE Version 2
 http://www.wtfpl.net/
 
 Reading materials
 https://twitter.com/Kezzardrix/status/629106664814219264
 https://www.google.co.jp/search?espv=2&biw=1516&bih=1055&tbm=isch&sa=1&q=tokyo+2020+emblem+ripoff&oq=tokyo+2020+emblem+ripoff&gs_l=img.3...2712.4568.0.4642.7.7.0.0.0.0.94.461.7.7.0....0...1c.1.64.img..7.0.0.JBPmBZi2pyQ
 */

class ofxJapan {
public:
	//! drawing something similar to Japan national flag
	static void draw(float x, float y, float radius) {
		ofPushStyle();
		ofSetCircleResolution(100);
		ofSetColor(190, 0, 63);
		ofCircle(x, y, radius);
		ofPopStyle();
	}
};