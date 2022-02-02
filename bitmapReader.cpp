
#include "bitmapReader.hpp"

bitmapReader::bitmapReader() {

}

bitmapReader::~bitmapReader() {

}

int bitmapReader::checkFile(std::string filePath) {
    std::vector<std::vector<int> > checkVec;//tworzenie tymczasowego vectora vectorów

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
            checkVec.push_back(tmp);
        }
    } else {
        std::cerr << "Błąd plik nie otwarty!" << std::endl;
        file.close();
        return 1;
    }
    for(auto a: checkVec){//sprawdzanie poprawnosci pliku
        if(a.size() != checkVec[0].size()){
            std::cerr << "Nierówna ilość kolumn" << std::endl;
            return 1;
        }
    }

    file.close();
    return 0;
}
