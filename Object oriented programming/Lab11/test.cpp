/*
  Celem zadania jest napisanie szablona generatora ciagow.
  Dowolny ciag niech bedzie zadany przez poczatkowa wartosc i funkcje inkrementujaca.
  
  Szablon posiada pare przydatnych operatorow i trzeba pamietac skladnie deklaracji wskaznika do funkcji.
 */

#include <iostream>
#include "generator"

int plus1(int prev) {
  return prev+1;
}

int minus1(int prev) {
  return prev-1;
}


float mult2( float prev) {
  return prev*3.;
}

char cyclicNext(char prev) {
  if ( prev == 'z' )
    return 'a';
  return prev+1;
}


int main() {
  generator<int> g(0, plus1);
  for ( size_t i = 0; i < 10; ++i, ++g ) {
    std::cout << g.current() << " ";
  } 
  g.reset(g.current(), minus1);
  while ( g > 0 ) {
    std::cout << g.current() << " ";
    ++g;
  } 
  std::cout << std::endl;
  
  generator<float> gm(1.5, mult2);
  for ( ; gm < 100 ; ++gm )    
    std::cout << gm.current() << " ";
  std::cout << std::endl;
  
  generator<char> alpha('a', cyclicNext);
  for ( size_t i = 0; i < 100; ++i ) {
    std::cout  << alpha.next() << "";
  }
  std::cout << std::endl;
  alpha.reset();
  std::cout << alpha.current() << std::endl;
}
/* wynik
0 1 2 3 4 5 6 7 8 9 10 9 8 7 6 5 4 3 2 1 
1.5 4.5 13.5 40.5 
bcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvw
a
 */
