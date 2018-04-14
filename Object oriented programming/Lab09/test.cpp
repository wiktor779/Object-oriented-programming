/*
  Tematem zadania sa szablony funkcji. W wiekszosci przypadkow szabony funkcji 
  sa trywialne, a wiec tradycyjnie w naszym zadaniu sa te ciekawsze aspekty.
  Zastosowane sa tutaj szablony o argumentach, ktore nie sa typami. 
  
  Wystepuje przeladowanie nazw szablonow (np. sa dwie funkcje srednia).
  
  Najwieksza trudnosc moze sprawic przekazanie tablicy o znanym rozmiarze jako argument funkcji. 
  Prosze sobie zrobic test na boku zeby wykombinowac jaka powinna byc skladnia przkazania tablicy (najlepiej referencji do tablicy).
  np. na takim kawalku kodu:
  #include <iostream>
  int f( ? x ? ){ return x[1]; }
  int main() {
     int a[3] = {0,7,2};
     std::cout << f(a) << std::endl;     
   }
   Jak ktos nie da rady wymyslec to prosze pytac.
 */
#include <iostream>
#include "num.h"
int main() {

  int a[6] = {2,4,5,7,9,10};
  const double aS1 = num::srednia<int>(a, 6);
  const double aS2 = num::srednia(a);
  std::cout << aS1 << " " << aS2 << std::endl;
  
  float d[5] = {0, 0.7, 9.1, 3.1, 2.2};
  const double dS1 = num::srednia<float>(d, 5);
  const double dS2 = num::srednia(d);
  std::cout << dS1 << " " << dS2 << std::endl;

  const float e[5] = {0, 0.7, 9.1, -3.1};
  const double eS1 = num::srednia<float>(e, 5);
  const double eS2 = num::srednia(e);
  std::cout << eS1 << " " << eS2 << std::endl;


  
  const bool wp  = num::czyWszystkiePierwszwe<2,6>(a); // wszystkie miedzy indeksami [2, 6)
  const bool wnp = num::czyWszystkiePierwszwe<2,4>(a); // wszystkie miedzy indeksami [2, 4)
  std::cout << num::text(wp) << " " << num::text(wnp) << std::endl;
}
/* wynik
6.16667 6.16667
3.02 3.02
1.34 1.34
FALSE TRUE
 */
