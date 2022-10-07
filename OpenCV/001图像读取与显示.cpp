#include<opencv2/opencv.hpp>
#include<iostream>
#include"quickdemo.h"
using namespace std;
using namespace cv;

int main()
{
	Mat girl = imread("image/girl.jpg",IMREAD_UNCHANGED);
	//Mat girl = imread("image/see_my_face.jpg",IMREAD_UNCHANGED);
	if (girl.empty())
	{
		printf("could not load image\n");
		return -1;
	}
	//namedWindow("Å®º¢", WINDOW_FREERATIO);
	imshow("Å®º¢", girl);

	QuickDemo qd;
	//qd.colorSpace_Demo(girl);
	//qd.mat_creation_demo(girl);
	//qd.pixel_visit_demo(girl);
	//qd.operators_demo(girl);
	//qd.tracking_bar_demo(girl);
	//qd.bitwise_demo(girl);
	//qd.channels_demo(girl);
	//qd.inrange_demo(girl);

	waitKey(0);
	destroyAllWindows();
	return 0;
}