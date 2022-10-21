#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

using namespace cv;


#include"MyLib.h"
#include<iostream>

using namespace std;



void MyEllipse(Mat img, double angle,int thickness, int lineType,int W);
int main(){

    int w = 500;

    Mat new_Image = Mat::zeros(w,w,CV_8UC3);
  

    for(int i = 0; i<360; i++)
      {
        MyEllipse(new_Image,1.0*i,5,i,w/5);
        MyEllipse(new_Image,1.0*i,5,i,w);
        MyEllipse(new_Image,1.0*i,5,i,w/4);
        MyEllipse(new_Image,1.0*i,5,i,w/2);
        imshow( "new_Image", new_Image );
        waitKey(25);
      }




  return(0);
}

void MyEllipse(Mat img, double angle,int thickness, int lineType,int W)
{ 
 cv::ellipse( img,
       Point( W/2, W/2 ),
       Size( W/4, W/16 ),
       angle,
       0,
       360,
       Scalar( 255, 255, 255 ),
       thickness,
       lineType );

}