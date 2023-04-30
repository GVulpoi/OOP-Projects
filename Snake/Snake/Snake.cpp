#pragma once
#include "Snake.hpp"

Snake::Snake()
{
	score = new int;
	*score = 0;
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