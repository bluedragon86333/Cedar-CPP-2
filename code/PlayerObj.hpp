#include"AnimationObj.hpp"
#include"primitives/mortalObj.hpp"
class PlayerObj : public animObj, public MortalObj {
public:
	int getLevelIncrement();
	PlayerObj();
	void processX(KeyHandler key);
	void processY(KeyHandler key);
	void animationProcess();
};