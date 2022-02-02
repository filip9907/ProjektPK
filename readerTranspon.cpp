#include "readerTranspon.hpp"

int readerTranspon::readFile(bitmap &bitmap, std::string filePath) {
    if(checkFile(filePath)!=0){
        return 1;
    }
    std::ifstream file(filePath);
    std::string line;
    std::string lineCheck;
    std::stringstream stream;
    char x;

    int i = 0;
    std::vector<int> tmp;
    int number;
    std::vector< std::vector<int> > vector;

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
            vector.push_back(tmp);


                }
            std::vector< std::vector<int> > outtrans;   //the 'transposed' vector
            for(int j = 0; j<vector[0].size();j++) {
                std::vector<int> tranTmp;
                for (int i = 0; i < vector.size(); i++) {
                    tranTmp.push_back(vector[i][j]);
                }
                outtrans.push_back(tranTmp);
            }
            bitmap._map=outtrans;

    } else {
        std::cerr << "Błąd plik nie otwarty!" << std::endl;
        file.close();
        return 1;
    }
    file.close();
    return 0;
}