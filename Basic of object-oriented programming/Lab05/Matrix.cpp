//definicje.cpp -- definicje funkcji
#include <iostream>
#include "Matrix.h"


Vector::Vector(){
	wek[0]=wek[1]=wek[2];
}

Vector::Vector(float wspX, float wspY, float wspZ){
	wek[0] = wspX;
	wek[1] = wspY;
	wek[2] = wspZ;
}

float Vector::at(int wsp){
	return wek[wsp];
}

void Vector::Set(int wsp, float wart){
	wek[wsp] = wart;

}

Matrix::Matrix(Vector w1, Vector w2, Vector w3){
	wektor[0] = w1;
	wektor[1] = w2;
	wektor[2] = w3;
}

Matrix & Matrix::set(int x, int y, float wart){
	wektor[x].Set(y, wart);
	return *this;
}

Vector Matrix::extractRow(int wiersz){
	return wektor[wiersz];
}

Vector Matrix::extractColumn(int kolumna){
	float tab[3];
	for(int i = 0; i < 3; i++){
		tab[i] = wektor[i].at(kolumna);
	}
	Vector temp(tab[0], tab[1], tab[2]);
	return temp;
}
