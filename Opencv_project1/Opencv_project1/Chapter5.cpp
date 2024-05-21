#include <opencv2/imgcodecs.hpp> 
#include <opencv2/highgui.hpp> 
#include <opencv2/imgproc.hpp> 
#include <iostream>
using namespace cv;
using namespace std;
///// Images //////
int warp_image() {
	Mat matrix, imgWarp;
	float w = 250;
	float h = 350;

	string path = "Resources/cards.jpg";
	Mat img = imread(path);

	Point2f src[4] = { { 169,36 }, {266, 64}, { 100,122 }, { 209,166 } };
	Point2f dst[4] = { {0.0f,0.0f},{w,0.0f},{0.0f,h},{w,h} };

	matrix = getPerspectiveTransform(src, dst);
	warpPerspective(img, imgWarp, matrix,Point(w,h));

	imshow("Image", img);
	imshow("ImageWarp", imgWarp);
	waitKey(0);
	return 0;
	//////
}