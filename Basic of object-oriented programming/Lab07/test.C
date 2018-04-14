/**
 * Celem zadania jest napisanie klasy StringWrapper
 * Klasa ta posluzyc ma do ulatwienia operacji na napisach, w szczegolnosci pozwalac na op. append i substring
 * Pomocnicze funkcjonalnosci to porownywanie napisow.
 *
 * Trudnoscia w zadaniu jest sprawne zarzadzanie pamiecia. 
 * UWAGA: Nie wolno uzywac w implementacji klasy std::string. (zadanie nie na temat 0pkt).
 * Kompilowac z flagami -Wall -g
 */

#include <iostream>

#include <string.h>
#include "StringWrapper.h"

using namespace std;

int main() {
  StringWrapper s0("Witaj Swiecie");  
  StringWrapper s1("Witaj swiecie");  

  if ( StringWrapper::eq(s0, s1) )  
    cout << "Napisy sa identyczne" << endl;

  if ( StringWrapper::eqIcase(s0, s1) )
    cout << "Napisy sa identyczne jesli zaniedbamy wielkosc liter" << endl;

  print(s1);
  s1.append(" tu i teraz,");
  print(s1);

  
  StringWrapper s2(s0.substring(6, 14)); // 6 i 14 sa pierwszym i nastepnym po ostatnim znaku, ktore kopiujemy
  s2.append(" ").append(s1).append(" jeszcze");
  s0.append(" zagadkowe znaki"); // s2 nie zmienia sie
  print(s2);
  print(s0.data());
}
/* wynik
Napisy sa identyczne jesli zaniedbamy wielkosc liter
Witaj swiecie
Witaj swiecie tu i teraz,
Swiecie Witaj swiecie tu i teraz, jeszcze
Witaj Swiecie zagadkowe znaki
*/
