#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

#define INPUT "/home/viet/Videos/video1.mp4"

int main(int argc, char *argv[])
{
    VideoCapture videoCapture;      //khai bao bien
    Mat videoFrame;

    videoCapture.open(INPUT); // phuogn thuc mo video
    namedWindow("videoCapture", WINDOW_AUTOSIZE);

    if(!videoCapture.isOpened())
    {
        cout << " Khong the mo video" << endl;
    }
    else
    {
        while(1)
        {
            videoCapture.read(videoFrame);
            imshow("videoCapture", videoFrame);
            cout << "FPS: "  << videoCapture.get(CV_CAP_PROP_FPS) << endl;
            cout << "FRAME_COUNT: " << videoCapture.get(CV_CAP_PROP_FRAME_COUNT) << endl;
            cout << "FRAME_WIDTH: " << videoCapture.get(CV_CAP_PROP_FRAME_WIDTH) << endl;
            cout << "FRAME_HEIGHT: " <<videoCapture.get(CV_CAP_PROP_FRAME_HEIGHT)  << endl;
            cout << "CODEC: " << videoCapture.get(CV_CAP_PROP_FOURCC) << endl;
            cout << "AVI_RATION: " <<videoCapture.get(CV_CAP_PROP_POS_AVI_RATIO) << endl;
            if(waitKey(30) >= 0) break;
        }
    }

    return 0;
}
