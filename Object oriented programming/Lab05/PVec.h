//PVec.h
#ifndef PVEC_H_
#define PVEC_H_
#include <string>

// klasa bazowa,
class Wrapper{
private:

public:
	virtual void print(std::ostream & os) const = 0; // wypisuje dana wartosc
	virtual ~Wrapper(){ } // wywoluje odpowiedni destruktr
};

// dziedziczy po Wrapper , bo IntWrapper jest Wrapperem
class IntWrapper : public Wrapper{
private:
	int _value;

public:
	IntWrapper(int value);
	void print(std::ostream & os) const;
};

// dziedziczy po Wrapper, bo FloatWrapper jest Wrapperem
class FloatWrapper : public Wrapper{
private:
	float _value;

public:
	FloatWrapper(float value);
	void print(std::ostream & os) const;
};

// dziedziczy po Wrapper, bo StringWrapper jest Wrapperem
class StringWrapper : public Wrapper{
private:
	std::string _value;

public:
	StringWrapper(std::string value);
	void print(std::ostream & os) const;
};

// wektor sluzacy do przechowywania obiektow typu wrapper
class PVec{
private:
	Wrapper * _value[10];	
	int _liczbaElementow;

public:
	PVec();
	~PVec();
	PVec & push_back(IntWrapper* );// dodaje do wektora wartosc(tylko typu IntWrapper)
	void operator<<(Wrapper*);// dodaje do wektor wartosc
	friend std::ostream & operator<<(std::ostream & os, const PVec & vec); //wypisuje wetor
	const Wrapper & operator[](int n) const;// zwraca Wrapper pod danym indeksem

};

#endif
