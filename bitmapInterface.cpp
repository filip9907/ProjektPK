#include "bitmapInterface.hpp"
//wypisuje prawdopodobienstwo a priori dla 1
void bitmapInterface::iloscJedynek() {
    std::cout << "Prawdopodobienstwo na 1 a priori : " << this->iloscpol(1) <<"/"<<this->iloscpol() << std::endl;
}
//wypisuje prawdopodobienstwo a priori dla 0
void bitmapInterface::iloscZer() {
    std::cout << "Prawdopodobienstwo na 0 a priori " << this->iloscpol(0)<<"/"<<this->iloscpol() << std::endl;
}
//wypisuje ilosc elementów bitmapy
void bitmapInterface::iloscWszystkiego() {
    std::cout << "Ilość wszystkich pol (bez x) na całej planszy: " << this->iloscpol() << std::endl;
}
//podaje prawdopodobiestwo a posteriori
void bitmapInterface::proprocje() {
    auto pair = chances();

    std::cout << "Prawdopodobienstwo a posteriori dla zera: " << pair.first << "/8" << std::endl;
    std::cout << "Prawdopodobienstwo a posteriori dla jedynki: " << pair.second << "/8" << std::endl;
    std::cout << std::endl;
}