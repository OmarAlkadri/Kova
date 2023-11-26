/**
* @file KovaKontrolu.cpp.
* @description KovaKontrolu Sinivin Isleri.
* @course 1.C.
* @assignment 1.Odev
* @date Kodu 28/11/19
* @author Omar Alkadri omar.alkadri@ogr.sakarya.edu.tr
*/
#include "KovaKontrolu.hpp"
#include "Kova.hpp"

void KovaKontrolu::TopYerlestir(Kova* Kovalar)
{
	if (Kovalar->toplar->topAdi() == '\0')
	{
		Kovalar->TopAdi() = Kovalar->toplar->Toplar();
	}
	else {
		system("cls");
		cout << "zatan Top Yerlesti : Islem yapilmaz" << endl;
		Sleep(250);
	}
}
void KovaKontrolu::TopYokEt(Kova* Kovalar)
{
	if (Kovalar->toplar->topAdi() != '\0')
	{
		Kovalar->toplar->topAdi() = '\0';
	}
	else {
		system("cls");
		cout << "zatan Top Yok : Islem yapilmaz" << endl;
		Sleep(250);
	}
}
void KovaKontrolu::KovaDegisTir(int a, int b, Kova* Kovalar[])
{
	temp = Kovalar[a - 1];
	Kovalar[a - 1] = Kovalar[b - 1];
	Kovalar[b - 1] = temp;
}
void KovaKontrolu::KovaTersYerlesTir(int kovaSayisi, Kova* Kovalar[])
{
	for (int i = 0; i < kovaSayisi; i++)
	{
		temp = Kovalar[kovaSayisi - 1];
		Kovalar[kovaSayisi - 1] = Kovalar[i];
		Kovalar[i] = temp;
		kovaSayisi--;
	}
}
void KovaKontrolu::TopDegisTir(int a, int b, Kova* Kovalar[])
{
	temp = new Kova();
	temp->toplar = Kovalar[a - 1]->toplar;
	Kovalar[a - 1]->toplar = Kovalar[b - 1]->toplar;
	Kovalar[b - 1]->toplar = temp->toplar;
}
void KovaKontrolu::TopTersYerlesTir(int kovaSayisi, Kova* Kovalar[])
{
	temp = new Kova();
	for (int i = 0; i < kovaSayisi; i++)
	{
		temp->toplar = Kovalar[kovaSayisi - 1]->toplar;
		Kovalar[kovaSayisi - 1]->toplar = Kovalar[i]->toplar;
		Kovalar[i]->toplar = temp->toplar;
		kovaSayisi--;
	}
}
/*void KovaKontrolu::RenkDegistir(int a, int b, Kova* renkdizi[])
{
	temp = renkdizi[a - 1];
	renkdizi[a - 1] = renkdizi[b - 1];
	renkdizi[b - 1] = temp;
}*/
/*void KovaKontrolu::RenkiTesYerlesTir(int kovaSayisi, Kova* Renkler[])
{
	for (int i = 0; i < kovaSayisi; i++)
	{
		temp = Renkler[kovaSayisi - 1];
		Renkler[kovaSayisi - 1] = Renkler[i];
		Renkler[i] = temp;
		kovaSayisi--;
	}
}*/
KovaKontrolu::~KovaKontrolu()
{
	delete temp;
	delete Ttemp;
}