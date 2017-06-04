#ifndef FILE_DIALOG_H
#define FILE_DIALOG_H

#ifdef linux
#include <algorithm>
#endif

#include <string>
#include <stdio.h>

class FileDialog{
    public:
        static std::string GetFileName();
};
#endif