#include"quickdemo.h"

void QuickDemo::pixel_visit_demo(Mat& image)
{
	int w = image.cols;
	int h = image.rows;
	int dime = image.channels();
	//for (int row = 0; row < h; row++)//依靠数组
	//{
	//	for (int col = 0; col < w; col++)
	//	{
	//		if (dime == 1)
	//		{
	//			int pv = image.at<uchar>(row, col);
	//			image.at<uchar>(row, col) = 255 - pv;
	//		}
	//		if (dime == 3)
	//		{
	//			Vec3b bgr = image.at<Vec3b>(row, col);
	//			image.at<Vec3b>(row, col)[0] = 255 - bgr[0];
	//			image.at<Vec3b>(row, col)[1] = 255 - bgr[1];
	//			image.at<Vec3b>(row, col)[2] = 255 - bgr[2];
	//		}
	//	}
	//}

	for (int row = 0; row < h; row++)//依靠指针，速度更快
	{
		uchar* current_row = image.ptr<uchar>(row);
		for (int col = 0; col < w; col++)
		{
			if (dime == 1)
			{
				*current_row++ = 255 - *current_row;
			}
			if (dime == 3)
			{
				*current_row++ = 255 - *current_row;
				*current_row++ = 255 - *current_row;
				*current_row++ = 255 - *current_row;
			}
		}
	}
	imshow("图像读写", image);
}