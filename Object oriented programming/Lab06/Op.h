//Op.h
#pragma once

//klasa sluzaca do przechowywania operatorow matematyczych
class Op1{
private:

public:
	virtual Op1 * z(Fun *) = 0;
	virtual double w(double arg) = 0;
	virtual ~Op1() {;}
};
