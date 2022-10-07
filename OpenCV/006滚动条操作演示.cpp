#include"quickdemo.h"

Mat dst, m, src;
int max_value = 100;
int lightness = 50;

static void on_track(int, void*)
{
	m = Scalar(lightness, lightness, lightness);
	add(src, m, dst);
	imshow("亮度调整", dst);
}

void QuickDemo::tracking_bar_demo(Mat& image)
{
	namedWindow("亮度调整", WINDOW_AUTOSIZE);
	dst = Mat::zeros(image.size(), image.type());
	m = Mat::zeros(image.size(), image.type());
	src = image.clone();
	createTrackbar("Value_bar", "亮度调整", &lightness, max_value, on_track);
}

