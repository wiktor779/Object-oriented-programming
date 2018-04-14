// Matrix.h -- plik naglowkowy
#ifndef MATRIX_H_
#define MATRIX_H_

#include "Vector.h"

// klasa sluzaca do reprezentacji macierzy o wymiarze 3 x 3
class Matrix{
	private:
		Vector wektor[3]; // tablica obiektow klasy wektor

	public:
		Matrix(Vector w1, Vector w2, Vector w3); // tworzy macierz z istniejacych wektorow
		Matrix & set(int x, int y, float wart); // zmienia warosc jednej z komorek macierzy
		Vector extractRow(int wiersz); // zwraca nowy wektor utworzony z wiersza macierzy
		Vector extractColumn(int kolumna); // zwraca nowy wektor utworzony z kolumny macierzy
};

#endif
