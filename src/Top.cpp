/**
* @file Top.cpp.
* @description Top Sinivin Isleri.
* @course 1.C.
* @assignment 1.Odev
* @date Kodu 28/11/19
* @author Omar Alkadri omar.alkadri@ogr.sakarya.edu.tr
*/
#include "Top.hpp"
char& Top::Toplar()
{
	top = (rand() % ('Z' - 'A') + 'A');
	return top;
}
char& Top::topAdi()
{
	topA = &top;
	return *topA;
}
Top::~Top()
{
	delete& top;
	delete topA;
}