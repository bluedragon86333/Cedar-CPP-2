


class healthyObj {
public:
	int hp = 3;
	int maxhp = 3;
	int immortalFrameLength = 40;
	bool isMortal = true;
	int mortalFrame = 0;
	bool isDead = false;

	void healthTic();

	void healthTic(int decrement);
};