#define CATCH_CONFIG_MAIN
#include "Catch.hpp"

#include <opencv2/opencv.hpp>

#include "../App/Validate.hpp"

TEST_CASE("ValidateArgumentCount returns false when argument count != 2", "[validate]"){
    REQUIRE_FALSE(Validate::ValidateArgumentCount(22));
}

TEST_CASE("ValidateArgumentCount returns true when argument count == 2", "[validate]"){
    REQUIRE(Validate::ValidateArgumentCount(2));
}

TEST_CASE("ValidateImageData returns false when image does not have data", "[validate]"){
    cv::Mat image;
    
    REQUIRE_FALSE(Validate::ValidateImageData(image));
}

TEST_CASE("ValidateImageData returns true when image does have data", "[validate]"){
    cv::Mat image;
    unsigned char* data = new unsigned char[1500];
    image.data = data;

    REQUIRE(Validate::ValidateImageData(image));
}