#pragma once
#include "Food.hpp"

Food::Food()
{
	x = new int;
	y = new int;
	*x = -10 + (rand() % 20);
	*y = -10 + (rand() % 20);
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