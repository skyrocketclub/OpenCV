// FaceDetection.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>

using namespace std;
using namespace cv;

void readPicture(string);
void faceDetection();
void imageCompare(string, string);

int main()
{
    //How to read a picture given a path
   /* string path = "ugo.jpg";
    readPicture(path);*/

    //How to get the facial detection
    //faceDetection();

    //comparing two images
    imageCompare("ugo.jpg", "ugo2.jpg");
   
}
 
void readPicture(string path) {
   //Mat is the data type of the image
   //imread is a method in the open cv and it returns an image
   Mat img = imread(path);
   imshow("Frame", img);
   waitKey(0);
}

void faceDetection() {
    VideoCapture video(0);
    Mat img;

    CascadeClassifier facedetect;
    facedetect.load("haarcascade_frontalface_default.xml");

    while (true) {

        video.read(img);
        vector<Rect> faces;
        facedetect.detectMultiScale(img, faces, 1.3, 5);
        cout << "Face Number: " << faces.size() << endl;


        //tl -> top left && br -> bottom right
        for (int i{ 0 }; i < faces.size(); i++) {
            rectangle(img, faces[i].tl(), faces[i].br(), Scalar(50, 50, 255), 3);
            putText(img, to_string(faces.size()), Point(10, 40), FONT_HERSHEY_DUPLEX, 1, Scalar(255, 255, 255), 1);
        }

        imshow("Frame", img);
        waitKey(1);
    }
}

void imageCompare(string pathOne, string pathTwo) {
    Mat imgOne = imread(pathOne);
    Mat imgTwo = imread(pathTwo);
    
    Mat One;
    Mat Two;

    resize(imgOne, One, Size(1000, 500), 0, 0);
    resize(imgTwo, Two, Size(1000, 500), 0, 0);

    Mat dst;
    absdiff(One, Two, dst);
    //imshow("input1", imgOne);
    //imshow("input2", imgTwo);
    imshow("output", dst);
    
    waitKey(0);
}