/**
* @file Kova.cpp.
* @description Kova Sinivin Isleri.
* @course 1.C.
* @assignment 1.Odev
* @date Kodu 28/11/19
* @author Omar Alkadri omar.alkadri@ogr.sakarya.edu.tr
*/
#include "Kova.hpp"
#include "Top.hpp"
char& Kova::TopAdi()
{
	return top;
}
Kova::Kova() {
	top = '\0';
	toplar = new Top();
}

string Kova::Sekil() {
	sekiller = "";
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if ((i == 0 && (j == 2 || j == 4)) || (i == 1 && (j == 1 || j == 5)) || (i == 2 && (j == 0 || j == 6)))
				sekiller += '.';
			if (i == 0 && j == 3)
				sekiller += '|';
			if ((i > 2 && i < 6) && (j == 0 || j == 6) || i == 6)
				sekiller += '#';
			if ((i == 4 && j == 3) && (toplar->topAdi() == '\0'))
				sekiller += '-';
			if (toplar->topAdi() != '\0' && (i == 4 && j == 3))
				sekiller += toplar->topAdi();
			if ((i == 0 && (j < 2 || +j>4)) || (i == 1 && (j == 0 || j > 1 && j < 5 || j == 6)) || (i == 2 && (j > 0 && j < 6))
				|| ((i == 3 || i == 5) && (j > 0 && j < 6)) || (i == 4 && (j == 1 || j == 2 || j == 4 || j == 5)))
				sekiller += ' ';
		}sekiller += '\n';
	}
	return sekiller;
}
int Kova::RenkGetir(int renk)
{
	renk = rand() % 13 + 1;
	renkler = renk;
	return renkler;
}
int Kova::RenkVer()
{
	return renkler;
}
ostream& operator<<(ostream& ekran, Kova& sag) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), sag.RenkVer());

	ekran << sag.Sekil() << "Kova Adersi : " << &sag << endl;
	if (sag.toplar->topAdi() == '\0')
	{
		ekran << "Top Adresi : " << "NULL" << endl;
	}
	else
		ekran << "Top Adresi : " << sag.toplar << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

	return ekran;
}
Kova::~Kova()
{
	delete toplar;
	delete& sekiller;
	delete& renkler;
}