#include <iostream>
#include <memory>

#include "bitmap.hpp"
#include "bitmapReader.hpp"


int main() {

    auto test1 = std::make_unique<bitmap>();

    bitmapReader reader;

    reader.readFile(*test1, "file.txt");

    test1->display();

};