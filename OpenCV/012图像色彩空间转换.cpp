#include"quickdemo.h"

void QuickDemo::inrange_demo(Mat& image)
{
	Mat hsv, mask;
	cvtColor(image, hsv, COLOR_BGR2HSV);
	inRange(hsv, Scalar(35, 43, 46), Scalar(77, 255, 255), mask);

	Mat redback = Mat::zeros(image.size(), image.type());
	redback = Scalar(40, 40, 200);
	bitwise_not(mask, mask);
	image.copyTo(redback, mask);//mask中非0（即非黑色）部分被拷贝到redback中
	imshow("换背景", redback);







}