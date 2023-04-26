#pragma once
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include "Snake.hpp"
#include "Food.hpp"

class Out
{
public:
	virtual void afis(Snake& Snk , Food& F)
	{
		system("cls");
		if (Snk.getx() > 10)
		{
			Snk.setx(-10);
		}
		else
		{

			if (Snk.gety() > 10)
			{
				Snk.sety(-10);
			}
			else
			{

				if (Snk.getx() < -10)
				{
					Snk.setx(10);
				}
				else
				{
					if (Snk.gety() < -10)
					{
						Snk.sety(10);
					}
				}
			}
		}

		if (Snk.getx() == F.getx() && Snk.gety() == F.gety())
		{
			Snk.add(Snk.getx(), Snk.gety());
			F.Change();
		}

		for (int i = -11; i <= 11; i++)
		{
			for (int j = -11; j <= 11; j++)
			{
				int ok = 1;
				if (j == -11 || j == 11 || i == 11 || i == -11)
				{
					std::cout << "# ";
				}
				else
				{
					if (F.getx() == i && F.gety() == j)
					{
						std::cout << "* ";
					}
					else
					{

						if (Snk.getx() == i && Snk.gety() == j)
						{
							std::cout << Snk.getsym() << " ";
							ok = 0;
						}
						else
						{
							for (int k = 0; k < Snk.getlen(); k++)
							{
								if (Snk.getvecx(k) == i && Snk.getvecy(k) == j)
								{
									std::cout << "@ ";
									ok = 0;
								}
							}

							for (int k = 0; k < Snk.getlen()-2; k++)
							{
								if (Snk.getvecx(k) == Snk.getx() && Snk.getvecy(k) == Snk.gety())
								{
									system("cls");
									std::cout << "Game over !" << std::endl;
									exit(0);
								}
							}

							if (ok == 1)
							{
								std::cout << "  ";
							}
						}
					}
				}
			}

			std::cout << std::endl;
		}
	}
};