#include <opencv2/imgcodecs.hpp> 
#include <opencv2/highgui.hpp> 
#include <opencv2/imgproc.hpp> 
#include <iostream>
using namespace cv;
using namespace std;
///// Images //////
//int main() {
//
//	string path = "Resources/test.png";
//	Mat img = imread(path);
//	imshow("Image", img);
//	waitKey(0);
//	return 0;
//}

// Video
//int main() {
//	string path = "resources/test_video.mp4";
//	videocapture cap(path);
//	mat img;
//
//	while (true) {
//		cap.read(img);
//		imshow("image", img);
//		waitkey(1);
//	}
//
//	return 0;
//}

// Web Cam
int video_stream() {
	VideoCapture cap(0);
	Mat img;

	while (true) {
		cap.read(img);
		imshow("Image", img);
		waitKey(1);
	}

	return 0;
}