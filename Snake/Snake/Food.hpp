#pragma once
#include <iostream>
#include<cstdlib>
#include "Coord.hpp"

class Food
{
private:
	int* x;
	int* y;
public:

	Food();

	~Food();

	void Change();

	int getx();

	int gety();
};