#pragma once
#include "Body.hpp"

Body::Body()
{
	length = new int;
	*length = 0;
}

Body::~Body()
{
	delete length;
}

void Body::add(int x , int y)
{
	if (*length != 0)
	{
		bdyx.push_back(bdyx[(*length) - 1]);
		bdyy.push_back(bdyy[(*length) - 1]);
		*length = *length + 1;
	}
	else
	{
		bdyx.push_back(x);
		bdyy.push_back(y);
		*length = *length + 1;
	}
}

void Body::move(int x, int y)
{
	if (*length != 0)
	{
		for (int i = 0; i < *length - 1; i++)
		{
			bdyx[i] = bdyx[i + 1];
			bdyy[i] = bdyy[i + 1];
		}
		bdyx[*length - 1] = x;
		bdyy[*length - 1] = y;
	}
}


int Body::getvecx(int x)
{
	return bdyx[x];
}

int Body::getvecy(int x)
{
	return bdyy[x];
}

int Body::getlen()
{
	return *length;
}