#pragma once
#include <iostream>
#include "String.hpp"
#include "Vector.hpp"


class Car
{
	IntVector price;
	String car_name;
	String motor;
	String motor_constr;
public:
	Car();

	Car(char* name, char* moto, char* moto_constr , int pr);

	~Car();

	friend std::ostream& operator <<(std::ostream& out, const Car& C1);

};