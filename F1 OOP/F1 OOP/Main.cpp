#include "Teams.hpp"
#include "Drivers.hpp"
#include "Car.hpp"


int Start_Menu()
{
	int input;
	std::cout << "		Welcome ! Write down what option you want to choose ." << std::endl << std::endl;
	std::cout << "1. Choose a team" << std::endl;
	std::cout << "2. See all teams" << std::endl;
	std::cout << "3. Configure your team" << std::endl;
	std::cout << "4. Overload test" << std::endl;
	std::cout << "0. Exit" << std::endl;
	std::cin >> input;
	return input;
}


int Team_Lists()
{
	std::cout << "		What team do you want to see/build ?" << std::endl << std::endl;
	std::cout << "1. Red Bull Racing" << std::endl;
	std::cout << "2. Mercedes" << std::endl;
	std::cout << "3. Ferrari" << std::endl;
	std::cout << "4. Aston Martin" << std::endl;
	std::cout << "5. Alfa Romeo" << std::endl;
	std::cout << "6. McLaren" << std::endl;
	std::cout << "7. Alpine" << std::endl;
	std::cout << "8. Alpha Tauri" << std::endl;
	std::cout << "9. Haas F1 Team" << std::endl;
	std::cout << "10. Williams" << std::endl;
	std::cout << "-1. Back ." << std::endl;
	std::cout << "0. Exit ." << std::endl;

	int input;
	std::cin >> input;

	if (input == -1)
	{
		return -1;
	}
	if (input == 0)
	{
		return 0;
	}
	if (input == 1)
	{
		return 1;
	}
	if (input == 2)
	{
		return 2;
	}
	if (input == 3)
	{
		return 3;
	}
	if (input == 4)
	{
		return 4;
	}
	if (input == 5)
	{
		return 5;
	}
	if (input == 6)
	{
		return 6;
	}
	if (input == 7)
	{
		return 7;
	}
	if (input == 8)
	{
		return 8;
	}
	if (input == 9)
	{
		return 9;
	}
	if (input == 10)
	{
		return 10;
	}
}


void Red_Bull()
{
	std::cout << "		You chosed team Red Bull Racing : " << std::endl << std::endl;

	int pr = 2000000;
	char str[22] = "Red Bull Racing";
	char c_n[20] = "RB19";
	char e_n[20] = "Honda RBPTH001";
	char e_m[20] = "Honda";
	char d1[20] = "Max Verstappen";
	char d2[20] = "Checo Perez";
	Team Red_Bull(IntVector(1000), String(str), Car(c_n, e_n, e_m ,pr ), Drivers(d1, d2));

	std::cout << Red_Bull;
}


void Mercedes()
{
	std::cout << "		You chosed team Mercedes : " << std::endl << std::endl;

	int pr = 2000000;
	char str[22] = "Mercedes";
	char c_n[20] = "W14";
	char e_n[50] = "Mercedes F1 M14 E Performance";
	char e_m[20] = "Mercedes";
	char d1[20] = "Lewis Hamilton";
	char d2[20] = "George Russell";

	Team Mercedes(IntVector(1500), String(str), Car(c_n, e_n, e_m,pr), Drivers(d1, d2));
	std::cout << Mercedes;
}


void Ferrari()
{
	std::cout << "		You chosed team Ferrari : " << std::endl << std::endl;

	int pr = 2000000;
	char str[22] = "Ferrari";
	char c_n[20] = "SF-23";
	char e_n[50] = "Fr";
	char e_m[20] = "Ferrari";
	char d1[20] = "Charles Leclerc";
	char d2[20] = "Carlos Sainz";

	Team Ferrari(IntVector(1200), String(str), Car(c_n, e_n, e_m, pr), Drivers(d1, d2));
	std::cout << Ferrari;
}


void Aston_Martin()
{
	std::cout << "		You chosed team Aston Martin : " << std::endl << std::endl;

	int pr = 2000000;
	char str[22] = "Aston Martin";
	char c_n[20] = "AMR 23";
	char e_n[50] = "Mercedes F1 M14 E Performance";
	char e_m[20] = "Mercedes";
	char d1[20] = "Fernando Alonso";
	char d2[20] = "Lance Stroll";

	Team Aston_Martin(IntVector(700), String(str), Car(c_n, e_n, e_m, pr), Drivers(d1, d2));
	std::cout << Aston_Martin;
}


void Alfa_Romeo()
{
	std::cout << "		You chosed team Alfa Romeo : " << std::endl << std::endl;

	int pr = 2000000;
	char str[22] = "Alfa Romeo";
	char c_n[20] = "C43";
	char e_n[50] = "Ferrari 066/10";
	char e_m[20] = "Ferrari";
	char d1[20] = "Valtteri Bottas";
	char d2[20] = "Zhou Guanyu";

	Team Alfa_Romeo(IntVector(600), String(str), Car(c_n, e_n, e_m, pr), Drivers(d1, d2));
	std::cout << Alfa_Romeo;
}


void McLaren()
{
	std::cout << "		You chosed team McLaren : " << std::endl << std::endl;

	int pr = 2000000;
	char str[22] = "McLaren";
	char c_n[20] = "MCL32";
	char e_n[50] = "RA617H";
	char e_m[20] = "Honda";
	char d1[20] = "Lando Norris";
	char d2[20] = "Oscar Piastri";

	Team McLaren(IntVector(1948), String(str), Car(c_n, e_n, e_m , pr), Drivers(d1, d2));
	std::cout << McLaren;
}


