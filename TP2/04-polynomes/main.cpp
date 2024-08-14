#include <iostream>

using namespace std;

class polynom
{
  
private:
  double coeff_[5] = {1,0,-3,4,5};
  
  bool printMonome(ostream& os, double a, int deg){
    bool monomeNull = true ; 
    if (a != 0.0)
      {
	os << ( (a<0) ? '-' : '+' ) ; // signe du monome
	if (a<0.0) a = -a ;
	if (a !=1 || deg==0 ) os<< a ;
	if ( deg >0 ) os << 'x' ;
	if ( deg >1 ) os << '^' << deg ;
      }
    return monomeNull ;
  }
  
public:
  void print(ostream& stream);
  
protected:
  
};

void polynom::print(ostream& stream){
  for(int i=0;i<5;++i)
    printMonome(stream, this->coeff_[i],i);
  cout << endl;
}


int main(void){
  
  polynom p1;
  
  p1.print( cout );
  //print(&p1, cout );
  
  
}
