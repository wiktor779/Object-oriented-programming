//Rozniczkowanie.h
#pragma once
#include "Fun.h"
#include "Op.h"
// Rozniczkowanie jest rodzajem operacji matematycznej
class ProsteRozniczkowanie : public Op1{
private:
	Fun * _wsk;
	double _krokPrecyzji;

public:
	ProsteRozniczkowanie(double krokPrecyzji);
	virtual Op1 * z(Fun *);
	virtual double w(double arg);
	virtual ~ProsteRozniczkowanie() {;}
};
