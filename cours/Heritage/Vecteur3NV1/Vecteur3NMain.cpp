/*
 ------------------------------------------------------------------
 "Programmer en C++, des premiers pas à la maîtrise de C++20"
             par Alain Gibaud, Ed. Ellipses 2022
 ------------------------------------------------------------------

 Pour compiler ces exemples, suivez les indications fournies par
 le fichier LISEZ-MOI.txt.
 -------------------------------------------------------------------
 */

#include <iostream>
using namespace std ;
/*
 * Vecteur3NV1
 *
 * Comportement de l'opérateur d'affectation lorsqu'on
 * affecte un objet de base à un objet dérivé
 * Dans cet exemple, l'opérateur = a été surchargé pour permettre l'opération,
 * mais n'affecte que la partie "de base" de l'objet.
 * (La partie dérivée restant inchangée)
 */
#include "Vecteur3N.h"

int main()
{
  Vecteur3N x("x", 1,0,0) , y("y", 0,1,0), somme("somme") ;
  somme = x+y ;
  cout << somme << endl ; // somme:1 1 0
    
  return 0 ;
}
