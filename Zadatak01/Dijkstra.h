#pragma once
#include <iostream>
#include <string>
#include <sstream>

class Dijkstra
{
	private:
		int x = 0, y = 0;
		std::pair<std::pair<int, int>, std::pair<int, int>> realTocka;
		std::pair<int, int> tempTocka;
		void Algoritam();

	public:
		//KONSTRUKTIC
		Dijkstra(int x, int y);

		//SETAJ MI A I B
		void setA(int x, int y);
		void setB(int x, int y);

		//RUNNAJ PROGRAM
		std::string pokreniProgram();

		//API POZIVI
		std::pair<int, int> TempTocka();
		std::pair<int, int> RealTocka();
};

