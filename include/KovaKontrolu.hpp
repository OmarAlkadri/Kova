/**
* @file KovaKontrolu_HPP.
* @description Kontrol Sinivin Tanimi.
* @course 1.C.
* @assignment 1.Odev
* @date Kodu 28/11/19
* @author Omar Alkadri omar.alkadri@ogr.sakarya.edu.tr
*/
#ifndef KovaKontrolu_HPP
#define KovaKontrolu_HPP
#include "Kova.hpp"

class KovaKontrolu {
private:
	Kova* temp;
	Top* Ttemp;
public:
	void TopYerlestir(Kova*);
	void TopYokEt(Kova*);
	void KovaDegisTir(int, int, Kova* []);
	void TopDegisTir(int, int, Kova* []);
	void KovaTersYerlesTir(int a, Kova* []);
	void TopTersYerlesTir(int, Kova* []);
	//void RenkDegistir(int, int, Kova* renkdizi[]);
	//void RenkiTesYerlesTir(int a, Kova* Kovalar[]);
	~KovaKontrolu();
};
#endif