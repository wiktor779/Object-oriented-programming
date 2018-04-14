// Map.h

#include <iostream>

// tablica asocjacyjna
class map_type_name {
private:
	mutable map_key_type _indeks[100]; // indeksy tablicy
	mutable map_value_type _wartosc[100]; // wastoci tablicy
	mutable int liczba_elementow; // liczba elementow tablicy
public:
	map_type_name(){
		liczba_elementow = 0;
	}
	// wstawiamy nowa wartosc pod danym indeksem (jesli juz byla jakas wartosc ta ja nadpisujemy)
	void insert(const map_key_type indeks, const map_value_type wartosc){
		for(int i = 0; i < liczba_elementow; i++){
			if(_indeks[i] == indeks){
				_wartosc[i] = wartosc;
				break;
			}
		}
		_indeks[liczba_elementow] = indeks;
		_wartosc[liczba_elementow] = wartosc;
		liczba_elementow++;
	}

	// wypisuje cala tablice (wartosci wraz z indeksami)
	void print(const char * napis){
		for(int i = 0; i < liczba_elementow; i++){
			std::cout << napis << " k: " << _indeks[i];
			std::cout << " v: " << _wartosc[i] << std::endl;
		}
	}

	// pozwala uzyskac dostep do wartosci poprzez indeks
	map_value_type & at(const map_key_type indeks) const {
		for(int i = 0; i < liczba_elementow; i++){
			if( _indeks[i] == indeks)
				return _wartosc[i];
		}
		_indeks[liczba_elementow] = indeks;
		_wartosc[liczba_elementow] = 0;
		liczba_elementow++;
		return _wartosc[liczba_elementow - 1];
	}

	// sprawdza czy w tablicy istnieje dany indeks
	int contains(const map_key_type indeks) const{
		for(int i = 0; i < liczba_elementow; i++){
			if( _indeks[i] == indeks)
				return 1;
		}
		return 0;
	}				
};

#undef map_key_type
#undef map_value_type
#undef map_type_name
