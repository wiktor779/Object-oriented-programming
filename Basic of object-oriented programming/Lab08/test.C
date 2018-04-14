// Tablica asocjacyjna
//
// To taka tablica, ktorej indeksy nie sa ograniczone do kolejnych liczb calkowitych
//  0...N a nawet nie musza byc liczbami. 
// W zadaniu nalezy napisac tablice asocjacyjna gdzie indeksem jest znak (char) a watosciami sa liczby zmiennoprzecinkowe
//

// Tablica powinna byc zaimplementowana z uzyciem ogolnych typow map_key_value (indeks)
// i map_value_type(wartosci). Typy te bêd± dostarczane przed w³±czeniem deklaracji klasy.
// Ca³a implementacja musi siê znale¼æ w pliku nag³ówkowym.
// 
// Implementacja wnetrza moze byc prosta tablica rozszerzana podczas kazdej 
// operacji insert() (badz podczas odwolania sie za pomoca at() lub insert()).
// Moze byc nawet prostsza np. tablica o duzym rozmiarze bedaca skladnikiem klasy Map. 
// Prosze przemyslec struktore klasy troche.
//
// UWAGA: w implementacji nie powinien sie znalezc const_cast
//
// Prosze nie zmieniac nazwy tego pliku.
// Prosze koniecznie kompilowac z opcja -Wall -g. 
//

#include <iostream>



#define map_key_type char
#define map_value_type float
#define map_type_name char_float_map  // map_type_name ma byc nazwa klasy
#include "Map.h"

#define map_key_type int
#define map_value_type int
#define map_type_name int_int_map
#include "Map.h"





int main() {
  using namespace std;
  char_float_map m;
  m.insert('h', 40.98 ); 
  m.insert('2', 1.56 ); 
  m.print(".. przed nadpisaniem");
  m.at('h') = 7887.1;
  m.at('u') = 7.11;
  m.print(".. po nadpisaniu");

  const char_float_map& cm = m;  
  cout << "Co tam pod r " << cm.at('r') << endl; // uwaga: metoda at () moze zmieniac mape
  cout << "Co tam pod h " << cm.at('h') << endl; 
  cout << "Czy jest pod y " << cm.contains('y') << endl;
  cout << "Czy jest pod u " << cm.contains('u') << endl;

  int_int_map ii;
  ii.insert(0, 78);
  ii.insert(4, 1);
  ii.insert(5, 99);
  ii.insert(8797987, 99);
  ii.print(".. int -> int");

}

/* wyniki 
.. przed nadpisaniem k: h v: 40.98
.. przed nadpisaniem k: 2 v: 1.56
.. po nadpisaniu k: h v: 7887.1
.. po nadpisaniu k: 2 v: 1.56
.. po nadpisaniu k: u v: 7.11
Co tam pod r 0
Co tam pod h 7887.1
Czy jest pod y 0
Czy jest pod u 1
.. int -> int k: 0 v: 78
.. int -> int k: 4 v: 1
.. int -> int k: 5 v: 99
.. int -> int k: 8797987 v: 99
 */
