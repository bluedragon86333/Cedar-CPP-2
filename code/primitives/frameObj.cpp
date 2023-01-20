#include"frameObj.hpp"
frameObj::frameObj() {
	sourceX = 0;
	sourceY = 0;
	sourceWidth = 16;
	sourceHeight = 16;
	frameLength = 4;
}

frameObj::frameObj(int newSrcX, int newSrcY, int newSrcWidth, int newSrcHeight, int newLen) {
	sourceX = newSrcX;
	sourceY = newSrcY;
	sourceWidth = newSrcWidth;
	sourceHeight = newSrcHeight;
	frameLength = newLen;
}

void frameObj::set(int newSrcX, int newSrcY, int newSrcWidth, int newSrcHeight) {
	sourceX = newSrcX;
	sourceY = newSrcY;
	sourceWidth = newSrcWidth;
	sourceHeight = newSrcHeight;
}