#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>

using namespace std;
using namespacecv;

int main(int argc,char** argv)
{
	//Load image 
	Mat img = imread("sample.png")
	if(!img.data)//otherwise quit 
	{
		cout<<"Image can not be loaded."<<endl;
	}

}