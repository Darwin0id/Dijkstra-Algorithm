/*
============
TESTIRANO SA:
============
X: 10, Y: 10
============
A -> X: 1, Y: 1
A -> X: 9, Y: 9
*/

#include <iostream>
#include <Windows.h>
#include "Dijkstra.h"

int main()
{
	/* [GLOBAL POSTAVKE] */
	int x = 0, y = 0;

	/* [INPUT KORISNIKA] */
	std::cout << "Odaberite velicinu matrice:\nX: "; std::cin >> x;
	std::cout << "Y: "; std::cin >> y;

	system("cls"); //UREDNIJI ISPS

	/* [OBJEKTOS] */
	Dijkstra matrica(x, y);

	/* [NAJAVA] */
	std::cout << "Ovo je aplikacija koja pronalazi najbrzi put od (TOCKE A) do (TOCKE B)!" << std::endl;
	std::cout << "TOCKA A:" << std::endl;
	std::cout << "X: "; std::cin >> x; std::cout << "Y: "; std::cin >> y;

	/* POSTAVI TOCKU: [A] */
	matrica.setA(x, y);

	std::cout << std::endl;

	std::cout << "TOCKA B:" << std::endl;
	std::cout << "X: "; std::cin >> x; std::cout << "Y: "; std::cin >> y;

	/* POSTAVI TOCKU: [B] */
	matrica.setB(x, y);

	/* [GRAFICKI PRIKAZ PRIMJENE ALGORITMA] */
	do
	{
		system("cls"); //OCISTI EKRAN
		std::cout << matrica.pokreniProgram(); //IZVRSAVANJE
		Sleep(150);
	} while (matrica.TempTocka() != matrica.RealTocka());

	return 0;
}