#include "Validate.hpp"

bool Validate::ValidateArgumentCount(int count){
    return count == 2;
}

bool Validate::ValidateImageData(cv::Mat image){
    return image.data;
}