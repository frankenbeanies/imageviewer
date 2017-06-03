#ifndef VALIDATE_H
#define VALIDATE_H

#include <opencv2/opencv.hpp>

class Validate{
    public: 
        static bool ValidateArgumentCount(int count);
        static bool ValidateImageData(cv::Mat image);
};

#endif