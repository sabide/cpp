#ifndef VECTEUR3N_H
#define VECTEUR3N_H
#include "Vecteur3.h"

//
// Les Vecteur3N sont des Vecteur3 qui possèdent un nom
//
class Vecteur3N : public Vecteur3
{
private:
  char nom_[20] ;  // Pas plus de 19 caractères
public:
  Vecteur3N(const char* nom , double x=0, double y=0, double z=0) ;
  ostream& print(ostream&) const ;
  Vecteur3N& operator=(const Vecteur3& v) ;
};
 ostream& operator<<(ostream& os, const Vecteur3N& v) ;
#endif
