#include "bitmap.hpp"  
	
bitmap::bitmap()
{
	
}
	
bitmap::~bitmap()
{
	
}
 
void bitmap::display(){
    if (_map.empty()) std::cout << "BITMAPA Pusta!" << std::endl;
    else {
        int numberWidth = _map[1].size() / 10 + 1;

        std::cout << std::setw(numberWidth + 2) << " ";
        for (int column = 0; column < _map[1].size(); column++) {
            std::cout << std::setw(numberWidth);
            std::cout << column + 1 << ". ";
        }

        std::cout << std::endl;

        for (int row = 0; row < _map.size(); row++) {
            std::cout << std::setw(numberWidth);
            std::cout << row + 1 << ". ";
            for (int column = 0; column < _map[row].size(); column++) {
                std::cout << std::setw(numberWidth);
                if (_map[row][column] == 4) {
                    std::cout << "\033[1;31m X\033[0m" << "  ";
                } else {
                    std::cout << _map[row][column] << "  ";
                }
            }
            std::cout << std::endl;

        }
    }
}

int bitmap::iloscpol() {
    return _map.size() * _map[0].size() - 1;
}

int bitmap::iloscpol(int type) {
    int ilosc = 0;

    for (auto x: _map) {
        for (auto y: x) {
            if (y == type) {
                ilosc++;
            }
        }
    }

    return ilosc;
}

std::pair<int, int> bitmap::xCords() {

    for (int x = 0; x < _map.size(); x++) {
        for (int y = 0; y < _map[x].size(); y++) {
            if (_map[x][y] == 4) {
                return std::make_pair(x, y);
            }
        }
    }
    return std::pair<int, int>(0, 0);
}

std::pair<int, int> bitmap::chances() {
    auto xCords = this->xCords();
    int zera = 0;
    int jedynki = 0;
    std::cout << xCords.first;

    for (int x = xCords.first - 1; x < x + 2; x++) {
        for (int y = xCords.second - 1; y < y + 2; y++) {
            if (x != xCords.first && y != xCords.second) {
                if (y == 0) {
                    zera++;
                } else if (y == 1) {
                    jedynki++;
                }
            }

        }
    }

    return std::make_pair(zera, jedynki);
}
