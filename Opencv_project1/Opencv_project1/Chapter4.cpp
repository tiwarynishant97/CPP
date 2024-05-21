#include <opencv2/imgcodecs.hpp> 
#include <opencv2/highgui.hpp> 
#include <opencv2/imgproc.hpp> 
#include <iostream>
using namespace cv;
using namespace std;
///// Images //////
int draw_circle_rect() {

	Mat img(360, 720, CV_8UC3, Scalar(255, 255, 255));
	circle(img, Point(360, 180), 155, Scalar(0, 69, 155),10);
	rectangle(img, Point(100, 100), Point(640, 250), Scalar(255, 255, 0), 5);
	imshow("Image", img);
	waitKey(0);
	return 0;
	//////
}