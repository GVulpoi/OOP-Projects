#pragma once
#include "Coord.hpp"
#include <iostream>

class Head : private Coord
{
protected:
	static const char symbol = 'A';
public:
	Head(int a , int b) : Coord(a,b) {}

	Head() : Coord() {}

	~Head();

	int getx();

	int gety();

	void start();

	void up();

	void down();

	void left();

	void right();

	void setx(int a);

	void sety(int a);

	char getsym();

	void print();
};