#pragma once
#include "Snake.hpp"

Snake::Snake()
{
	try
	{
		score = new int;
		*score = 0;
	}
	catch (const std::bad_alloc& e)
	{
		std::cout << "Alocare de memorie esuata !" << e.what() << std::endl;
	}
}

void Snake::scoreadd()
{
	if (*score < 0)
	{
		*score = 0;
	}
	else
	{
		*score = *score + 1;
	}
}

int Snake::retscore()
{
	return *score;
}

Snake::~Snake()
{
	delete score;
}