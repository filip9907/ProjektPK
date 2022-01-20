#include "bitmap.hpp"  
	
bitmap::bitmap()
{
	
}
	
bitmap::~bitmap()
{
	
}
 
void bitmap::display(){
    if(_map.empty()) std::cout << "BITMAPA Pusta!" << std::endl;

    for(int column = 0;column<_map[1].size();column++){
        std::cout << std::setw((_map[1].size()/10+1));
        std::cout << column+1 << ". ";
    }
    std::cout << std::endl;

    for(int row = 0;row<_map.size();row++){

        std::cout << std::setw((_map.size()/10+1));
        std::cout << row+1 << "." << std::endl;
        for(int column = 0;column<_map[row].size();column++){
        
        }
    }
}