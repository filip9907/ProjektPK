#include <iostream>
#include <memory>

#include "bitmap.hpp"
#include "bitmapReader.hpp"
#include "bitmapInterface.hpp"


int main() {

    auto test1 = std::make_unique<bitmapInterface>();

    bitmapReader reader;

    reader.readFile(*test1, "file.txt");

    test1->display();

    test1->iloscWszystkiego();
    test1->iloscJedynek();
    test1->iloscZer();
};