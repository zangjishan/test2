#include"quickdemo.h"
using namespace cv;

void QuickDemo::mat_creation_demo(Mat& image)
{
	Mat m1, m2;
	m1 = image.clone();
	image.copyTo(m2);
	Mat m3 = Mat::zeros(Size(2, 8), CV_8UC1);
	std::cout << m3 << std::endl;
	std::cout << "width:" << m3.cols << " height:" << m3.rows << " channel:" << m3.channels() << std::endl;
}