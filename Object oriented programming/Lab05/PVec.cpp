//PVec.cpp
#include <iostream>
#include "PVec.h"

IntWrapper::IntWrapper(int value){
	_value = value;
}

void IntWrapper::print(std::ostream & os) const{
	os  << _value << " ";
}

// ----------------------------

FloatWrapper::FloatWrapper(float value){
	_value = value;
}

void FloatWrapper::print(std::ostream & os) const{
	os << _value << " ";
}

// ----------------------------

StringWrapper::StringWrapper(std::string value){
	_value = value;
}

void StringWrapper::print(std::ostream & os) const{
	os << _value << " ";
}

// ----------------------------
PVec::PVec(){
	_liczbaElementow = 0;
}

PVec::~PVec(){
	for( int i = 0; i < _liczbaElementow; i++){
		delete _value[i];
	}
	_liczbaElementow = 0;
}

PVec & PVec::push_back(IntWrapper* wrap){
	_value[_liczbaElementow] = wrap;
	_liczbaElementow++;
	return *this;
}

void PVec::operator<<(Wrapper* wrap){
	_value[_liczbaElementow] = wrap;
	_liczbaElementow++;
}

std::ostream & operator<<(std::ostream & os, const PVec & vec){
	for(int i = 0; i < vec._liczbaElementow; i++){
		(*(vec._value[i])).print(os);
	}
	return os;
}

const Wrapper & PVec::operator[](int n) const{
	return *(_value[n]);
}



