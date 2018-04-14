//Fun.h
#ifndef FUN_H_
#define FUN_H_
//klasa sluzaca do reprezentacji funkcji
class Fun{
private:

public:
	virtual double wartosc(double arg) = 0;
	virtual ~Fun() { };

};



#endif
