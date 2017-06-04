#include <stdio.h>
#include <string>
#include <opencv2/opencv.hpp>

#include "Validate.hpp"

int main(int argc, char** argv){
    std::string path;
    bool dialogUsed = false;

    if(!Validate::ValidateArgumentCount(argc)){
        #ifdef linux
            FILE *file;
            if(file = popen(
                "zenity --title=\"Select an image\" --file-selection",
                "r"
            )){
                char buffer[512];
                std::string selectedPath = "";
                while(fgets(buffer, sizeof(buffer), file) != NULL){
                    selectedPath += buffer;
                }
                pclose(file);

                selectedPath.erase(std::remove(
                    selectedPath.begin(),
                    selectedPath.end(),
                    '\n'
                ), selectedPath.end());
                path = selectedPath;
                dialogUsed = true;
            }
        #endif

        if(!dialogUsed){
            printf("usage: ImageViewer <image_path>\n");
            return -1;
        }
    }

    cv::Mat image;
    if(dialogUsed){
        image = cv::imread(path, 1);
    }else{
        image = cv::imread(argv[1], 1);
    }

    if(!Validate::ValidateImageData(image)){
        printf("No image data present \n");
        return -1;
    }
    
    cv::namedWindow("Image Viewer", cv::WINDOW_AUTOSIZE);
    cv::imshow("Image Viewer", image);

    cv::waitKey(0);

    return 0;
}