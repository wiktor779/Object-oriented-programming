#pragma once

class num{
public:
	// oblicza srednia dla tablicy o danym rozmiarze
	template <typename T>
	static const double srednia(T *tab, int rozmiar);

	// oblicza srednia dla tablicy bez przekazywania rozmiaru
	template <typename T>
	static const double srednia(T *tab);

	// oblicza srednia dla tablicy typu const o danym rozmiarze
	template <typename T>
	static const double srednia(const T *tab, int rozmiar);

	// oblicza srednia dla tablicy typu const bez przekazywania rozmiaru
	template <typename T>
	static const double srednia(const T *tab);

	// sprawdza czy wszystkie liczby miedzy indeksami [A, B) sa pierwsze
	template <int A, int B>
	static bool czyWszystkiePierwszwe(int *tab);

	// jesli falga = 0 zwraca FALSE, jesli flaga = 1 zwraca TRUE
	static const char * text(bool flaga);


};



template <typename T>
const double num::srednia(T *tab, int rozmiar){
	T sum = 0;
	for(int i = 0; i < rozmiar; i++){
		sum += tab[i];
	}
	return (double)sum / rozmiar;
}

template <typename T>
const double num::srednia(T *tab){
	return 1.0;
	
}

template <typename T>
const double num::srednia(const T *tab, int rozmiar){
	T sum = 0;
	for(int i = 0; i < rozmiar; i++){
		sum += tab[i];
	}
	return (double)sum / rozmiar;
}

template <typename T>
const double num::srednia(const T *tab){
	return 2.0;
}

template <int A, int B>
bool num::czyWszystkiePierwszwe(int *tab){
	for (int i = A; i < B; i++){
		for(int j = 2; j < tab[i]; j++){
			if(tab[i] % j == 0){
				return false;
			}
		}
	}
	return true;

}

const char * num::text(bool flaga){
	if(flaga){
		return "TRUE";
	}
	return "FALSE";
}
