#pragma once
#include "Snake.hpp"

Snake::Snake()
{
	score = new int;
	*score = 0;
}

Snake::~Snake()
{
	delete score;
}