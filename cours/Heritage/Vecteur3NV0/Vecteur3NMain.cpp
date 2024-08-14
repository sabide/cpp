#include <iostream>
using namespace std ;
#include "Vecteur3N.h"
/*
 * Vecteur3NV0
 *
 * Si Vecteur3N hérite de Vecteur3, les Vecteur3N sont des Vecteur3
 * On peut donc leur appliquer les opérations prévues pour les Vecteur3
 */
int main()
{
  Vecteur3N x("x", 1,0,0 ) , y("y", 0,1,0) , z("z", 0,0,1) ;
  Vecteur3 zero ;
  
  cout << zero  << endl << x << endl << y << endl << z << endl ;
   
  // Addition de Vecteur3N (le résultat est un Vecteur3)
  cout << "x+y+z+zero=" << x+y+z+zero << endl ;
    
  return 0 ;
}
