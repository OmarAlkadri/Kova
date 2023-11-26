/**
* @file TOP_HPP.
* @description Top Sinivin Tanimi.
* @course 1.C.
* @assignment 1.Odev
* @date Kodu 28/11/19
* @author Omar Alkadri omar.alkadri@ogr.sakarya.edu.tr
*/
#ifndef TOP_HPP
#define TOP_HPP
#include <iostream>
class Top {
private:
	char top;
	char *topA;
public:
	char& Toplar();
	char& topAdi();
	~Top();
};
#endif