#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;
//Mat img_grayscale = imread("Secret_of_Monkey_Island-600x375.jpg", IMREAD_GRAYSCALE);
//Mat img_unchanged = imread("Secret_of_Monkey_Island-600x375.jpg", IMREAD_UNCHANGED);

//In OpenCV, you display an image using the imshow() function. 
int main(int argc, char** argv)
{
	// Read the image file
	Mat image(600, 800, CV_8UC3, Scalar(100, 250, 30));

	// Check for failure
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get(); //wait for any key press
		return -1;
	}

	String windowName = "The Monkey Island"; //Name of the window

	namedWindow(windowName); // Create a window

	imshow(windowName, image); // Show our image inside the created window.

	waitKey(0); // Wait for any keystroke in the window

	destroyWindow(windowName); //destroy the created window

	return 0;
}