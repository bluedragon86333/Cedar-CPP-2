#include"AnimationObj.hpp"
#include"GAME_VARS.hpp"

using namespace std;
using namespace GameVars;

bool animObj::isOutOfBounds() {
	if (x < playField.leftEdge || x > playField.rightEdge || y < playField.topEdge || y > playField.bottomEdge) {
		return true;
	}
	return false;
}


animObj::animObj() {

}

void animObj::move(int xin, int yin) {
	//xv = xin;
	//yv = yin;
	x += xin;
	y += yin;

	if (!canLeaveScreen && isOutOfBounds()) {
		x -= xin;
		y -= yin;
	}
	if (z == 0) {

	}
}

bool animObj::isOnLastFrame() {
	//console.log("frameId = " + to_string(frameId) + "; animLength = " + to_string(anims[animId].animLength));
	return (frameId == anims[animId].animLength - 1);
}

void animObj::move() {
	x += xv;
	y += yv;
	if (!canLeaveScreen && isOutOfBounds()) {
		x -= xv;
		y -= yv;
	}
}

void animObj::animationTic() {
	int lastFrameOfLoop = 1;
	if (frameCounter == anims[animId].frames.at(frameId).frameLength) { //if frameCounter == frameLength ; 
		frameCounter = 0;
		if (frameId == anims[animId].animLength - 1) {
			frameId = 0;
		}
		else {
			frameId++;
		}
	}
	else {
		frameCounter++;
	}
}

void animObj::setAnimation(int newId) {
	animId = newId;
	frameCounter = 0;
	frameId = 0;
}

void animObj::setAnimation(string newName) {
	for (int i = 0; i < 8; i++) {
		if (anims[i].name == newName) {
			animId = i;
		}
	}
	animName = newName;
	frameCounter = 0;
	frameId = 0;
}

void animObj::makeAnimation(int id, int startX, int startY, int tileWidth, int tileHeight, int length, int frameLen) {
	anims[id].animLength = length;
	anims[id].frames.clear();
	for (int i = 0; i < length; i++) {
		anims[id].frames.push_back(frameObj(startX + (i * tileWidth), startY, tileWidth, tileHeight, frameLen));
	}
}
void animObj::makeAnimation(string newName, int id, int startX, int startY, int tileWidth, int tileHeight, int length, int frameLen) {
	for (int i = 0; i < length; i++) {
		if (anims[i].name == newName) {
			animId = i;
		}
	}
	anims[id].animLength = length;
	anims[id].frames.clear(); //empties out slot in preparation for filling new frames in
	for (int i = 0; i < length; i++) {
		anims[id].frames.push_back(frameObj(startX + (i * tileWidth), startY, tileWidth, tileHeight, frameLen));
	}
}

sf::Vector2f animObj::topleft() {
	if (centerOrigin) {
		return sf::Vector2f(float(x - width / 2), float(y - height / 2));
	}
	else {
		return sf::Vector2f(float(x), float(y));
	}
}

void animObj::setSize(int newWidth, int newHeight) {
	width = newWidth;
	height = newHeight;
}

baseObj animObj::getBaseObj() {
	return baseObj(x, y, z, width, height, xv, yv);
}


void animObj::setBaseProperties(baseObj b) {
	setPos(b.x, b.y, b.z);
	setVel(b.xv, b.yv);
	setSize(b.width, b.height);
	className = b.className;
}