#include <iostream>
#include <string.h>
#include "StringWrapper.h"

StringWrapper::StringWrapper(const char * str){	
	_str = new char[strlen(str) + 1];
	strcpy(_str, str);
}

StringWrapper::StringWrapper(char * str){	
	_str = str;
}

StringWrapper::StringWrapper(const StringWrapper & sw){
	_str = new char[strlen(sw.getString()) + 1];
	strcpy(_str, sw.getString());
}

StringWrapper::~StringWrapper(){
	delete [] _str;
}

bool StringWrapper::eq(const StringWrapper & sw1, const StringWrapper & sw2){
	return !strcmp(sw1._str, sw2._str);
}

bool StringWrapper::eqIcase(const StringWrapper & sw1, const StringWrapper & sw2){
	return !strcasecmp(sw1._str, sw2._str);
}

StringWrapper & StringWrapper::append(const char * str){
	char * temp = new char[strlen(_str) + strlen(str) + 1];
	strcpy(temp, _str);
	strcat(temp, str);
	delete [] _str;
	_str = temp;

	return *this;
}

StringWrapper & StringWrapper::append(const StringWrapper & sw){
	char * temp = new char[strlen(_str) + strlen(sw.data()) + 1];
	strcpy(temp, _str);
	strcat(temp, sw.data());
	delete [] _str;
	_str = temp;

	return *this;
}

char * StringWrapper::substring(int start, int stop) const{
	char * temp = new char[stop - start + 1];
	strcpy(temp, _str+start);

	return temp;
}

const char * StringWrapper::data() const{
	return _str;
}

void print(const StringWrapper & sw){
	std::cout << sw._str << std::endl;
}

void print(const char * str){
	std::cout << str << std::endl;
}

