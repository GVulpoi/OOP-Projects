#pragma once
#include <iostream>

class Coord
{
private:
	int* x;
	int* y;
public:
	Coord(int a, int b);

	Coord();

	~Coord();

	void start(int a=0, int b=0);

	void up();

	void down();

	void left();

	void right();

	void setx(int a);

	void sety(int a);

	int getx();

	int gety();

	void print();
};