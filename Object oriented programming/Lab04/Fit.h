// Fit.h
#ifndef FIT_H_
#define FIT_H_
#include <iostream>
#include <cstring>

class FitResult{
private:
	std::string _nazwa[10];
	float _wartosc[10];
	unsigned int _liczbaParametrow;

public:
	FitResult() { _liczbaParametrow = 0; }
	std::string expression() const {return "tutaj wystarczy te długie wzory przepisać";}
	std::string parameterName(int i) const { return _nazwa[i]; }
	float parameterValue(int i) const { return _wartosc[i]; }
	unsigned int nParams() const { return _liczbaParametrow; }

};

class Fit{
private:
	FitResult _result;
	std::string _nazwa;
	
public:
	void print() const { std::cout << "This is " << _nazwa << std::endl;}
	void appendPoint(int i, float wartosc) {;}
	void appendPoint(int i, float wartosc) const
		{ std::cout << "Cannot add point (" << i << ", " << wartosc <<"), to const object." << std::endl; }
	FitResult & result() {return _result;}
	void setName(const std::string nazwa) { _nazwa = nazwa; }

};

#endif