void Alpine()
{
	std::cout << "		You chosed team Alpine : " << std::endl << std::endl;

	int pr = 2000000;
	char str[22] = "Alpine";
	char c_n[20] = "MCL32";
	char e_n[50] = "Renault E-Tech RE23";
	char e_m[20] = "Renault";
	char d1[20] = "Pierre Gasly";
	char d2[20] = "Esteban Ocon";

	Team Alpine(IntVector(900), String(str), Car(c_n, e_n, e_m , pr), Drivers(d1, d2));
	std::cout << Alpine;
}


void Alpha_Tauri()
{
	std::cout << "		You chosed team Alpha_Tauri : " << std::endl << std::endl;

	int pr = 2000000;
	char str[22] = "Alpha_Tauri";
	char c_n[20] = "AT04";
	char e_n[50] = "Honda RBPTH001";
	char e_m[20] = "Honda";
	char d1[20] = "Yuki Tsunoda";
	char d2[20] = "Nyck de Vries";

	Team Alpha_Tauri(IntVector(800), String(str), Car(c_n, e_n, e_m , pr), Drivers(d1, d2));
	std::cout << Alpha_Tauri;
}


void Haas_F1_Team()
{
	std::cout << "		You chosed team Haas_F1_Team : " << std::endl << std::endl;

	int pr = 2000000;
	char str[22] = "Haas_F1_Team";
	char c_n[20] = "VF-23";
	char e_n[50] = "--";
	char e_m[20] = "Ferrari";
	char d1[20] = "Kevin Magnussen";
	char d2[20] = "Nico Hulkenberg";

	Team Haas_F1_Team(IntVector(283), String(str), Car(c_n, e_n, e_m , pr), Drivers(d1, d2));
	std::cout << Haas_F1_Team;
}


void Williams()
{
	std::cout << "		You chosed team Williams : " << std::endl << std::endl;

	int pr = 2000000;
	char str[22] = "Williams";
	char c_n[20] = "FW-45";
	char e_n[50] = "Mercedes F1 M14 E Performance";
	char e_m[20] = "Mercedes";
	char d1[20] = "Logan Sargeant";
	char d2[20] = "Alex Albon";

	Team Williams(IntVector(283), String(str), Car(c_n, e_n, e_m , pr), Drivers(d1, d2));
	std::cout << Williams;
}

void Show_Teams()
{
	Red_Bull();
	Mercedes();
	Ferrari();
	Aston_Martin();
	Alfa_Romeo();
	McLaren();
	Alpine();
	Alpha_Tauri();
	Haas_F1_Team();
}

void Custom_Team()
{
	std::cout << "		Create your team : " << std::endl << std::endl;

	std::cout << "Team name : ";
	char str[100];
	std::cin >> str;

	std::cout << "Car name : ";
	char c_n[100];
	std::cin >> c_n;

	std::cout << "Engine name : ";
	char e_n[100];
	std::cin >> e_n;

	std::cout << "Engine manufacturer : ";
	char e_m[100];
	std::cin >> e_m;

	std::cout << "Driver 1 name : ";
	char d1[100];
	std::cin >> d1;

	std::cout << "Driver 2 name : ";
	char d2[100];
	std::cin >> d2;

	std::cout << "Crew number : ";
	int cn;
	std::cin >> cn;

	std::cout << "Price of the car : ";
	int pr;
	std::cin >> pr;

	std::cout << std::endl << std::endl << "		Your team : " << std::endl;
	Team My_Team(IntVector(cn), String(str), Car(c_n, e_n, e_m, pr), Drivers(d1, d2));
	std::cout << My_Team;
}

void choose_team(int aux)
{
	if (aux == 1)
	{
		Red_Bull();
	}
	if (aux == 2)
	{
		Mercedes();
	}
	if (aux == 3)
	{
		Ferrari();
	}
	if (aux == 4)
	{
		Aston_Martin();
	}
	if (aux == 5)
	{
		Alfa_Romeo();
	}
	if (aux == 6)
	{
		McLaren();
	}
	if (aux == 7)
	{
		Alpine();
	}
	if (aux == 8)
	{
		Alpha_Tauri();
	}
	if (aux == 9)
	{
		Haas_F1_Team();
	}
	if (aux == 10)
	{
		Williams();
	}
	if (aux == 11)
	{
		Custom_Team();
	}
}

void test_supraincarcare()
{
	std::cout << "Enter a price type int : ";
	int aux;
	std::cin >> aux;
	IntVector Test;
	Test = aux;
	std::cout << "Enter a price that you want to add (int) : ";
	int ent;
	std::cin >> ent;
	Test.add(ent);
	std::cout << "New price : " << Test << std::endl;

	std::cout << "Enter a price that you want to add (float) : ";
	float flet;
	std::cin >> flet;
	Test.add(flet);
	std::cout << "New price : " << Test << std::endl;

	std::cout << "Enter a price that you want to add (double) : ";
	double dable;
	std::cin >> dable;
	Test.add(dable);
	std::cout << "New price : " << Test << std::endl;
}

int main()
{
	while (true)
	{
		int S_M = Start_Menu();

		if (S_M == 0)
		{
			return 0;
		}

		if (S_M == 1)
		{
			int aux = Team_Lists();
			if (aux == 0)
			{
				return 0;
			}
			choose_team(aux);
		}

		if (S_M == 2)
		{
			Show_Teams();
		}
		if (S_M == 3)
		{
			Custom_Team();
		}

		if (S_M == 4)
		{
			test_supraincarcare();
		}
	}
}