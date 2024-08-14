#ifndef POINT_H
#define POINT_H

#include "Vecteur3N.h"

class Point : private Vecteur3N
{
private:  
public:
  Point(const char *nom, double x=0, double y=0, double z=0) ;
  Point& deplacer( const Vecteur3& depl) ;
  double distance(  const Point& ) const ;
  ostream& print(ostream& os) const;
  double x() ;
  double y() ;
  double z() ;
} ;
ostream& operator<<(ostream&, const Point&) ;
#endif
