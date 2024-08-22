#include <iostream>
#include "vecteur.h"

void f(vecteur& u){print_vecteur(u);};
void g(vecteur  u){print_vecteur(u);};

int main(){
    int n=3;
    vecteur u {n} ;
    vecteur v {n} ;
    vecteur w {n} ;
    for(int i=0;i<n;++i){ 
        u[i]=v[i]=i;
    }
    std::cout << &w << std::endl;
    w = u+v;
    double dot = u*v;
    const auto a=1.3;  
    w = a*u*a ;
    std::cout << dot << std::endl;
    std::cout << w << std::endl;
}