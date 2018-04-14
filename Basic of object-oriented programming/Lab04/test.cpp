/* Celem zadania jest napisanie sktruktur MapPoint opisujacej punkt na mapie 
   i opisujaca odleglosc MapDist. 
   
   UWAGA: prosze sprawdzic czy konieczne jest kopiowanie napisow, 
   jesli tak to trzeba to odpowienio zrobic, jesli nie zadanie sie uprosci.
   Przypominam o alokacji pamieci.
   
   UWAGA: Wszystkie deklaracje mozna umiescic w jednym naglowku MapPoint.h
   
   UWAGA: Prosze zwrocic uwage na przeladowania nazw funkcji.

   Kompilwac do pliku wykonywalnego "test" z opcjami -Wall -g
 */

#include <iostream>
#include "MapPoint.h"
#include "MapPoint.h"

int main() {
  const double latKRK = 50.061389;
  const double lonKRK = 19.938333;
  MapPoint krk     = construct("Krakow", latKRK,  lonKRK);
  print(krk);
  MapPoint nyc     = construct("NYC", 40.7127, -74.0059 );
  print(nyc);
  MapPoint porto   = construct("Porto", 41.162142, -8.621953 );
  MapPoint near_porto = construct(porto, 0.1, -0.2); // punkt blisko porto, na zachod i na poludnie
  print(near_porto);
  MapPoint irkutsk = construct("Irkutsk",  52.283333, 104.283333);
  const MapPoint& siberiaCapital = irkutsk;
  print(siberiaCapital);
  
  const MapDist d = distance(nyc, porto);
  std::cout << d.latitude << " " << d.longitude  << " " << angularDistance(d) << std::endl; // odleglosc katawa liczymy ze wzroru Pitagorasa f. hypot 

  const MapPoint& cl = closestFrom(krk, porto, siberiaCapital); // wybieramy jedna z dwoch punktow zadanych jako arg 2 i 3, taki ktorego odleglosc jest najmniejsza do pierwszego argumentu
  std::cout << name(cl) << std::endl;

  MapPoint mp = inTheMiddle(krk,  siberiaCapital, "Somwhere in Russia"); // punkt w polowie drogi miedzy dwoma przekazanymi w arg 1 i 2
  print(mp);

  clear(mp, near_porto);    
  clear(krk, nyc, porto);
  clear(irkutsk);  
}
/* wynik
Krakow 50.0614N 19.9383E
NYC 40.7127N 74.0059W
Nearby Porto 41.2621N 8.82195W
Irkutsk 52.2833N 104.283E
-0.449442 -65.3839 65.3855
Porto
Somwhere in Russia 51.1724N 62.1108E   
 */
