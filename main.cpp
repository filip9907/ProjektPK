#include <memory>

#include "bitmapInterface.hpp"
#include "readerNormal.h"
#include "readerTranspon.hpp"

int main(int argc, char *argv[]) {
    auto bitmap = std::make_unique<bitmapInterface>();
    readerTranspon readerTranspon;
    readerNormal readerNormal;


    if (argc < 1) {
        std::cerr << "Brak argumentu!";
        return 1;
    } else {


        std::string filePath = argv[1];
        if (argc == 2) {
            readerTranspon.readFile(*bitmap, filePath);
        } else {
            readerNormal.readFile(*bitmap, filePath);
        }

        bitmap->display();

        bitmap->iloscWszystkiego();
        bitmap->iloscJedynek();
        bitmap->iloscZer();
        bitmap->proprocje();
    }
};
