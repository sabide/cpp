/*
 ------------------------------------------------------------------
 "Programmer en C++, des premiers pas à la maîtrise de C++20"
             par Alain Gibaud, Ed. Ellipses 2022
 ------------------------------------------------------------------

 Pour compiler ces exemples, suivez les indications fournies par
 le fichier LISEZ-MOI.txt.
 -------------------------------------------------------------------
 */



#include "Vecteur3N.h"
#include <cstring>
using namespace std ;

Vecteur3N::Vecteur3N(const char*nom , double x , double y , double z ) : Vecteur3(x,y,z)
{
  strcpy(nom_,nom) ; // Débordement possible
} 

ostream& Vecteur3N::print(ostream& os) const
{
  os << nom_ << ":" ;
  return Vecteur3::print(os) ;
}
  

Vecteur3N& Vecteur3N::operator=(Vecteur3 const&v)
{
  Vecteur3::operator=(v) ;
  return *this ;
}

ostream& operator<<(ostream& os, const Vecteur3N& v)
{
  return v.print(os) ;
}


