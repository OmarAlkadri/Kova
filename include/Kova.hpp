/**
 * @file Kova.cpp.
 * @description Kova Sinivin Isleri.
 * @course 1.C.
 * @assignment 1.Odev
 * @date Kodu 28/11/19
 * @author Omar Alkadri omar.alkadri@ogr.sakarya.edu.tr
 */
#ifndef Kova_HPP
#define Kova_HPP
#include "Top.hpp"
#include <Windows.h>
using namespace std;
class Kova
{
private:
	string sekiller;
	string Sekil();
	int renkler;
	char top;
	int RenkVer();
	friend ostream &operator<<(ostream &ekran, Kova &sag);

public:
	Top *toplar;
	Kova();
	char &TopAdi();
	int RenkGetir(int);
	// int RenkVer();

	~Kova();
};
#endif