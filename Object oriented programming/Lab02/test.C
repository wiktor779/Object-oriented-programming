// Sekwencja liczb
//
// Klasa modelujaca uogolniona sekwencje liczb. 
// Do obiektow IntSequence mozna wstzykiwac liczby za pomoca operatora <<
// a pozniej przegladac te liczby uzywajac operatorow rzutowania i ()
// a takze przesuwac sie po sekwencji w przod ++ i w tyl --.
//
// Uwaga, nie mozna zmieniac elementow sekwencji w inny sposob niz 
// przez dodanie nowych elementow. (nie trzeba dostarczac wszystkich mozliwych operatorow dostepu)
//
// Dynamiczna alokacje pamieci potrzebnej do przechowania liczb 
// prosze zrobic w drugiej kolejnosci a najpierw zaimplementowac logike i operatory.
//
// 
// Przypominam aby nie zmieniac nazwy tego pliku i kompilowac z opcja -Wall.
//


#include <iostream>
using namespace std;
#include "IntSequence.h"

int main(int argc, char** argv) {

  IntSequence seq;
  seq << 4 << 7 << 9 << 4 << 6 << 18 << 67 << 88;
  for ( int i = 0;  i < 12 ; ++i) {
    int biezacy = seq(); // biezacy element z sekwencji
    int biezacy_inaczej = seq; // mozna inaczej dostac sie do biezacego elementu
    int nastepny = seq++; // krok do przodu
    int nastepniejszy = seq++; // jeszcze jeden krok do przodu
    int w_tyl = seq--; // krok do tylu
    cout << "biezacy " << biezacy << "=" << biezacy_inaczej << " ++ " << nastepny << " ++ " << nastepniejszy << " -- " << w_tyl << endl;
    
  }
  cout << " koniec testu dzialania zrozumienia jak dzialaja operatory, pokaz uzycia " << endl;
  IntSequence s; s << 2 << 1 << 6 << 5 << 9 << 6 << 4;
  for ( ; ! s.finished() ; s++ ) {
    cout << s << " ";
  }
  cout << endl;
  s << 12 << 12 << 15 << 3;
  s.reset();
  cout << " po dolozeniu elementow " << endl;
  for ( ; ! s.finished() ; s++ ) {
    cout << s << " ";
  }
}
/* wynik
biezacy 4=4 ++ 7 ++ 9 -- 7
biezacy 7=7 ++ 9 ++ 4 -- 9
biezacy 9=9 ++ 4 ++ 6 -- 4
biezacy 4=4 ++ 6 ++ 18 -- 6
biezacy 6=6 ++ 18 ++ 67 -- 18
biezacy 18=18 ++ 67 ++ 88 -- 67
biezacy 67=67 ++ 88 ++ 4 -- 88
biezacy 88=88 ++ 4 ++ 7 -- 4
biezacy 4=4 ++ 7 ++ 9 -- 7
biezacy 7=7 ++ 9 ++ 4 -- 9
biezacy 9=9 ++ 4 ++ 6 -- 4
biezacy 4=4 ++ 6 ++ 18 -- 6
 koniec testu dzialania zrozumienia jak dzialaja operatory, pokaz uzycia 
2 1 6 5 9 6 4 
 po dolozeniu elementow 
2 1 6 5 9 6 4 12 12 15 3 
 */
