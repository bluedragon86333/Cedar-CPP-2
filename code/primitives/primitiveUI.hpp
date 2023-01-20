#pragma once
#include<iostream>
#include<vector>
#include"KeyHandler.hpp"
#include"SFML/Graphics.hpp"
using namespace std;

class Menu {
public:
	int selectX, selectY;

};

class TextMenu : public Menu {
public:
	vector<string> options;
	int tlx, tly;
	const int fontSize = 8;
	bool upReady, downReady;

	TextMenu(vector<string> newOptions, int startPosX, int startPosY, int xin, int yin);
	TextMenu();
	
	void set(vector<string> newOptions, int startPosX, int startPosY, int xin, int yin);
	void process(KeyHandler k);
};

class HudText {
public:
	sf::Vector2i tl;
	string contents;

	HudText();
	HudText(int tlx,int tly,string text);
};

