#include <opencv2/imgcodecs.hpp> 
#include <opencv2/highgui.hpp> 
#include <opencv2/imgproc.hpp> 
#include <iostream>
using namespace cv;
using namespace std;
///// Images //////
int draw_line_text() {

	//string path = "Resources/test.png";
	//Mat img_google = imread(path);

	Mat img(360, 720, CV_8UC3, Scalar(255, 255, 255));
	circle(img, Point(360, 180), 155, Scalar(0, 69, 155), 10);
	rectangle(img, Point(100, 100), Point(640, 250), Scalar(255, 255, 0), 5);
	line(img, Point(250, 200), Point(300, 200), Scalar(255, 255, 0), 2);
	putText(img, "Nishant", Point(250, 210), FONT_HERSHEY_DUPLEX, 0.75, Scalar(0, 69, 255));
	imshow("Image", img);
	waitKey(0);
	return 0;
	//////
}