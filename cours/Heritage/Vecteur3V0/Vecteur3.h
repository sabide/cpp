#ifndef VECTEUR3_H
#define VECTEUR3_H
#include <iostream>
using namespace std ;
/*
 * Classe de base simple permettant de représenter un vecteur
 * dans un espace tridimensionnel. Pour rester simple, cette
 * classe n'autorise que les additions et soustractions vectorielles
 * et le calcul de la norme. Elle possède un opérateur de sortie.
 */

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
  ostream& print(ostream& os) const ; // Code effectif de l'opérateur de sortie
};
ostream& operator<<(ostream&, const Vecteur3& v) ;
#endif
