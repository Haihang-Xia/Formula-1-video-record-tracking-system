#include <opencv2/opencv.hpp>  
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
#include <opencv2/imgproc.hpp>  
#include<iostream>  

using namespace std;
using namespace cv;

///////////////  Resize & Crop /////////////////

void main()
{
    VideoCapture cap(0);
    Mat img;
    Mat imgResize,imgCrop;

    while (true) {

        cap.read(img);

        //cout << img.size() << endl;
        resize(img, imgResize, Size(),0.5,0.5);

        Rect roi(100, 100, 300, 250);
        imgCrop = img(roi);

        imshow("Image", img);
        imshow("Image Resize", imgResize);
        imshow("Image Crop", imgCrop);
        waitKey(1); //ms
    }
}