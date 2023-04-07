#include <iostream>
#include "Teams.hpp"
#include "String.hpp"


Team::Team() {}

Team::Team(IntVector v, String name, Car car1, Drivers d)
{

	teamname = name;
	numbercrew = v;
	car = car1;
	drivers = d;
}

Team::~Team() {}

std::ostream& operator <<(std::ostream& out, const Team& T1)
{
	out << "Name : " << T1.teamname << std::endl;
	out << "Drivers : " << std::endl << T1.drivers << std::endl;
	out << "Crew number : " << T1.numbercrew << std::endl << std::endl;
	out << "Car specifications :" << std::endl << T1.car;

	return out;
}