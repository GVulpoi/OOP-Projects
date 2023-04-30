#pragma once
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include "Snake.hpp"
#include "Food.hpp"
#include "GameOver.hpp"

class Out  : public GameOver
{
public:

	virtual void afis(Snake& Snk, Food& F);

	virtual void afisdevwindow(Snake& Snk, Food& F);

	virtual ~Out() {};
};