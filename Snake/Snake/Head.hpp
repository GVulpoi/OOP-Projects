#pragma once
#include "Coord.hpp"
#include <iostream>

class Head : private Coord
{
private:
	char* symbol;
public:
	Head() : symbol(new char[1]){}

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

	void setsym(char a);

	char getsym();

	void print();
};