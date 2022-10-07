#include"quickdemo.h"

void QuickDemo::bitwise_demo(Mat& image)
{
	Mat m1 = Mat::zeros(Size(260, 260), CV_8UC3);
	Mat m2 = Mat::zeros(Size(260, 260), CV_8UC3);
	rectangle(m1, Rect(50, 50, 40, 40), Scalar(0, 100, 0), -1, LINE_8, 0);
	rectangle(m2, Rect(80, 80, 40, 40), Scalar(255, 255, 0), -1, LINE_8, 0);
	imshow("m1", m1);
	imshow("m2", m2);
	Mat dst;
	bitwise_and(m1, m2, dst);
	imshow("and", dst);
}