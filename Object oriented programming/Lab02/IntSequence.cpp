// IntSequence.cpp
#include "IntSequence.h"

IntSequence::IntSequence(){
	 _tab = 0;
	_biezacy = 0;
	_wszystkichElementow = 0;
}

IntSequence::~IntSequence(){
	delete [] _tab;
}

IntSequence & IntSequence::operator<<(int wartosc){
	_wszystkichElementow++;
	int * temp = new int[_wszystkichElementow];

	if(_wszystkichElementow != 0){
		for(int i = 0; i < _wszystkichElementow - 1; i++){
			temp[i] = _tab[i];
		}
		delete [] _tab;
	}

	temp[_wszystkichElementow - 1] = wartosc;
	_tab = temp;
	return *this;
}

int IntSequence::operator()() const{
	return _tab[_biezacy];
}

int IntSequence::operator++(int){
	if(_biezacy == _wszystkichElementow - 1){
		_biezacy = 0;
	}
	else{
		_biezacy++;
	}
	return _tab[_biezacy];
}

int IntSequence::operator--(int){
	if(_biezacy == 0){
		_biezacy = _wszystkichElementow - 1;
	}
	else{
		_biezacy--;
	}
	return _tab[_biezacy];
}

bool IntSequence::finished(){
	static int flaga = 0;
	if (flaga == 1){
		flaga = 0;
		return true;
	}
	if (_biezacy == _wszystkichElementow-1){
		flaga = 1;
	}
	return false;

}

void IntSequence::reset(){
	_biezacy = 0;
}



