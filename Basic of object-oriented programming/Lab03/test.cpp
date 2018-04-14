// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// !!! UWAGA !!! 
// Przy wykonaniu tego zadania mozna kozystac z biblioteki cstring (string.h)
// np funkcji strlen, strcpy

// Prosze napisac funkcje wykonujace operacje na tablicach
// reprezentujacych liste studentow.

// W tablicy "namesList" przechowywane sa pierwsze i drugie imie
// studenta oddzielone jedna spacja.

// W tablicy "surnamesList" przechowywane sa nazwiska studentow.

// W tablicy "yearsList" przechowywane sa lata na ktorych studiuja
// studenci.

// Prosze zwrocic uwage na dobre zarzadzanie pamiecia.

// Pliku Lab02.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). 

// Makefile dolaczony do rozwiazania powinien tworzyc plik wykonywalny
// o nazwie Lab02. Program nalezy kompilowac z flagami -Wall -g.

// Makefile powinien zawierac rowniez cel "clean", ktory usuwa pliki
// obiektowe i plik wykonywalny.

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow (w tym własnych wczesniej
// przygotowanych plikow oprócz makefile)

// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.


#include <iostream>
#include <string.h>
#include "Lab02.h"
#include "Lab02.h"

int main ()
{
  using namespace std;
  int numberOfStudents = 0;
  char** namesList = NULL;
  char** surnamesList = NULL;
  int* yearsList = NULL;

  char su[200];
  strcpy(su, "Spiegel");
  AddStudent(&numberOfStudents, &namesList, &surnamesList, &yearsList, "Spike", "Jozef", su, 3);
  strcpy(su, "Sanchez");
  AddStudent(&numberOfStudents, &namesList, &surnamesList, &yearsList, "Rick", "Albert", su, 7);
  strcpy(su, "Archer");
  AddStudent(&numberOfStudents, &namesList, &surnamesList, &yearsList, "Sterling", "Malory", su, 1);
  std::cout<<"Only names:\n";
  PrintListContent (numberOfStudents, namesList);

  std::cout<<"\nOnly surnames:\n";
  PrintListContent (numberOfStudents, surnamesList);

  std::cout<<"\nOnly years:\n";
  PrintListContent (numberOfStudents, yearsList);

  std::cout<<"\nEverything:\n";
  PrintListContent (numberOfStudents, namesList, surnamesList, yearsList);

  ClearStudents (&numberOfStudents, &namesList, &surnamesList, &yearsList);
  return 0;
}
/* wynik dzialania programu:
Only names:
Spike Jozef
Rick Albert
Sterling Malory

Only surnames:
Spiegel
Sanchez
Archer

Only years:
3
7
1

Everything:
Spiegel, Spike Jozef - year 3
Sanchez, Rick Albert - year 7
Archer, Sterling Malory - year 1
*/
