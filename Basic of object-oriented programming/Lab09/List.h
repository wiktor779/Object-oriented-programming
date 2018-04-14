#ifndef LIST_H_
#define LIST_H_

#include <string.h>
#include "StringWrapper.h"

// pomocnicza klasa do przechowywania elementow listy
class ListElement{
public:
	StringWrapper * _data;
	ListElement * _next;

	ListElement * next() { return _next; }
	StringWrapper & data() { return *_data; }
};

class List{
private:
	ListElement * _head;

public:
	List() { _head = 0; }

	List(const List & lptr);

	~List() { this->clear(); }

	// dodaje element do listy
	List & add(const char *str);

	List & add(const StringWrapper & sw);

	bool empty() const { return _head == 0; }

	ListElement* head() const { return _head; }

	// wypisuje cala liste
	void dump() const;

	void clear();

};


#endif


