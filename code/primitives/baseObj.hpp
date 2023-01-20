#include<iostream>

class baseObj {
public:
	std::string className = ""; //internal name for object
	int x, y,z;
	int dir;
	int width, height;
	int xv = 0; int yv = 0;
	baseObj();
	baseObj(int xin, int yin, int zin, int widthin, int heightin, int xvin, int yvin);
	baseObj(int xin, int yin, int zin, std::string newClassName);
	void setPos(int xin,int yin,int zin);
	void setSize(int widthin, int heightin);
	void setVel(int xvin, int yvin);
	void move();
	void move(int xin,int yin);
};
