#pragma once
#include "Food.hpp"

Food::Food()
{
	try
	{
		x = new int;
		y = new int;
		*x = -10 + (rand() % 20);
		*y = -10 + (rand() % 20);
	}
	catch (const std::bad_alloc& e)
	{
		std::cout << "Alocare de memorie esuata! " << e.what() << std::endl;
	}
}

Food::~Food()
{
	delete x;
	delete y;
}

void Food::Change()
{
	*x = -10 + (rand() % 20);
	*y = -10 + (rand() % 20);
}

int Food::getx()
{
	return *x;
}

int Food::gety()
{
	return *y;
}