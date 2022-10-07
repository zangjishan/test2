#include "quickdemo.h"

void QuickDemo::channels_demo(Mat& image)
{
	std::vector<Mat> mv;
	split(image, mv);
	//imshow("Blue", mv[0]);
	//imshow("Green", mv[1]);
	//imshow("Red", mv[2]);

	Mat dst;
	mv[1] = 0;
	mv[2] = 0;
	merge(mv, dst);
	Mat dst2;
	dst2 = image - Scalar(0, 255, 255);
	imshow("À¶É«", dst);
	imshow("À¶É«2", dst2);

	int from_to[] = { 0,2,1,1,2,0 };
	mixChannels(&image, 1, &dst, 1, from_to, 3);
}