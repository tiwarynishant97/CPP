#include <opencv2/imgcodecs.hpp> 
#include <opencv2/highgui.hpp> 
#include <opencv2/imgproc.hpp> 
#include <iostream>
using namespace cv;
using namespace std;

int basic_functions() {

    string path = "Resources/test.png";
	Mat img = imread(path);
	Mat imgGrey,imgBlur,imgCanny,imgDilate,imgErode;
	cvtColor(img, imgGrey,COLOR_BGR2GRAY);
	imshow("Image", img);
	waitKey(1000);
	imshow("Image", imgGrey);
	waitKey(1000);
	//blur
	GaussianBlur(img, imgBlur, Size(7, 7), 5, 0);
	imshow("Image Blur", imgBlur);
	waitKey(1000);
	
	//Edge detector
	Canny(img, imgCanny, 50, 150);
	imshow("Image Canny", imgCanny);
	waitKey(1000);


	//Dilate
	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
	dilate(imgCanny, imgDilate, kernel);
	imshow("Image Dilate", imgDilate);
	waitKey(1000);

	//Erosion
	erode(imgDilate, imgErode,kernel);
	imshow("Image Erosion", imgErode);
	waitKey(1000);
	
	return 0;
}