#include "bitmapReader.hpp"
#include "bitmap.hpp"

#include <string>
	
bitmapReader::bitmapReader(bitmap *_bitmap, std::string)
{
    std::cout << "Test Konstruktora";
	// ifstream file(filePath);
		// string line;
		// string lineCheck;
		// stringstream stream;
		// int i = 0;
		// vector<int> tmp;
		// int number;

		// if (file.good())
		// {
		// 	while (getline(file, line))
		// 	{
		// 		stream.clear();
		// 		stream << line;
		// 		tmp.clear();
		// 		if (stream >> number)
		// 		{
		// 			while (stream >> number)
		// 			{
		// 				tmp.push_back(number);
		// 			}
		// 		}
		// 		else
		// 		{
		// 			cerr << "Błędne dane w pliku!";
		// 			file.close();
		// 			return 1;
		// 		}
		// 		vect.push_back(tmp);
		// 	}
		// }
		// else
		// {
		// 	cerr << "Błąd plik nie otwarty!";
		// 	file.close();
		// 	return 1;
		// }
		// file.close();
		// return 0;
}
	
bitmapReader::~bitmapReader()
{
	
}