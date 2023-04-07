#include "Vector.hpp"


IntVector::IntVector()
{
	data = NULL;
	size = 0;
}

IntVector::IntVector(int x)
{
	size = 1;
	data = new int[size];
	data[0] = x;
}

void IntVector::add(int x)
{
	data[0] += x;
}

void IntVector::add(double x)
{
	data[0] += x;
}


IntVector::IntVector(const IntVector& v1)
{
	size = v1.size;
	data = new int[size];

	for (int i = 0; i < size; i++)
	{
		data[i] = v1.data[i];
	}
}


IntVector::~IntVector()
{
	delete[] data;
}

void IntVector::operator= (IntVector& v1)
{
	delete[] data;

	size = v1.size;
	data = new int[size];

	for (int i = 0; i < size; i++)
	{
		data[i] = v1.data[i];
	}
}

void IntVector::operator= (int x)
{
	if (data != NULL)
	{
		int* vec;
		vec = new int[size + 1];

		for (int i = 0; i < size; i++)
		{
			vec[i] = data[i];
		}

		vec[size] = x;
		size++;
		delete[] data;
		data = vec;
	}
	else
	{
		size++;
		data = new int[size];
		data[size - 1] = x;
	}
}

std::ostream& operator <<(std::ostream& out, const IntVector& v1)
{
	for (int i = 0; i < v1.size; i++)
	{
		out << v1.data[i] << " ";
	}
	return out;
}

std::istream& operator >>(std::istream& in, IntVector& v1)
{
	if (v1.data != NULL)
	{
		delete[] v1.data;
		v1.size = 0;
	}

	std::cout << "n = ";
	in >> v1.size;
	v1.data = new int[v1.size];

	for (int i = 0; i < v1.size; i++)
	{
		in >> v1.data[i];
	}

	return in;
}
