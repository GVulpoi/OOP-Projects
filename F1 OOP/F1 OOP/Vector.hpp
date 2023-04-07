#pragma once
#include <iostream>

class IntVector
{
	int size;
	int* data;
public:
	IntVector();

	IntVector(int);

	IntVector(const IntVector& v1);

	~IntVector();

	void operator =(IntVector& v1);

	void operator= (int x);

	void add(int x);

	void add(double x);


	friend std::ostream& operator <<(std::ostream& out, const IntVector& v1);
	friend std::istream& operator >>(std::istream& in, IntVector& v1);


};