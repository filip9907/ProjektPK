#include <memory>

#include "bitmapInterface.hpp"
#include "readerNormal.h"
#include "readerTranspon.hpp"

int main(int argc, char* argv[]) {

    auto test1 = std::make_unique<bitmapInterface>();

    readerTranspon reader;

    std::string filePath = argv[1];

    reader.readFile(*test1, filePath);

    test1->display();

    test1->iloscWszystkiego();
    test1->iloscJedynek();
    test1->iloscZer();

    test1->proprocje();
};
