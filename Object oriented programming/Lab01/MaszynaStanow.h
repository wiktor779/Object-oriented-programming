//MaszynaStanow.h
#ifndef MASZYNASTANOW_H_
#define MASZYNASTANOW_H_
#include <iostream>

class Stan{
private:
	std::string _str;
public:
	Stan();
	Stan(const std::string str);
	const std::string getString()const{ return _str; };	// pozwala na dostep do napisu
	void operator()() const;// wypisuje stan w jakim znajduje sie maszyna

};

class MaszynaStanow{
private:
	Stan _stan[4];
	int _liczbaStanow;// aktualna liczba wszystkich stanow
	int _index; //indeks stan w ktorym stanie sie znajduje sie maszyna

public:
	MaszynaStanow();
	void start();// przejscie do pierwszego stanu
	void operator+=(Stan * stan);// doklada nowy stan do naszej maszyny
	MaszynaStanow operator++();// zmienia stan maszyny na kolejny
	MaszynaStanow operator--();// zmienia stan maszyny na poprzedni
	Stan operator()() const; // zwraca stan w jakim aktualnie znajduje sie maszyna
	friend std::ostream & operator<<(std::ostream & os,const MaszynaStanow ms); // wypisuje wszyskie stany jakie posiada maszyna

};


#endif 
