#include "FileDialog.hpp"

std::string FileDialog::GetFileName(){
    std::string selectedPath = "";
    #ifdef linux
        FILE *file;
        if(file = popen(
            "zenity --title=\"Select an image\" --file-selection",
            "r"
        )){
            char buffer[512];
            while(fgets(buffer, sizeof(buffer), file) != NULL){
                selectedPath += buffer;
            }
            pclose(file);

            selectedPath.erase(std::remove(
                selectedPath.begin(),
                selectedPath.end(),
                '\n'
            ), selectedPath.end());
            return selectedPath;
        }
    #endif
}