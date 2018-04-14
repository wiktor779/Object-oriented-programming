/* Celem zadania jest napisanie zestawu klas pozwalajacych na
   wykonanie dopasowania prostych do punktow. W zadaniu mamy dwa typy
   dopasowania; 
   SlopeFit y = a x 
   i 
   LineFit y = ax + b

   W SlopeFit do obliczenia parametru  uzywamy wzoru: 
   a = sum  xi yi / suma xi xi.
   W LineFit: 
   a = (suma xi yi -  suma xi * suma yi / N)/(suma xi xi - suma xi * suma xi/N)
   b = (suma yi -a suma xi)/N

   UWAGA: Prosze zauwazyc ze nigdzie nie potrzebujemy przechowywac poszczegolnych punktow. 
   Wystarczy tylko "kumulowac" pomocnicze sumy.
   
   UWAGA: W dokumentacji nalezy uzasadnic dlaczego zastosowano taka 
   a nie inna hierarchie klas. Inaczej zadanie bedzie uznane za zadanie nie na temat. 0 pkt
   Prosze nie zostawiac tej dokumentacji na koniec. Mozna napisac:
   "dziedzicze po XYZ bo w linii    1234 jest to a to"
   Kompilowac do pliku fitting z opcjami -Wall -g do pliku fitting
*/


#include <iostream>
#include "LineFit.h"
#include "SlopeFit.h"

void print(const FitResult& result) {
  using namespace std;
  cout << result.expression() << endl;
  for ( unsigned int i = 0;  i < result.nParams(); ++i ) {
    cout << result.parameterName(i) << " ";
    cout << result.parameterValue(i) << endl;
  }
  cout << endl;
}

void performFit (Fit& fit)
{
  fit.print();
  fit.appendPoint( 0, 0.1);
  fit.appendPoint( 1, 1);
  fit.appendPoint( 2, 2.1);
  print(fit.result());
}

void addPointConst (const Fit& fit)
{
  fit.print();
  fit.appendPoint( 0, 0.1);
}

int main() {
  SlopeFit sf ("slope fit");
  performFit(sf);

  LineFit lf ("line fit");
  performFit(lf);

  addPointConst (sf);
  addPointConst (lf);

  return 0;
}
/*
This is slope fit
y = a * x
a 1.04

This is line fit
y = a * x + b
a 1
b 0.0666667

This is slope fit
Cannot add point (0, 0.1), to const object.
This is line fit
Cannot add point (0, 0.1), to const object.
*/
