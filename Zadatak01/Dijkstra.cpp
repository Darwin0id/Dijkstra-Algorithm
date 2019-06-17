#include "Dijkstra.h"

void Dijkstra::Algoritam()
{
	if (this->tempTocka.first > this->realTocka.second.first)
	{
		--(this->tempTocka.first);
	} else if (this->tempTocka.first < this->realTocka.second.first)
	{
		++(this->tempTocka.first);
	} else {
		if (this->tempTocka.second > this->realTocka.second.second) {
			--(this->tempTocka.second);
		} else if (this->tempTocka.second <= this->realTocka.second.second) {
			++(this->tempTocka.second);
		}
	}
}

Dijkstra::Dijkstra(int x, int y)
{
	this->x = x;
	this->y = y;
}

void Dijkstra::setA(int x, int y)
{
	this->realTocka.first.first = x;
	this->realTocka.first.second = y;
}

void Dijkstra::setB(int x, int y)
{
	this->realTocka.second.first = x;
	this->realTocka.second.second = y;

	this->tempTocka = this->realTocka.first;
}

std::string Dijkstra::pokreniProgram()
{
	this->Algoritam();
	std::stringstream ss;

	for (int i = 1; i <= this->x; ++i) {
		for (int j = 1; j <= this->y; ++j) {
			if (i == this->tempTocka.first && j == this->tempTocka.second)
			{
				ss << "x";
			} else if (i == this->realTocka.first.first && j == this->realTocka.first.second) {
				ss << "A";
			} else if (i == this->realTocka.second.first && j == this->realTocka.second.second) {
				ss << "B";
			} else {
				ss << "-";
			} 
		}
		ss << "\n";
	}

	return ss.str();
}

std::pair<int, int> Dijkstra::TempTocka()
{
	return this->tempTocka;
}

std::pair<int, int> Dijkstra::RealTocka()
{
	return this->realTocka.second;
}
