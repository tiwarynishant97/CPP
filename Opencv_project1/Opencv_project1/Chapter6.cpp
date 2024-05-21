#include <opencv2/imgcodecs.hpp> 
#include <opencv2/highgui.hpp> 
#include <opencv2/imgproc.hpp> 
#include <iostream>
using namespace cv;
using namespace std;

///// Colour Detection //////

int colour_detect() {
	string path = "Resources/lambo.jpg";
	Mat img = imread(path);
	Mat imgHSV,imgMask;
	int hmin = 0, smin = 110, vmin = 153;
	int hmax = 19, smax = 240, vmax = 255;

	cvtColor(img, imgHSV, COLOR_BGR2HSV);

	Scalar lower(hmin, smin, vmin);
	Scalar upper(hmax, smax, vmax);
	inRange(imgHSV, lower, upper, imgMask);

	imshow("Image BGR", img);
	imshow("Imaage HSV", imgHSV);
	imshow("Imaage Mask", imgMask);

	waitKey(0);
	return 0;
	waitKey(0);
	return 0;
}