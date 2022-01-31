#ifndef BITMAPREADER_H
#define BITMAPREADER_H
#pragma once

#include <fstream>
#include <string>


#include "bitmap.hpp"


class bitmapReader
{
private:
public:
	bitmapReader(bitmap *_bitmap, std::string);
	~bitmapReader();
};
#endif