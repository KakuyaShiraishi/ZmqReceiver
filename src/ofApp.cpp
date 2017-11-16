#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    string remoteZMQHostIP = "localhost";
    int rcvport = 9999;
    receiver.connect("tcp://" + remoteZMQHostIP + ":" + ofToString(rcvport));
}

//--------------------------------------------------------------
void ofApp::update(){
    while (receiver.hasWaitingMessage()) {
        ofBuffer data;
        ofPixels px;
        receiver.getNextMessage(data);
        ofLoadImage(px, data);
        img.setFromPixels(px);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    if(img.isAllocated()){
        img.draw(0, 0);
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
