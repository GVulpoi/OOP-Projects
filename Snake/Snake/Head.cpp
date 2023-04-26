#pragma once
#include "Head.hpp"

Head::~Head()
{
	delete symbol;
}

void Head::setsym(char a)
{
	*symbol = a;
}

char Head::getsym()
{
	return *symbol;
}

void Head::up()
{
	Coord::up();
}

void Head::down()
{
	Coord::down();
}

void Head::left()
{
	Coord::left();
}

void Head::right()
{
	Coord::right();
}

void Head::start()
{
	Coord::start();
}

void Head::print()
{
	Coord::print();
}

int Head::getx()
{
	return Coord::getx();
}

int Head::gety()
{
	return Coord::gety();
}

void Head::setx(int a)
{
	Coord::setx(a);
}

void Head::sety(int a)
{
	Coord::sety(a);
}
