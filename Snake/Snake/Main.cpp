#include <iostream>
#include <windows.h>
#include "Head.hpp"
#include "Coord.hpp"
#include "Output.hpp"
#include "Snake.hpp"


int main()
{
	int left = 0 , right = 0 , down = 0 , up = 0;
	Snake Snk;
	Food F;
	Out B;
	Snk.setsym('A');
	Snk.start();
	while (TRUE)
	{
		if (GetKeyState(VK_LEFT) & 0x8000 && right == 0)
		{
			Snk.left();
			Snk.move(Snk.getx() , Snk.gety());
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
							return 0;
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
		B.afis(Snk , F);
		Sleep(20);
	}
	return 0;
}