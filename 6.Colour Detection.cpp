#include <opencv2/opencv.hpp>  
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
#include <opencv2/imgproc.hpp>  
#include<iostream>  

using namespace std;
using namespace cv;

///////////////  Colour Detection /////////////////

void main()
{
    VideoCapture cap(0);
    Mat img;
    Mat imgHSV,imgMask;
    int hmin, smin, vmin, hmax, smax, vmax;
        


    while (true) {

        cap.read(img);

        cvtColor(img, imgHSV, COLOR_BGR2HSV);

        Scalar lower(hmin, smin, vmin);
        Scalar upper(hmax, smax, vmax);
        inRange(lower, upper, imgMask);

        imshow("Image", img);
        imshow("Image HSV", imgHSV);
        
        waitKey(1); //ms
    }
}