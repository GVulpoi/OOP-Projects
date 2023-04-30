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
		bdyx.add(bdyx.retval(0));
		bdyy.add(bdyy.retval(0));
	}
	else
	{
		bdyx.add(x);
		bdyy.add(y);
	}
	*length = *length + 1;
}

void Body::move(int x, int y)
{
	bdyx.move(x);
	bdyy.move(y);
}


int Body::getvecx(int x)
{
	return bdyx.retval(x);
}

int Body::getvecy(int x)
{
	return bdyy.retval(x);
}

int Body::getlen()
{
	return bdyx.retlen();
}