#ifndef BITMAP_H
#define BITMAP_H
#pragma once

#include <iostream>
#include <iomanip>
#include <vector>

	
class bitmap  
{
	public: // remove later
	//private:
	std::vector<std::vector <int> >  _map;

	public:
	bitmap();
	~bitmap();

	void display();
};
#endif