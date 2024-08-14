#ifndef VECTEUR3N_H
#define VECTEUR3N_H
#include "Vecteur3.h"

class Vecteur3N : public Vecteur3
{
private:
  char nom_[20] ;
public:
  Vecteur3N(const char*nom , double x=0, double y=0, double z=0) ;
  ostream& print(ostream&) const ;
  Vecteur3N& operator=(const Vecteur3& v) ;
};
#endif
