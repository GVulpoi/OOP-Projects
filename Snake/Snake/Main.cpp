#include <iostream>
#include <windows.h>
#include "Head.hpp"
#include "Coord.hpp"
#include "Output.hpp"
#include "Snake.hpp"


void Option_1()
{
	system("mode 46,25");
	SMALL_RECT WinRect = { 0, 0, 80, 25 };
	SMALL_RECT* WinSize = &WinRect;
	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), true, WinSize);
	int left = 0, right = 0, down = 0, up = 0, x = 0, y = 0;
	Snake Snk(0, 0);
	Food F;
	Out Output;
	while (TRUE)
	{
		if (GetKeyState(77) & 0x8000)
		{
			break;
		}
		if (GetKeyState(VK_LEFT) & 0x8000 && right == 0)
		{
			Snk.left();
			Snk.move(Snk.getx(), Snk.gety());
			up = 0;
			left = 1;
			down = 0;
			right = 0;
		}
		else
		{

			if (GetKeyState(VK_RIGHT) & 0x8000 && left == 0)
			{
				Snk.right();
				Snk.move(Snk.getx(), Snk.gety());
				up = 0;
				left = 0;
				down = 0;
				right = 1;
			}
			else
			{

				if (GetKeyState(VK_DOWN) & 0x8000 && up == 0)
				{
					Snk.down();
					Snk.move(Snk.getx(), Snk.gety());;
					up = 0;
					left = 0;
					down = 1;
					right = 0;
				}
				else
				{

					if (GetKeyState(VK_UP) & 0x8000 && down == 0)
					{
						Snk.up();
						Snk.move(Snk.getx(), Snk.gety());
						up = 1;
						left = 0;
						down = 0;
						right = 0;
					}
					else
					{

						if (GetKeyState(27) & 0x8000)
						{
							std::cout << std::endl;
							std::cout << std::endl;
							exit(0);
						}
						else
						{

							if (left == 1)
							{
								Snk.left();
								Snk.move(Snk.getx(), Snk.gety());
							}
							else
							{

								if (right == 1)
								{
									Snk.right();
									Snk.move(Snk.getx(), Snk.gety());
								}
								else
								{

									if (up == 1)
									{
										Snk.up();
										Snk.move(Snk.getx(), Snk.gety());
									}
									else
									{

										if (down == 1)
										{
											Snk.down();
											Snk.move(Snk.getx(), Snk.gety());
										}
									}
								}
							}
						}
					}
				}
			}
		}
		Output.afis(Snk, F);
		Sleep(40);
	}
}


void Option_2()
{
	system("mode 46,40");
	SMALL_RECT WinRect = { 0, 0, 80, 25 };
	SMALL_RECT* WinSize = &WinRect;
	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), true, WinSize);

	int left = 0, right = 0, down = 0, up = 0, x = 0, y = 0;
	Snake Snk(0, 0);
	Food F;
	Out Output;

	while (TRUE)
	{
		if (GetKeyState(77) & 0x8000)
		{
			break;
		}

		if (GetKeyState(VK_LEFT) & 0x8000 && right == 0)
		{
			Snk.left();
			Snk.move(Snk.getx(), Snk.gety());
			up = 0;
			left = 1;
			down = 0;
			right = 0;
		}
		else
		{

			if (GetKeyState(VK_RIGHT) & 0x8000 && left == 0)
			{
				Snk.right();
				Snk.move(Snk.getx(), Snk.gety());
				up = 0;
				left = 0;
				down = 0;
				right = 1;
			}
			else
			{

				if (GetKeyState(VK_DOWN) & 0x8000 && up == 0)
				{
					Snk.down();
					Snk.move(Snk.getx(), Snk.gety());;
					up = 0;
					left = 0;
					down = 1;
					right = 0;
				}
				else
				{

					if (GetKeyState(VK_UP) & 0x8000 && down == 0)
					{
						Snk.up();
						Snk.move(Snk.getx(), Snk.gety());
						up = 1;
						left = 0;
						down = 0;
						right = 0;
					}
					else
					{

						if (GetKeyState(27) & 0x8000)
						{
							Sleep(40);
						}
						else
						{
							if (left == 1)
							{
								Snk.left();
								Snk.move(Snk.getx(), Snk.gety());
							}
							else
							{

								if (right == 1)
								{
									Snk.right();
									Snk.move(Snk.getx(), Snk.gety());
								}
								else
								{

									if (up == 1)
									{
										Snk.up();
										Snk.move(Snk.getx(), Snk.gety());
									}
									else
									{

										if (down == 1)
										{
											Snk.down();
											Snk.move(Snk.getx(), Snk.gety());
										}
									}
								}
							}
						}
					}
				}
			}
		}
		Output.afis(Snk, F);
		Output.afisdevwindow(Snk, F);
		Sleep(40);
	}
}


void menu()
{
	system("mode 78,10");
	SMALL_RECT WinRect = { 0, 0, 80, 25 };
	SMALL_RECT* WinSize = &WinRect;
	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), true, WinSize);

	int option;
	std::cout << "	Snake" << std::endl << std::endl;
	std::cout << "1. Play game." << std::endl;;
	std::cout << "2. Play game with dev winow." << std::endl;
	std::cout << "0. Exit" << std::endl;
	std::cout << std::endl;
	std::cout << "Remind that while you are playing you can press 'esc' to end game" << std::endl; 
	std::cout << "And that in option 2 you can hold esc to pause and press m to return to menu." << std::endl;

	std::cin >> option;

	if (option == 0)
	{
		exit(0);
	}
	if (option == 1)
	{
		system("cls");
		Option_1();
	}
	if (option == 2)
	{
		system("cls");
		Option_2();
	}
}

int main()
{
	while (TRUE)
	{
		menu();
	}
	return 0;
}