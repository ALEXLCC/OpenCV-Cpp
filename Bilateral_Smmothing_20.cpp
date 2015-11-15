//Bilateral Smmothing 
//THe most advanced filter to smooth image and reduce noise.
//Other Filters will smooth away the edges while removing noises . 
//drawback of this type is it takes longer time to process
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <stdio.h>
#include <iostream>
using namespace std;
using namespace cv;
int main(int argc,const char** argv)
{
	Mat img = imread("sample.png",CV_LOAD_IMAGE_COLOR);
	//load the image
	if(!img.data) //if image can not be loaded exit with -1
	{
		cout<<"Image can't be loaded"<<endl;
		return -1;
	}
	Mat img1;
	char text[30];
	sprintf(text,"%d x %d",7,7); //text to display in image 
	bilateralFilter(img,img1,7,7,7);

	/*
	1st argument : source img
	2nd 	""	 : destination 
	3rd  	""   : diameter of each pixel neighbourhood 
	4th 	""	 : sigmaColor , sigma in the color space 
	5th     ""   : sigmaSpace ,sigma in the coordinate space 
	*/
	putText(img1,text,Point(img.cols/4,img.rows/8),CV_FONT_HERSHEY_COMPLEX,1,Scalar(255,255,255),2);//print msg on image
	imshow("Bilateral",img1);//show the image
	imshow("Original",img);//show the source img. 
	waitKey(0);//waits for any keypress to exit
	return 0;
} 