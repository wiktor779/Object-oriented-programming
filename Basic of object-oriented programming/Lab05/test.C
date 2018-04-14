/*
  Celem zadania jest napisanie dwoch klas kooperujacych ze soba.
  a reprezentujacych wektor i macierz.
  
  Prosze pomyslec o tym jak zoptymalizowac implementacje uzywajac tego co sie juz zrobilo.
  
  UWAGA: Przypomnienie z wykladu. Proste agregaty nie wymagaja konstruktorow kopiujacych.
  Kompilowac do wyk. test z flagami -Wall -g
  Makefile musi miec cel: clean
 */

#include <iostream>

#include "Matrix.h"
#include "Matrix.h"
#include "Vector.h"

int main() {
  using namespace std;
  Vector v1(0,1,9);
  Vector v2(0,2,0);
  Vector v3(0,1,1);
  // indeksujemy od 0
  std::cout << v2.at(0) <<" "<< v2.at(1) << " " << v2.at(2) << endl;  
  Matrix m1(v1,v2,v3);

  // indeksujemy kolumny i wiersze od 0
  m1.set(2, 1, 7.3).set(2, 2, 2.5);
  Vector vm;

  cout << "macierz po zmianach " << endl;
  // wypisanie macierzy
  vm = m1.extractRow(0);
  std::cout << vm.at(0) <<" "<< vm.at(1) << " " << vm.at(2) << endl;
  vm = m1.extractRow(1);
  std::cout << vm.at(0) <<" "<< vm.at(1) << " " << vm.at(2) << endl;
  vm = m1.extractRow(2);
  std::cout << vm.at(0) <<" "<< vm.at(1) << " " << vm.at(2) << endl;
  cout << "kol 1" << endl;
  // wyjecie wektora z kolumny
  vm = m1.extractColumn(1);
  std::cout << vm.at(0) <<" "<< vm.at(1) << " " << vm.at(2) << endl;
}
/* wynik
0 2 0
macierz po zmianach 
0 1 9
0 2 0
0 7.3 2.5
kol 1
1 2 7.3
 */
