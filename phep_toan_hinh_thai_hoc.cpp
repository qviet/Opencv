#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

using namespace cv;

int main() {

    Mat imageSrc = imread("/home/viet/Pictures/h1.jpg", CV_LOAD_IMAGE_GRAYSCALE);
    Mat imageDst;
    Mat imageBinary;

    threshold(imageSrc, imageBinary, 220, 255, CV_THRESH_BINARY);
    cv::Mat kernel = cv::getStructuringElement(MORPH_CROSS, Size(5,5));
    cv::morphologyEx(imageBinary, imageDst, MORPH_ERODE, kernel);

    imshow("imageBinary", imageBinary);
    imshow("imageDst", imageDst);

    waitKey(0);
    return 0;
}
