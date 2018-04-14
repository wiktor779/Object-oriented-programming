#ifndef LIST_H_
#define LIST_H_

#include "string.h"

struct ListElement{
	char * data;
	ListElement *next;
};

struct List{
	ListElement *head;
};

void prepare(List *ptr);

void add(List *ptr, char *str);

bool empty(const List *ptr);

void dump(const List *ptr);

void clear(List *ptr);

#endif


