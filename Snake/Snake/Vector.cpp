#pragma once
#include "Vector.hpp"


IntVector::IntVector()
{
	data = NULL;
	size = new int;
	*size = 0;
}

IntVector::IntVector(int x, int k)
{
	try
	{
		size = new int;
		*size = 1;
		data = new int[k];
		for (int i = 0; i < k; i++)
		{
			data[i] = x;
		}
	}
	catch (const std::bad_alloc& e)
	{
		std::cout << "Alocare de memorie esuata !" << e.what() << std::endl;
	}
}

IntVector::~IntVector()
{
	if (data != NULL)
	{
		delete[] data;
	}
}

void IntVector::Cpy(IntVector& v1)
{
	*size = *v1.size;
	data = new int[*size];
	for (int i = 0; i < *size; i++)
	{
		data[i] = v1.data[i];
	}
}

void IntVector::operator =(IntVector& v1)
{
	*size = *v1.size;
	data = new int[*size];
	for (int i = 0; i < *size; i++)
	{
		data[i] = v1.data[i];
	}
}

void IntVector::add(int x)
{
	if (data != NULL)
	{
		int* vec;
		vec = new int[*size + 1];
		for (int i = 0; i < *size; i++)
		{
			vec[i] = data[i];
		}
		vec[*size] = x;
		*size = *size + 1;
		data = vec;
	}
	else
	{
		*size = *size + 1;
		data = new int[*size];
		data[*size - 1] = x;
	}
}

int IntVector::retval(int x)
{
	return data[x];
}

int IntVector::retlen()
{
	return *size;
}

void IntVector::move(int x)
{
	if (*size != 0)
	{
		for (int i = 0 ; i < *size - 1; i++)
		{
			data[i] = data[i + 1];
		}
		data[*size - 1] = x;
	}
}

std::ostream& operator <<(std::ostream& out, const IntVector& v1)
{
	for (int i = 0; i < *v1.size; i++)
	{
		out << v1.data[i] << " ";
	}
	out << std::endl;
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
	in >> *v1.size;
	v1.data = new int[*v1.size];

	for (int i = 0; i < *v1.size; i++)
	{
		in >> v1.data[i];
	}

	return in;
}