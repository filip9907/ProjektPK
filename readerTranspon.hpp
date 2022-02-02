#include "bitmapReader.hpp"

class readerTranspon : public bitmapReader {
public:
    int readFile(bitmap &bitmap, std::string filePath) override;
};
