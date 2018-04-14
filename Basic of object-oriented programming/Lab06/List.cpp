#include "List.h"
#include <iostream>

const ListElement* ListElement::next() const{
	return _next;
}

const char* ListElement::data() const{
	return _data;
}

List & List::add(const char *str){
	ListElement *newElement = new ListElement;
	newElement->_data = new char[strlen(str) + 1];
	strcpy(newElement->_data, str);
	newElement->_next = 0;

	if(_head == 0){
		_head = newElement;
	}
	else{	
		ListElement *temp = _head;	
		while(temp->_next != 0){
			temp = temp->_next;
		}
		temp->_next = newElement;
	}
	return *this;
}

void List::dump() const{
	ListElement *temp = _head;
	while(temp != 0){
		std::cout << temp->_data << " ";
		temp = temp->_next;
	}
}

void List::clear(){
	ListElement *temp;
	while(_head != 0){
		temp = _head;
		_head = temp->_next;
		delete[] temp->_data;
		delete temp;
	}
	_head = 0;
}

