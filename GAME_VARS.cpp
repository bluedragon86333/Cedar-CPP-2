#include<iostream>
#include"GAME_VARS.hpp"
using namespace std;

namespace GameVars {


	Play_Field_Definitions::Play_Field_Definitions(int left, int right, int top, int bottom) {
		leftEdge = left;
		rightEdge = right;
		topEdge = top;
		bottomEdge = bottom;
	}
	Play_Field_Definitions playField(0,0,0,0);
}