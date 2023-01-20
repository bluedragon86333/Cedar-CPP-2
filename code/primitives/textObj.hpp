#include<iostream>
using namespace std;
#include"SFML/Graphics.hpp"

class TextObj {
public:
	string text;
	int x, y;
	bool centerOrigin;
	sf::Color color;
	int fontSize;

	void conformToLength(int length);
};