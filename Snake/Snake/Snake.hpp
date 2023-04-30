#pragma once
#include <iostream>
#include "Body.hpp"
#include "Head.hpp"

class Snake : public Body , public Head
{
protected:
	int* score;
public:

	Snake(int a, int b) : Head(a, b) , score(new int) , Body() {}

	Snake();

	void scoreadd();

	int retscore();

	~Snake();
};