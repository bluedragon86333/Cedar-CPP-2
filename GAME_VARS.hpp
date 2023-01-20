#include<iostream>

using namespace std;

namespace GameVars {
	
	extern int MAP_ID;
	extern string MAP_NAME;
	extern int MAP_WIDTH;
	extern int MAP_HEIGHT;
	extern bool isBossRoom;








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