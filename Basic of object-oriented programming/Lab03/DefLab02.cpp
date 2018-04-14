#include <string.h>
#include <iostream>
#include "Lab02.h"


void AddStudent (int * number, char *** firstName, char *** surname, int ** years,
	const char * firstName2 , const char * secondName2, char * su, int years2){
	
	if(*number == 0){
		*firstName = new char * [10];
		*surname= new char * [10];
		*years = new int[10];
	}

	// alokacja pamiec
	(*firstName)[*number] = new char [strlen(firstName2) + strlen(secondName2) + 2];
	(*surname)[*number] = new char [strlen(su) + 1];

	// kopiowanie
	strcpy( (*firstName)[*number], firstName2 );
	strcpy( (*firstName)[*number] + strlen(firstName2), " ");
	strcpy( (*firstName)[*number] + strlen(firstName2) + 1 , secondName2);

	strcpy( (*surname)[*number], su);

	(*years)[*number] = years2;

	*number = *number + 1;
}

void PrintListContent(int number, char ** names){
	for(int i = 0; i < number; i++){
		std::cout << names[i] << std::endl;
	}
}


void PrintListContent(int number,int * years) {
	for(int i = 0; i < number; i++){
		std::cout << years[i] << std::endl;
	}
}
	
void PrintListContent( int number, char ** names, char ** surnames, int * years){
	for(int i = 0; i< number; i++){
		std::cout << names[i] << ", " << surnames[i] << " - year " << years[i] << std::endl;
	}
}

void ClearStudents(int * number, char *** names, char *** surnames, int ** years){
	for(int i = 0; i < *number; i++){
		delete [] (*names)[i];
		delete [](*surnames)[i];
	}
	
	delete [] *names;
	delete [] *surnames;
	delete [] *years;
}

