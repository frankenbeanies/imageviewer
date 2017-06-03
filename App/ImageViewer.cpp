#include <stdio.h>
#include <opencv2/opencv.hpp>

#include "Validate.hpp"

int main(int argc, char** argv){
    if(!Validate::ValidateArgumentCount(argc)){
        printf("usage: ImageViewer <image_path>\n");
        return -1;
    }

    cv::Mat image;
    image = cv::imread(argv[1], 1);

    if(!Validate::ValidateImageData(image)){
        printf("No image data present \n");
        return -1;
    }
    
    cv::namedWindow("Image Viewer", cv::WINDOW_AUTOSIZE);
    cv::imshow("Image Viewer", image);

    cv::waitKey(0);

    return 0;
}