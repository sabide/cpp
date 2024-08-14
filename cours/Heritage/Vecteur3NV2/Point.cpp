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


Point::Point(const char *nom, double x, double y, double z)
      : Vecteur3N(nom, x, y , z) 
{
  // vide
}

Point& Point::deplacer( const Vecteur3& depl)
{
  Vecteur3& base = *this ;
  base = base + depl ;
  return *this ;
}

double Point::distance( const Point& p) const 
{
  return (p - *this ).norme() ;
}

ostream& Point::print(ostream& os) const 
{
  return Vecteur3N::print(os) ;
}

ostream& operator<<(ostream& os, const Point& p)
{
  return p.print(os) ;
}

double Point::x() { return Vecteur3::x() ; }
double Point::y() { return Vecteur3::y() ; }
double Point::z() { return Vecteur3::z() ; }
