#pragma once
#include <iostream>
#include <combaseapi.h>

interface GameOver
{
public:

	virtual void GmOv(int x)
	{
		system("cls");
		std::cout << "Game over !" << std::endl << "Score : " << x << std::endl;
	}

};