#ifndef VECTEUR3_H
#define VECTEUR3_H
#include <iostream>
using namespace std ;
//
// Modélisation banale d'un vecteur dans l'espace 3
//
class Vecteur3
{
private:
  double x_,y_,z_ ;
public:
  Vecteur3(double x=0, double y=0, double z=0) ;
  // accesseurs
  double x() const ;
  double y() const ;
  double z() const ;
  // Opérateurs
  friend Vecteur3& operator+=(Vecteur3& v1, const Vecteur3& v2) ;
  friend Vecteur3 operator+(const Vecteur3& v1, const Vecteur3& v2) ;
  friend Vecteur3 operator-(const Vecteur3& v1, const Vecteur3& v2) ;
  double norme() const ;
  // Entrées/sorties
  ostream& print(ostream& os) const ;
};
ostream& operator<<(ostream&, const Vecteur3& v) ;
#endif
