#include "List.h"
#include <iostream>

void prepare(List * ptr){
	ptr->head = 0;
}

void add(List *ptr, char *str){	
	ListElement *newElement = new ListElement;
	newElement->data = new char[strlen(str) + 1];
	strcpy(newElement->data, str);
	newElement->next = 0;

	if(ptr->head == 0){
		ptr->head = newElement;
	}
	else{	
		ListElement *temp = ptr->head;	
		while(temp->next != 0){
			temp = temp->next;
		}
		temp->next = newElement;
	}
}

bool empty(const List *ptr){
	return ptr->head == 0;
}

void dump(const List * ptr){
	ListElement *temp = ptr->head;
	while(temp != 0){
		std::cout << temp->data << " ";
		temp = temp->next;
	}
}

void clear(List *ptr){
	ListElement *temp;
	while(ptr->head != 0){
		temp = ptr->head;
		ptr->head = temp->next;
		delete[] temp->data;
		delete temp;
	}
	ptr = 0;
}

