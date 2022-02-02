#include "readerNormal.h"


int readerNormal::readFile(bitmap &bitmap, std::string filePath) {

    if(checkFile(filePath)!=0){
        return 1;//sprawdzamy czy z plikiem wszystko ok
    }
    std::ifstream file(filePath);
    std::string line;
    std::string lineCheck;
    std::stringstream stream;
    char x;

    int i = 0;
    std::vector<int> tmp;
    int number;

    if (file.good()) {//jeśli jest coś nie tak z plikiem to kończy program
        while (getline(file, line)) {
            stream.clear();
            stream << line;
            tmp.clear();
            std::string buffor;

            while (stream >> buffor) {
                if (buffor == "1") {
                    tmp.push_back(1);// jeśli jest jedynka to wpisze do vectora 1
                } else if (buffor == "0") {
                    tmp.push_back(0); //jeśli jest 0 to wpisze do vectora 0
                } else if (buffor == "x") {
                    tmp.push_back(4); //jesli napotka x to wpisuje 4 (żeby zachować vector intów)
                } else {
                    std::cerr << "Błędne dane w pliku!" << std::endl;//jeśli napotka na coś innego to kończy program
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