#include"primitives/baseObj.hpp"
#include"primitives/frameObj.hpp"
#include"SFML/Graphics.hpp"
#include<iostream>
using namespace std;

class animObj : public baseObj { //non-interactive animated surface, ex. particles, smoke, animated ground tiles
public:
	int frameId = 0;
	int frameCounter = 0;

	bool hasShadow = false;
	bool canLeaveScreen = false;
	int animId = 0;
	bool flipX = false; bool flipY = false;
	bool centerOrigin = false;
	bool canMoveDiagonally = false; //what the fuck did you think this meant? why do you need a comment for it?
	string animName = ""; //name of current animation

	animationObj anims[16];
	void animationTic();
	void setAnimation(int newId);
	void setAnimation(string newName);
	void makeAnimation(int id, int startX, int startY, int tileWidth, int tileHeight, int length, int frameLen);
	void makeAnimation(string newName, int id, int startX, int startY, int tileWidth, int tileHeight, int length, int frameLen);
	void move(int xin, int yin);
	void move();
	bool isOnLastFrame();
	//bool isOutOfBounds(GameConsts g, Area area);
	bool isOutOfBounds();
	void setSize(int newWidth, int newHeight);
	sf::Vector2f topleft();
	baseObj getBaseObj();
	animObj();
	void setBaseProperties(baseObj b);
};