#ifndef LIST_H_
#define LIST_H_

#include "string.h"

// pomocnicza klasa do przechowywania elementow listy
class ListElement{
public:
	char * _data;
	ListElement * _next;

	const ListElement* next() const;
	const char* data() const;
};

class List{
private:
	ListElement * _head;

public:
	List() { _head = 0; }

	~List() { this->clear(); }

	// dodaje element do listy
	List & add(const char *str);

	bool empty() const { return _head == 0; }

	const ListElement* head() const { return _head; }

	// wypisuje cala liste
	void dump() const;

	void clear();

};


#endif


