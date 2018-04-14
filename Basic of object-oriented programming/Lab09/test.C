/* W zadaniu prosze napisac liste polaczona jednokierunkowo, sluzaca do przechowywania napisow (lancuchow znakow).
   UWAGA. Napisy musza byc kopiowane do alokowanej pamieci. Nalezy tez zadbac o zwolnieniu pamieci przy czyszczeniu listy (sprawdzic z valgrind-em).
   UWAGA. Niektore z funkcji nie zmieniaja listy (np. dump) i z tego powodu powinny odbierac staly wskaznik do struktury List.
   UWAGA. Napisy nalezy przechowac uzywajac klasy StringWrapper (2 zaj. wstecz). Tylko drobna modyfikacja jest potrzebna.
   UWAGA. Lista jest kopiowalna.

   Kompilwac koniecznie z flagami -Wall -g
   Plik wykonywalny prosze nazwac "test".   
 */


#include <iostream>
#include "StringWrapper.h"
#include "List.h"
#include "List.h"


int main() {
  List testList;
  const List* lptr = &testList;
  StringWrapper ala("Ala");
  std::cout << "Czy to Ala? : " <<  ala.str() << std::endl;
  //testList.add("ma");

  //testList.add(ala);

  testList.add(ala).add("ma").add("kota"); 

  std::cout << "empty() " << lptr->empty() << std::endl;

  std::cout << lptr->head()->data().str() << std::endl;
 
  std::cout << lptr->head()->next()->data().str() << std::endl;
  
  lptr->dump();
  std::cout << "\n";
  testList.head()->data().append("n");
  lptr->dump();
  std::cout << "\nkopiowalnosc\n";

 List testList2(*lptr);
  //testList2.dump();
  
  testList.clear();
  testList2.dump();
  std::cout << "\n";
  testList.add("Ewa").add("ma").add( StringWrapper("psa").append(" i ").append("kota") );
  testList.dump();
  std::cout << "\n";
  testList2.dump();
  std::cout << "\n";
/*
  */
  
}
/* wynik
Czy to Ala? : Ala
empty() 0
Ala
ma
Ala - ma - kota
Alan - ma - kota
kopiowalnosc
Alan - ma - kota
Ewa - ma - psa i kota
Alan - ma - kota
~List
~List 
 */
