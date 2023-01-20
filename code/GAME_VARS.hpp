#include<iostream>
#include"SFML/Graphics.hpp"
#include"primitives/
using namespace std;

namespace GameVars {
	
	//////////////////////** MAP **//////////////////////
	extern int MAP_ID;
	extern string MAP_NAME;
	extern int MAP_WIDTH;
	extern int MAP_HEIGHT;

	extern bool isBossRoom;
	
	extern int SCRN_ID;
	
	extern int TILE_SIZE;
	extern int TILE_MARGIN;
	extern sf::Color TILE_BORDER_COLOR;
	extern int TILE_WIDTH;
	extern int TILE_HEIGHT;
	//////////////////////** PLAYER VARIABLES **//////////////////////
	class Player_Variables {
	public:
		sf::Vector2i position;
		sf::Vector2i oldPos;
		sf::Vector2i oldVel;
		int prevDir = -1;

	};


	//////////////////////** ENEMY VARIABLES **//////////////////////
	class Enemy_Variables {
	public:

	};

	//////////////////////** PLAY FIELD BOUNDS **//////////////////////

	class Play_Field_Definitions {
	public:
		int leftEdge;
		int rightEdge;
		int topEdge;
		int bottomEdge;
		
		Play_Field_Definitions(int left,int right,int top,int bottom);
	};
	extern Play_Field_Definitions playField;
}
