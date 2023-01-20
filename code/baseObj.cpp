#include"baseObj.hpp"
#include<iostream>

void baseObj::move() {
	setPos(x + xv,y + yv,0);
}

void baseObj::move(int xin, int yin) {
	setPos(x + xin,y + yin,0);
}

void baseObj::setPos(int xin,int yin,int zin) {
	x = xin;
	y = yin;
	z = zin;
}

void baseObj::setSize(int widthin, int heightin) {
	width = widthin;
	height = heightin;
}

void baseObj::setVel(int xvin, int yvin) {
	xv = xvin; yv = yvin;
}

baseObj::baseObj(int xin, int yin, int zin, int widthin, int heightin, int xvin, int yvin) {
	setPos(xin,yin,zin);
	setVel(xvin,yvin);
	setSize(widthin,heightin);
}
baseObj::baseObj() {
	setPos(0,0,0);
	setSize(16,16);
	setVel(0,0);
}
baseObj::baseObj(int xin, int yin, int zin, std::string newClassName) {
	setPos(xin, yin, zin);
	setSize(16, 16);
	setVel(0, 0);
	className = newClassName;
}
