#include "List.h"
#include <iostream>

List::List(const List & lptr){
	_head = 0;
	ListElement * temp = lptr._head;
	while(temp != 0){
		std::cout << temp->data().str() << std::endl;
		this->add(temp->data().str());	
		temp = temp->_next;
	}
}

List & List::add(const char *str){
	ListElement *newElement = new ListElement;
	newElement->_data = new StringWrapper(str);
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

List & List::add(const StringWrapper & sw){
	ListElement *newElement = new ListElement;
	newElement->_data = new StringWrapper(sw);
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
		std::cout << temp->data().getString() << " ";
		temp = temp->_next;
	}
}

void List::clear(){
	ListElement *temp;
	while(_head != 0){
		temp = _head;
		_head = temp->_next;
		delete temp->_data;
		delete temp;
	}
	_head = 0;
}

