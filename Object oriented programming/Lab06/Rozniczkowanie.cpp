//Rozniczkowanie.cpp

#include "Rozniczkowanie.h"
ProsteRozniczkowanie::ProsteRozniczkowanie(double krokPrecyzji){
	_krokPrecyzji = krokPrecyzji;
}

Op1 * ProsteRozniczkowanie::z(Fun * funkcja){
	_wsk = funkcja;
	return this;
}

double ProsteRozniczkowanie::w(double arg){
	return (_wsk->wartosc(arg+_krokPrecyzji)-_wsk->wartosc(arg-_krokPrecyzji))/ (2. * _krokPrecyzji);
}

