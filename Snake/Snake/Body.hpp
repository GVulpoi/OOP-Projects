#pragma once
#include "Head.hpp"
#include "Vector.hpp"
#include <iostream>

class Body
{
private:
	int* length;
	IntVector<int> bdyx;
	IntVector<int> bdyy;
public:
	Body();

	~Body();

	void add(int x, int y);

	void move(int x , int y);

	int getvecx(int x);

	int getvecy(int x);

	int getlen();
};