#include <opencv2/opencv.hpp>  
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
#include <opencv2/imgproc.hpp>  
#include<iostream>  

using namespace std;
using namespace cv;

///////////////  Drawing Shapes & Text /////////////////

void main()
{
    
    Mat img(512, 512, CV_8UC3, Scalar(255, 255, 255));

    circle(img, Point(256, 256), 155, Scalar(0, 0, 0), FILLED);
    rectangle(img, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), FILLED);
    line(img, Point(130, 250), Point(382, 250), Scalar(0,0,0), 3);

    putText(img, "11111", Point(130, 250), FONT_HERSHEY_COMPLEX, 1, Scalar(50, 50, 100),2);

    imshow("Image", img);
        
    waitKey(0); //ms
    
}