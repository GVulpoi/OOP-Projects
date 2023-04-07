#pragma once
#include <iostream>
#include "String.hpp"

class Drivers
{
	String Driver1;
	String Driver2;
public:

	Drivers();

	Drivers(char* d1, char* d2);

	~Drivers();

	friend std::ostream& operator << (std::ostream& out, const Drivers& dr);

};