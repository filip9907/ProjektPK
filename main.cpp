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

//jeśli wpiszemy dowolny argument to wyswietli sie transponowana jesli nie to normalnie
        std::string filePath = argv[1];
        if (argc == 3) {
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
    return 0;
};
