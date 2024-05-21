#include <opencv2/imgcodecs.hpp> 
#include <opencv2/highgui.hpp> 
#include <opencv2/imgproc.hpp> 
#include <iostream>
using namespace cv;
using namespace std;
///// Images //////
int main() {
	

	string path = "Resources/test.png";
	Mat img1 = imread(path);
	string path2 = "Resources/lambo.jpg";
	Mat img2 = imread(path2);
	Mat imgR;
	Rect roi = Rect(600, 600, 600, 600);
		double alpha = 0.5;
		double beta = (1.0 - alpha);
		//resize(img1, img1, img2.size());
		//addWeighted(img1, alpha, img2, beta, 0.0, imgR);
		//addWeighted(img1(roi), alpha, img2, 1 - alpha, 0.0, img1(roi));
		imshow("img1 ", img1);
		imshow("img2 ", img2);
		//imshow("Linear Blend", imgR);
		waitKey(0);
		return 0;
}
