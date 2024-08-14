/*
 ------------------------------------------------------------------
 "Programmer en C++, des premiers pas à la maîtrise de C++20"
             par Alain Gibaud, Ed. Ellipses 2022
 ------------------------------------------------------------------

 Pour compiler ces exemples, suivez les indications fournies par
 le fichier LISEZ-MOI.txt.
 -------------------------------------------------------------------
 */

#include "Point.h"
#include <iostream>
using namespace std ;
/*
 * Vecteur3NV2
 *
 * Exemple d'application de l'héritage privé
 * Vecteur3N est une base privée de Point
 */

int main()
{
  Point p1("p1", 0,0,0) ;
  cout << p1 << endl ;
  
  p1.deplacer(Vecteur3(10,0,20)) ;
  cout << "p1 après translation = " << p1 << endl ;
  
  Point p2("p2", 10,0,0) ;
  cout << p2 << endl ;
  cout << "Distance entre p1 et p2 = " << p1.distance(p2) << endl ;
   
  return 0 ;
}
