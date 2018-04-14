//Urzadzenia.h
#ifndef URZADZENIA_H_
#define URZADZENIA_H_
#include <iostream>

class Rozdzielczosc{
private:
	int _w;
	int _h;
public:
	Rozdzielczosc(int w, int h);
	//sluzy do wypisania na ekran szerokosci i wysokosci
	friend std::ostream & operator<<(std::ostream & os,const Rozdzielczosc & rozdzielczosc);
};

class Papierozerne{
private:
public:
	virtual ~Papierozerne(){}
};

// klasa bazowa dla OfficeMultiTool
class Skaner{
private:
	Rozdzielczosc _rozdzielczosc;
public:
	Skaner(Rozdzielczosc rozdzielczosc);
	// zwraca rozdzielczosc skanera
	Rozdzielczosc rozdzielczosc() const;
	virtual ~Skaner() {}
};

// dziedziczy po klasie Papierozerne poniewaz Ksero jest Papierozerna
class Ksero : virtual public Papierozerne{
private:
public:
	virtual ~Ksero() {}
};

// dziedziczy po klasie Papierozerne poniewaz Drukarka jest Papierozerna
class Drukarka : virtual public Papierozerne{
private:
	Rozdzielczosc _rozdzielczosc;
public:
	Drukarka(Rozdzielczosc rozdzielczosc);
	// pozwala na uzyskanie informacji o rozdzielczosci 
	Rozdzielczosc rozdzielczosc() const;
	virtual ~Drukarka(){}
};

// dziedziczy po podanych klasach poniewaz zachodzi relacja "jest czyms"
class OfficeMultiTool : public Skaner, public Ksero, public Drukarka{
private:
public:
	//ustawia rozdzielczosc drukarki i skanera
	OfficeMultiTool(Rozdzielczosc rozdzielczosc1, Rozdzielczosc rozdzielczosc2);
};


#endif
