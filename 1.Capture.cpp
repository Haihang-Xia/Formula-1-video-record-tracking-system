// test1opencv.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <opencv2/opencv.hpp>  
#include <opencv2/core/core.hpp>  
#include <opencv2/highgui/highgui.hpp>  
#include <opencv2/imgproc.hpp>  
#include<iostream>  

using namespace std;
using namespace cv;



///////////////////// image //////////////////////////
//void main()
//{
//    string path = "/ / / .png";
//    mat img = imread(path);
//    imshow("image", img);
//    waitkey(0);
//
//}

///////////////////// video ////////////////////////
//void main()
//{
//    string path = "/ / / .mp4";
//    VideoCapture cap(path);
//    Mat img;
//
//    while (true) {
//        
//        cap.read(img);
//
//        imshow("Image", img);
//        waitKey(1); //ms
//    }
//}

///////////////////// webcam ////////////////////////
void main()
{
    VideoCapture cap(0);
    Mat img;

    while (true) {

        cap.read(img);

        imshow("Image", img);
        waitKey(1); //ms
    }
}