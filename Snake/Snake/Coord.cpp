#pragma once
#include "Coord.hpp"

Coord::Coord(int a , int b){
	x = new int;
	y = new int;
	*x = a;
	*y = b;
	}

Coord::Coord()
{
	x = new int;
	y = new int;
	*x = 0;
	*y = 0;
}

Coord::~Coord()
{
	delete x;
	delete y;
}

void Coord::start(int a, int b)
{
	x = new int[1];
	y = new int[1];
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
	std::cout << "x = " << *x << std::endl;
	std::cout << "y = " << *y << std::endl;
}

void Coord::setx(int a)
{
	*x = a;
}

void Coord::sety(int a)
{
	*y = a;
}