#pragma once
#include <iostream>

template <typename T> class IntVector
{
	int* size;
	int* data;
public:

	IntVector();

	IntVector(int x, int k);

	void Cpy(IntVector& v1);

	void add(int x);

	int retval(int x);

	int retlen();

	void move(int x);

	void afis(const IntVector<T>& v1);

	void citire(IntVector& v1);

};

template <typename T> IntVector<T>::IntVector()
{
	data = NULL;
	size = new T;
	*size = 0;
}

template <typename T> IntVector<T>::IntVector(int x, int k)
{
	try
	{
		size = new T;
		*size = 1;
		data = new T[k];
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

template <typename T> void IntVector<T>::Cpy(IntVector& v1)
{
	*size = *v1.size;
	data = new T[*size];
	for (int i = 0; i < *size; i++)
	{
		data[i] = v1.data[i];
	}
}

template <typename T> void IntVector<T>::add(int x)
{
	if (data != NULL)
	{
		T* vec;
		vec = new T[*size + 1];
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
		data = new T[*size];
		data[*size - 1] = x;
	}
}

template <typename T> int IntVector<T>::retval(int x)
{
	return data[x];
}

template <typename T> int IntVector<T>::retlen()
{
	return *size;
}


template <typename T> void IntVector<T>::move(int x)
{
	if (*size != 0)
	{
		for (int i = 0; i < *size - 1; i++)
		{
			data[i] = data[i + 1];
		}
		data[*size - 1] = x;
	}
}

template <typename T> void IntVector<T>::afis(const IntVector<T>& v1)
{
	for (int i = 0; i < *v1.size; i++)
	{
		std::cout << v1.data[i] << " ";
	}
	std::cout << std::endl;
}

template <typename T> void IntVector<T>::citire( IntVector& v1)
{
	if (v1.data != NULL)
	{
		delete[] v1.data;
		*v1.size = 0;
	}

	std::cout << "n = ";
	std::cin >> *v1.size;
	v1.data = new T[*v1.size];

	for (int i = 0; i < *v1.size; i++)
	{
		std::cin >> v1.data[i];
	}
}