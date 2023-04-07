#include "Drivers.hpp"


Drivers::Drivers() {}

Drivers::Drivers(char* d1, char* d2)
{
	Driver1 = d1;
	Driver2 = d2;
}

std::ostream& operator << (std::ostream& out, const Drivers& dr)
{
	out << "Driver 1 : " << dr.Driver1;
	out << "Driver 2 : " << dr.Driver2;

	return out;
}

Drivers::~Drivers() {}