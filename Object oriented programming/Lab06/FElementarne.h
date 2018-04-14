//FElementarne.h
#pragma once
#include "Fun.h"

//Funkcja liniowa jest rodzajem funkcji
class Liniowa : public Fun{
private:
	double _a;
	double _b;
public:
	static Liniowa * utworz();
	Liniowa * a(double a);
	Liniowa * b(double b);
	virtual double wartosc(double arg);
	
};

//Funkcja kwadratowa jest rodzajem funkcji
class Kwadratowa : public Fun{
private:
	double _a;
	double _b;
	double _c;

public:
	static Kwadratowa * utworz();
	Kwadratowa * a(double a);
	Kwadratowa * b(double b);
	Kwadratowa * c(double c);
	virtual double wartosc(double arg);
};
