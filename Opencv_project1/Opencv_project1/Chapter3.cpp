#include <opencv2/imgcodecs.hpp> 
#include <opencv2/highgui.hpp> 
#include <opencv2/imgproc.hpp> 
#include <iostream>
using namespace cv;
using namespace std;
///// Images //////
int resize_crop() {

	string path = "Resources/test.png";
	Mat img = imread(path);
	Mat imgResize,imgCrop;
    
	//resize by resolution
	resize(img, imgResize,Size(600,100));

	//resize by ratio
	//resize(img, imgResize, Size(),0.5,0.5);
	cout << "LOG : "<<img.size()<<endl;
	imshow("Image", img);
	imshow("Image resized", imgResize);

	//Crop image
	//first 2 are starting cordinates and 
	//next to resolution from that point
	Rect roi(80, 70, 50, 50);
	imgCrop = img(roi);
	imshow("Image crop", imgCrop);


	waitKey(0);
	return 0;
}