/*
 ------------------------------------------------------------------
 "Programmer en C++, des premiers pas à la maîtrise de C++20"
             par Alain Gibaud, Ed. Ellipses 2022
 ------------------------------------------------------------------

 Pour compiler ces exemples, suivez les indications fournies par
 le fichier LISEZ-MOI.txt.
 -------------------------------------------------------------------
 */

#include "Vecteur3.h"
#include <cmath>

Vecteur3::Vecteur3(double x , double y , double z )
{
  x_ = x ; y_ = y ; z_ = z ;
}

double Vecteur3::x() const { return x_ ; }

double Vecteur3::y() const { return y_ ; }

double Vecteur3::z() const { return z_ ; }

Vecteur3& operator+=( Vecteur3& v1, const Vecteur3& v2)
{
  v1.x_ += v2.x_ ; v1.y_ += v2.y_ ; v1.z_ += v2.z_ ;
  return v1 ;
}

Vecteur3 operator+(const Vecteur3& v1, const Vecteur3& v2)
{
  Vecteur3 v(v1) ;
  return v += v2 ;
}

Vecteur3 operator-(const Vecteur3& v1, const Vecteur3& v2)
{
  return Vecteur3(v1.x_-v2.x_,   v1.y_-v2.y_,   v1.z_-v2.z_) ;
}

double Vecteur3::norme() const
{
  return sqrt(x_*x_ + y_*y_ + z_*z_) ;
}

ostream& Vecteur3::print(ostream& os) const 
{
  return os << x_ << " " << y_ << " " << z_ ;
}

ostream& operator<<(ostream& os, const Vecteur3& v)
{
  return v.print(os) ;
}
