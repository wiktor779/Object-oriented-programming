// IntSequence.h
#ifndef INTSEQUENCE_H_
#define INTSEQUENCE_H_

class IntSequence{
private:
	int * _tab; // wskaznik na sekwencje liczb
	int _biezacy; // indeks biezacego elementu
	int _wszystkichElementow; // liczba wszystkich elementow

public:
	IntSequence(); // tworzy pusta sekwencje liczb
	~IntSequence(); // zwalnia pamiec
	IntSequence & operator<<(int wartosc); // pozwala na dodawanie liczb do sekwencji
	int operator()() const; // zwraca biezacy element z sekwencji
	operator int() const { return _tab[_biezacy]; } // zwraca biezacy element z sekwencji
	int operator++(int); // ustawia biezacy element na kolejny(jesli biezacy element byl ostatnim to powraca do pierwszego)
	int operator--(int); // ustawia biezacy element na poprzedni(jest biezacy element byl pierwszym to przechodzi do ostatniego)
	bool finished(); // zwraca true po przejsciu przez cala sekwencje
	void reset(); // ustawia biezacy element na pierwszy element w sekwencji liczb


};

#endif
