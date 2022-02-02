#include "bitmapInterface.hpp"

void bitmapInterface::iloscJedynek() {
    std::cout << "Ilość 1 na całej planszy: " << this->iloscpol(1) << std::endl;
}

void bitmapInterface::iloscZer() {
    std::cout << "Ilość 0 na całej planszy: " << this->iloscpol(0) << std::endl;
}

void bitmapInterface::iloscWszystkiego() {
    std::cout << "Ilość wszystkich pol (bez x) na całej planszy: " << this->iloscpol() << std::endl;
}

void bitmapInterface::proprocje() {
    auto pair = chances();

    std::cout << "Szanse na ZERO: " << pair.first << "/8" << std::endl;
    std::cout << "Szanse na JEDYNKE: " << pair.second << "/8" << std::endl;
    std::cout << std::endl;
}