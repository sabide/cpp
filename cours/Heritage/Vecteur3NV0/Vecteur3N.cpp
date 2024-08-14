#include "Vecteur3N.h"
#include <cstring>
using namespace std ;

Vecteur3N::Vecteur3N(const char*nom , double x , double y , double z ) : Vecteur3(x,y,z)
{
  strcpy(nom_,nom) ; // Débordement possible
} 

ostream& operator<<(ostream& os, const Vecteur3N& v)
{
  return v.print(os) ;
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
