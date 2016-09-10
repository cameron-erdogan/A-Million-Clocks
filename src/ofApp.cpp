#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
//    clocks.push_back(Clock(100, 100));
    double offsetX = 100;
    double offsetY = 100;
    
    for (unsigned int i = 0; i < 10; i++){
        for(unsigned int j = 0; j < 5; j++){
            clocks.push_back(Clock(offsetX + i*100, offsetY + j*100, true));
        }
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    for(unsigned int i =0; i < clocks.size(); i++){
        clocks[i].incrementByMinutes(0.1);
        clocks[i].incrementByHours(-0.01);
        clocks[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
