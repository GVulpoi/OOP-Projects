#pragma once
#include "Coord.hpp"

Coord::Coord(int a , int b)
{
	try
	{
		x = std::make_unique<int>(a);
		y = std::make_unique<int>(b);
	}
	catch (const std::bad_alloc& e)
	{
		std::cout << "Alocare de memorie esuata" << e.what() << std::endl;
	}
}

Coord::Coord()
{
	*x = 0;
	*y = 0;
}

Coord::~Coord()
{
}

void Coord::start(int a, int b)
{
	*x = a;
	*y = b;
}

void Coord::up()
{
	*x = *x - 1;
}

void Coord::down()
{
	*x = *x + 1;
}

void Coord::left()
{
	*y = *y - 1;
}

void Coord::right()
{
	*y = *y + 1;
}

int Coord::getx()
{
	return *x;
}

int Coord::gety()
{
	return *y;
}

void Coord::print()
{
	std::cout << "x = " << *x << " ";
	std::cout << "y = " << *y << " ";
}

void Coord::setx(int a)
{
	*x = a;
}

void Coord::sety(int a)
{
	*y = a;
}