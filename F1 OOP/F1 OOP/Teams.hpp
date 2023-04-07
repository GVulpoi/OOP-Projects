#pragma once
#include "String.hpp"
#include "Vector.hpp"
#include "Car.hpp"
#include "Drivers.hpp"


class Team
{
private:
	IntVector numbercrew;
	String teamname;
	Car car;
	Drivers drivers;
public:

	Team();

	Team(IntVector v, String name, Car car1, Drivers d);

	~Team();

	friend std::ostream& operator <<(std::ostream& out, const Team& T1);
};