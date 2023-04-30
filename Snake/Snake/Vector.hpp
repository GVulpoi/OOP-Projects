#pragma once
#include <iostream>

class IntVector
{
	int size;
	int* data;
public:
	IntVector() : size(0), data(NULL) {}

	IntVector(int x, int k = 0);

	~IntVector();

	void Cpy(IntVector& v1);

	void operator =(IntVector& v1);

	void add(int x);

	int retval(int x);

	int retlen();

	void move(int x);

	friend std::ostream& operator <<(std::ostream& out, const IntVector& v1);
	friend std::istream& operator >>(std::istream& in, IntVector& v1);


};