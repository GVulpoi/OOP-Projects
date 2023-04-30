#pragma once
#include "GameOver.hpp"

void GameOver::GmOv(int x)
{
	system("cls");
	std::cout << "Game over !" << std::endl << "Score : " << x << std::endl;
}