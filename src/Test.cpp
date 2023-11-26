/**
* @file Test.cpp.
* @description Kutuphanelerimiz Testlenmesi.
* @course 1.C.
* @assignment 1.Odev
* @date Kodu 28/11/19
* @author Omar Alkadri omar.alkadri@ogr.sakarya.edu.tr
*/
#include "KovaKontrolu.hpp"
#include <time.h>
using namespace std;

//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
	srand(time(0));
	int kovaSayisi;
	int secenek;
	int sayi1, sayi2;
	cout << "Kova Sayisi : ";
	cin >> kovaSayisi;
	Kova** Kovalar = new Kova * [kovaSayisi];
	//Kova** Renkler = new Kova * [kovaSayisi];
	KovaKontrolu* kontrol = new KovaKontrolu();
	for (int i = 0; i < kovaSayisi; i++)
	{
		Kovalar[i] = new Kova();
		//Renkler[i] = new Kova();
		//Renkler[i]->RenkGetir(i);
		Kovalar[i]->RenkGetir(i);

	}
	do {
		system("cls");
		for (int i = 0; i < kovaSayisi; i++)
		{
			//SetConsoleTextAttribute(hConsole, Renkler[i]->RenkVer());
			cout << *Kovalar[i];
			//SetConsoleTextAttribute(hConsole, 15);
		}
		cout << "islemler : " << endl;
		cout << "[1] Toplari Yerlestir" << endl;
		cout << "[2] Toplari Yoket" << endl;
		cout << "[3] Kova Degistir" << endl;
		cout << "[4] Top Degistir" << endl;
		cout << "[5] Kovalari Tersten Yerlestir" << endl;
		cout << "[6] Toplari Tersten Yerlestir" << endl;
		cout << "[7] Cikis" << endl;
		cout << "islem seciniz : ";
		cin >> secenek;

		switch (secenek)
		{
		case 1:
			for (int i = 0; i < kovaSayisi; i++)
				kontrol->TopYerlestir(Kovalar[i]);
			break;
		case 2:
			for (int i = 0; i < kovaSayisi; i++)
				kontrol->TopYokEt(Kovalar[i]);
			break;
		case 3:
			cout << "1. Kova Girin..: ";
			cin >> sayi1;
			cout << "2. Kova Grini..: ";
			cin >> sayi2;
			kontrol->KovaDegisTir(sayi1, sayi2, Kovalar);
			//kontrol->RenkDegistir(sayi1, sayi2, Renkler);
			break;
		case 4:
			cout << "1.Top Girin..: ";
			cin >> sayi1;
			cout << "2.Top Girin..: ";
			cin >> sayi2;
			kontrol->TopDegisTir(sayi1, sayi2, Kovalar);
			break;
		case 5:
			kontrol->KovaTersYerlesTir(kovaSayisi, Kovalar);
			//kontrol->RenkiTesYerlesTir(kovaSayisi, Renkler);
			break;

		case 6:
			kontrol->TopTersYerlesTir(kovaSayisi, Kovalar);
			break;
		case 7:break;
		default:
			system("cls");
			cout << "Menu sayilarinin kullaniniz...!" << endl; 
			Sleep(1000);
			continue;
		}
	} while (secenek != 7);
	for (int i = 0; i < kovaSayisi; i++) {
		delete Kovalar[i];
		//delete Renkler[i];
	}
	delete[]Kovalar;
	//delete[]Renkler;
	delete kontrol;
	return 0;
}