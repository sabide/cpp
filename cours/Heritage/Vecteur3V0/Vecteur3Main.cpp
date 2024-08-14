
#include <iostream>
using namespace std ;

#include "Vecteur3.h"
/*
 * Vecteur3V0
 *
 * Classe de base simple permettant de représenter un vecteur
 * dans un espace tridimensionnel.
 * Elle servira de classe de base pour les exemples suivants.
 */
int main()
{
  Vecteur3 a(1,2,3) , b(0,4,5) ;
  
  cout << a << endl
  << b << endl
  << (a+b) << endl
  << (a-b) << endl
  << a.norme() << endl ;
  
  return 0 ;
}
