class frameObj {
public:
	int sourceX, sourceY;
	int sourceWidth, sourceHeight;
	int frameLength;

	frameObj();
	frameObj(int newSrcX,int newSrcY,int newSrcWidth,int newSrcHeight,int newLen);
	void set(int newSrcX, int newSrcY, int newSrcWidth, int newSrcHeight);
};