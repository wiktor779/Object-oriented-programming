//FElementarne.cpp
#include "FElementarne.h"

//liniowa
Liniowa * Liniowa::utworz(){
	return new Liniowa();
}

Liniowa * Liniowa::a(double a){
	_a = a;
	return this;
}

Liniowa * Liniowa::b(double b){
	_b = b;
	return this;
}

double Liniowa::wartosc(double arg){
	return _a*arg + _b;
}
//kwadratowa
Kwadratowa * Kwadratowa::utworz(){
	return new Kwadratowa();
}

Kwadratowa * Kwadratowa::a(double a){
	_a = a;
	return this;
}

Kwadratowa * Kwadratowa::b(double b){
	_b = b;
	return this;
}

Kwadratowa * Kwadratowa::c(double c){
	_c =c;
	return this;
}

double Kwadratowa::wartosc(double arg){
	return _a*arg*arg + _b*arg + _c;
}

