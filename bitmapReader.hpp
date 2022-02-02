#ifndef BITMAPREADER_H
#define BITMAPREADER_H
#pragma once

#include <fstream>
#include <string>
#include <memory>
#include <sstream>


#include "bitmap.hpp"


class bitmapReader {
private:
public:
    bitmapReader();

    ~bitmapReader();

    int checkFile(std::string filePath);
    virtual int readFile(bitmap &bitmap, std::string filePath) = 0;
};
#endif