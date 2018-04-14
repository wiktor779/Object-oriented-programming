/*
 * Tematem zadanie jest napisanie rodziny funkcji jednoargumentowych.
 * Poza zadaniem podczas konstrukcji parametrow takiej funkcji mozemy interfejs pozwala na pobranie wartosci funkcji w punkcie.
 *
 * Rodziny funkcji jednoargumentowych uzywa operator (tez jednoargumentowy) pozwalajacy na numeryczne oblicznei wartosci pochodnej w punkcie.
 Wzor: f' = (f(x + h) - f(x - h)) / 2h gdzie h jest "krokiem" zadanym podczas konstrukcji.
 
 * UWAGA: W komentarzach zadane sa zadania do rozwiniecia w domu.
 * UWAGA: Skladnie wywolania operatora zrobiono specjalnie tak aby "brzmiala"  jak zapis matematyczny. Ostatnia linia powinna byc wystarczajac podpowiedzia jak to moze zadzialac.
 
 * Kompilowac do ftest z opcjami -Wall -g
 */




#include <iostream>
#include "Fun.h"
#include "FElementarne.h"
#include "Trygonometryczne.h"
#include "Op.h"
#include "Rozniczkowanie.h"


int main() {
  Fun * s = new Sinus;
  
  Fun * l = Liniowa::utworz()->a(1.)->b(0.);
  Fun * q = Kwadratowa::utworz()->a(1)->b(0.)->c(-4.);

  // w domu prosze sobie zrobic
  // Fun *c = Zlozenie::utworz(l, q)
  // Fun *d = Iloraz::utworz(q, sin)  i tym podobne

  std::cout << l->wartosc(0.1)  << " "  << s->wartosc(0) << std::endl;
  std::cout << q->wartosc(0.1)  << " "  << q->wartosc(0) << std::endl;
  std::cout << s->wartosc(0.1)  << " "  << s->wartosc(0) << std::endl;
  

  
  Op1* pochodna = new ProsteRozniczkowanie(0.01); // krok/precyzja

  std::cout <<  "wartosc pochodnej w p 1 "    << pochodna->z(l)->w(1) << std::endl;
  std::cout <<  "wartosc pochodnej w p 2.1 "  << pochodna->z(q)->w(2.1) << std::endl;
  std::cout <<  "wartosc pochodnej w p 0.12 " << pochodna->z(s)->w(0.12) << std::endl;
  std::cout <<  "wartosc pochodnej w p -1.3 " << pochodna->w(-1.3) << std::endl;
  // w domu prosze sprawdzic czy da sie zrobic jeszcze czytelniejsza skladnie
  // l(0.5) - wartosc
  // pochodna(l)(0.34) - wartosc pochodnej


  
  delete l;
  delete q;
  delete s;

  delete pochodna;
}
/* wynik
0.1 0
-3.99 -4
0.0998334 0
wartosc pochodnej w p 1 1
wartosc pochodnej w p 2.1 4.2
wartosc pochodnej w p 0.12 0.992792
wartosc pochodnej w p -1.3 0.267494

 */
