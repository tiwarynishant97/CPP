/*#include <opencv2/imgcodecs.hpp> 
#include <opencv2/highgui.hpp> 
#include <opencv2/imgproc.hpp> 
#include <iostream>
using namespace cv;
using namespace std;

void getContours(Mat imgDil,Mat imgN) {
	{{Point(20,30),Point},
		{},
		{},}
	findContours(imgDil, contours, hierarchy, RETR_EXTERNAL, CHAIN_APPROX_SIMPLE);
}

int main(){
	string path = "Resources/shapes.png";
	Mat img = imread(path);
	Mat imgCanny,imgDilate;


	//Canny edge
	Canny(img, imgCanny, 50, 150);
	imshow("Image", img);
	imshow("Image canny", imgCanny);

	//Dilate
	Mat kernel = getStructuringElement(MORPH_RECT, Size(2, 2));
	dilate(imgCanny, imgDilate, kernel);
	getContours(imgDilate);

	imshow("Image Dilate", imgDilate);


	waitKey(0);


	return 0;
}*/