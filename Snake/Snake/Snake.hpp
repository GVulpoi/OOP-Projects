#pragma once
#include <iostream>
#include "Body.hpp"
#include "Head.hpp"

class Snake : public Body , public Head
{
	int* score;
public:
	Snake();

	~Snake();
};