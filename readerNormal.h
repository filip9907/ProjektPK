#include "bitmapReader.hpp"

class readerNormal : public bitmapReader {
    int checkFile(std::string filePath) override;

public:
    int readFile(bitmap &bitmap, std::string filePath) override;
};
