#include "bitmapReader.hpp"

class readerNormal : public bitmapReader {
public:
    int readFile(bitmap &bitmap, std::string filePath) override;
};
