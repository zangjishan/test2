#include"quickdemo.h"

void QuickDemo::operators_demo(Mat& image)
{
	Mat dst, m;
	//dst = image + Scalar(50, 50, 50);          //加法
	//dst = image - Scalar(50, 50, 50);          //减法
	//dst = image / Scalar(2, 2, 2);//除法
	//m = Mat::zeros(image.size(), image.type());//乘法1
	//m = Scalar(2, 2, 2);
	//multiply(image, m, dst);
	//dst = image * 2;							 //乘法2
	
	//int w = image.cols;							 //加法2未完成
	//int h = image.rows;
	//m = Scalar(10, 10, 10);
	//for (int row = 0; row < h; row++)
	//{
	//	for (int col = 0; col < w; col++)
	//	{
	//			Vec3b p1 = image.at<Vec3b>(row, col);
	//			Vec3b p2 = m.at<Vec3b>(row, col);
	//			dst.at<Vec3b>(row, col)[0] = saturate_cast<uchar>(p1[0] + p2[0]);
	//			dst.at<Vec3b>(row, col)[1] = saturate_cast<uchar>(p1[1] + p2[1]);
	//			dst.at<Vec3b>(row, col)[2] = saturate_cast<uchar>(p1[2] + p2[2]);
	//	}
	//}

	add(image, m, dst);//加法
	subtract(image, m, dst);//减法
	multiply(image, m, dst);//乘法
	divide(image, m, dst);//除法
	imshow("加法", dst);
}
