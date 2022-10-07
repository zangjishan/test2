#include "quickdemo.h"

void QuickDemo::colorSpace_Demo(Mat& image)
{
	Mat hsv, gray;
	cvtColor(image, hsv, COLOR_BGR2HSV);
	cvtColor(image, gray, COLOR_BGR2GRAY);
	imshow("HSV", hsv);
	imshow("GRAY", gray);
	imwrite("image/hsv.png", hsv);
	imwrite("image/gray.png", gray);
}