#include <opencv2/opencv.hpp>  
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
#include <opencv2/imgproc.hpp>  
#include<iostream>  

using namespace std;
using namespace cv;

///////////////  Basic Functions /////////////////

void main()
{
    VideoCapture cap(0);
    Mat img;
    Mat imgGray,imgBlur,imgCanny,imgDil,imgErode;

    while (true) {

        cap.read(img);

        cvtColor(img, imgGray, COLOR_BGR2GRAY);
        GaussianBlur(img, imgBlur, Size(3,3), 3, 0);
        Canny(imgBlur, imgCanny, 50, 100);

        Mat kernel = getStructuringElement(MORPH_RECT, Size(3,3));
        dilate(imgCanny, imgDil, kernel);
        erode(imgDil, imgErode, kernel);

        imshow("Image", img);
        imshow("Image Gray", imgGray);
        imshow("Image Blur", imgBlur);
        imshow("Image Canny", imgCanny);
        imshow("Image Dilate", imgDil);
        imshow("Image Erode", imgErode);
        waitKey(1); //ms
    }
}