/* W zadaniu prosze napisac liste polaczona jednokierunkowo, sluzaca do przechowywania napisow (lancuchow znakow).
   UWAGA. Napisy musza byc kopiowane do alokowanej pamieci. Nalezy tez zadbac o zwolnieniu pamieci przy czyszczeniu listy (sprawdzic z valgrind-em).
   UWAGA. Niektore z funkcji nie zmieniaja listy (np. dump) i z tego powodu powinny odbierac staly wskaznik do struktury List.

   Kompilwac koniecznie z flagami -Wall -g
   Plik wykonywalny prosze nazwac "test".   
 */


#include <iostream>
#include "List.h"
#include "List.h"

int main() {
  List testList;
  const List* lptr = &testList;
  char buffer[100];
  
  strcpy(buffer, "Ala");
  testList.add(buffer).add("ma").add("kota");
  
  std::cout << "empty() " << lptr->empty() << std::endl;
  std::cout << lptr->head()->data() << std::endl;
  std::cout << lptr->head()->next()->data() << std::endl;
  lptr->dump();
  std::cout << "\n";
  
  List testList2;
  strcpy(buffer, "Maraton to");
  testList2.add(buffer);

  strcpy(buffer, "wyczyn");
  testList2.add(buffer);

  testList.clear();
  std::cout << "empty() " << lptr->empty() << std::endl;
  lptr->dump();
  std::cout << "\n";
    
  testList2.dump();
  std::cout << "\n";
  
}
/* wynik
empty() 0
Ala
ma
Ala ma kota 
empty() 1

Maraton to wyczyn 
 */
