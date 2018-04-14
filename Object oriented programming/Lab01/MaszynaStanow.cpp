//MaszynaStanow.cpp
#include "MaszynaStanow.h"

// Stan
Stan::Stan(){
	_str = "pusty";
}

Stan::Stan(std::string str){
	_str = str;
}

MaszynaStanow::MaszynaStanow(){
	_liczbaStanow = 0;
	_index = 0;
}

void Stan::operator()() const{
	std::cout << "Wykonanie w stanie: "<< _str << std::endl;
}
//-------------------------------------------

//MaszynaStanow
void MaszynaStanow::operator+=(Stan * stan){
	_stan[_liczbaStanow] = *stan;
	delete stan;
	_liczbaStanow++;
}

void MaszynaStanow::start(){
	_index = 0;
}

Stan MaszynaStanow::operator()() const{
	return _stan[_index];
}

MaszynaStanow MaszynaStanow::operator++(){
	if(_index < _liczbaStanow - 1 ){
		_index++;
	}
	return *this;
}

MaszynaStanow MaszynaStanow::operator--(){
	_index--;
	return *this;
}


std::ostream & operator<<(std::ostream & os, MaszynaStanow ms){
	os << "MaszynStanow:\n";
	for(int i = 0; i < ms._liczbaStanow ; i++){
		os << i << " " << ms._stan[i].getString();
		if (ms._index == i){
			os << " < ";
		}
		os << std::endl;
	}
	return os;
}
	
	
	
