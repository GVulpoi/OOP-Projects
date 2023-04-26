#pragma once
#include "Head.hpp"
#include <vector>
#include <iostream>

class Body
{
private:
	int* length;
	std::vector<int> bdyx;
	std::vector<int> bdyy;
public:
	Body();

	~Body();

	void add(int x, int y);

	void move(int x , int y);

	int getvecx(int x);

	int getvecy(int x);

	int getlen();
};