#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include"MyLib.h"

#include<iostream>

using namespace cv;
using namespace std;
int main(){

  std::string image_path = samples::findFile("starry_night.jpg");
  Mat img = imread(image_path, IMREAD_UNCHANGED);

  if(img.empty())
    std::cout<<"Could not read the iamge:"<<image_path<<std::endl;


  imshow("Opencv C++ First lesson ",img);


  int k = waitKey(0);
  if(k ='s')
    imwrite("starry_night.jpg",img);

  return(0);
}
