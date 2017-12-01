#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

#define INPUT "/home/viet/Pictures/h1.jpg"

int main(int argc, const char * argv[])
{

    //data structure store image
    Mat image;

    //read image from file with flags CV_LOAD
    image = imread(INPUT, CV_LOAD_IMAGE_COLOR);

    //check image valid
    if(image.empty())       // neu load anh k dc
    {
        cout << "can't open or read image" << endl;
    }
    else
    {

        //create windows for display
        namedWindow("OpenCV", WINDOW_AUTOSIZE);
        //show imag in it
        imshow("OpenCV", image);
        //wating user press any key to finish
        waitKey();
    }
    return 0;
}
