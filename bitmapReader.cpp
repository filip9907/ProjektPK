#include "bitmapReader.hpp"
#include "bitmap.hpp"

bitmapReader::bitmapReader() {
    std::cout << "Test Konstruktora" << std::endl;
}

int bitmapReader::checkFile(std::string filePath) {
    std::ifstream file(filePath);

    if (file.good()) {

        std::string line;
        std::string firstLine;

        getline(file, firstLine);

        while (getline(file, line)) {
            if (line.size() != firstLine.size()) {
                std::cerr << "Nierowna ilosc znakow w wierszach!";
                return 2;
            } else {

                return 0;

            }
        }
    }
    else {
        std::cerr << "Bledna otwarcie pliku";
        return 3;
    }
    return 4;
}

int bitmapReader::readFile(bitmap &bitmap, std::string filePath) {
    std::ifstream file(filePath);
    std::string line;
    std::string lineCheck;
    std::stringstream stream;
    char x;

    int i = 0;
    std::vector<int> tmp;
    int number;

    if (file.good()) {
        while (getline(file, line)) {
            stream.clear();
            stream << line;
            tmp.clear();
            std::string buffor;

            while (stream >> buffor) {
                if (buffor == "1") {
                    tmp.push_back(1);
                } else if (buffor == "0") {
                    tmp.push_back(0);
                } else if (buffor == "x") {
                    tmp.push_back(4);
                } else {
                    std::cerr << "Błędne dane w pliku!" << std::endl;
                    file.close();
                    return 1;
                }

            }
            bitmap._map.push_back(tmp);
        }
    } else {
        std::cerr << "Błąd plik nie otwarty!" << std::endl;
        file.close();
        return 1;
    }
    file.close();
    return 0;
}

bitmapReader::~bitmapReader() {

}