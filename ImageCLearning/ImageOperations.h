#pragma once
#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

class ImageOperations
{
public:
	ImageOperations(void);
	~ImageOperations(void);
	static ImageOperations* getInstance();
	void loadimage(string path);
	void imagedatastructure() const;
	void salt( int n);


private:
	static ImageOperations* inst_;
	Mat myimg;
	static Mat function();
	int i, j;
};
