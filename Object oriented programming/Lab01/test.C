/* celem zadania jest zaimplementowanie maszyny stanow.  

Jest to obiekt, ktory znajduje sie w jakims stanie, mozemy go przesterowac tak
by byl w innym stanie. 
Biezacy stan zwracany jest przez operator ().
Kazdy stan posiada rowniez operator (), ktory wykonuje czynnosc dla tego stanu.

Ta maszyna jest bardzo prosta tj. mozna przechodzic po trzech stanach w gore lub w dol.

Uwaga na zarządznie pamiecia.   
 */


#include <iostream>
#include "MaszynaStanow.h"

int main() {
  MaszynaStanow m;
  m += new Stan("Wybieranie systemu");
  m += new Stan("Logowanie");
  m += new Stan("Pulpit");


  m.start();
  m()();
  ++m;
  std::cout << "po piwerszej inkrementacji --> \n" << m <<  std::endl;
  
  m()();
  ++m;
  std::cout << "po drugiej inkrementacji --> \n" << m << std::endl;
  m()();
  --m;
  std::cout << m << std::endl;
  m()();
  ++m;
  m()();
  ++m;
  m()();
  m += new Stan("Koniec pracy");
  std::cout << (const MaszynaStanow&)m << std::endl;
}
/* wynik
Wykonanie w stanie: Wybieranie systemu
po piwerszej inkrementacji --> 
MaszynaStanow:
0 Wybieranie systemu
1 Logowanie <
2 Pulpit

Wykonanie w stanie: Logowanie
po drugiej inkrementacji --> 
MaszynaStanow:
0 Wybieranie systemu
1 Logowanie
2 Pulpit <

Wykonanie w stanie: Pulpit
MaszynaStanow:
0 Wybieranie systemu
1 Logowanie <
2 Pulpit

Wykonanie w stanie: Logowanie
Wykonanie w stanie: Pulpit
Wykonanie w stanie: Pulpit
MaszynaStanow:
0 Wybieranie systemu
1 Logowanie
2 Pulpit <
3 Koniec pracy


 */
