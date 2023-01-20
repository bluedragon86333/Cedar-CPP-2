#include"textObj.hpp"
#include<iostream>
using namespace std;

void TextObj::conformToLength(int length) {
	while (text.length() < length) {
		text = "0" + text;
	}
}