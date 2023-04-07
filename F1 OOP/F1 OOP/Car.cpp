#include "Car.hpp"


Car::Car() {}

Car::Car(char* name, char* moto, char* moto_constr , int pr)
{
	car_name = name;
	motor = moto;
	motor_constr = moto_constr;
	price = pr;
}

Car::~Car() {}

std::ostream& operator <<(std::ostream& out, const Car& C1)
{
	out << "Car name : " << C1.car_name;
	out << "Engine : " << C1.motor;
	out << "Engine manufacturer : " << C1.motor_constr;
	out << "Price : " << C1.price << "USD" << std::endl;

	return out;
}