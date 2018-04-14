/**
 * Celem zadania jest napisanie plimorficznego wektora. 
 * W wektorze tym trzymac bedziemy wskazniki do obiektow pewnej hierarchii klas.
 * Trudnoscia w zadaniu jest znalezienie hierarchii klas.
 * 
 * W ramach powtorki PVec wyposarzony jest w kilka wygodnych operatorow.
 * 
 * Kompilowac z flagami -Wall -g
 */

#include <iostream>

#include <string.h>
#include "PVec.h"
#include "PVec.h"


int main() {  
  PVec a;
  PVec b;
  b.push_back(new IntWrapper(54))
   .push_back(new IntWrapper(14))
   .push_back(new IntWrapper(-76));
  
  std::cout << b << std::endl;
  
  a << new IntWrapper(45);  
  a << new FloatWrapper(23.67);
  a << new FloatWrapper(12.67);
  a << new StringWrapper("Iks");
  a << new IntWrapper(1234);
  
  std::cout << (const PVec&)a << std::endl;
			 
  std::cout << "\n";
  a[2].print(std::cout);
  std::cout << "\n";
  // UWAGA na potencjalny wyciek pamieci
}
/* wynik
 54 14 -76
 45 23.67 12.67 Iks 1234

12.67

*/
