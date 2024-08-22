#include <iostream>
#include <cmath>
#include "der.hpp"





int main() {
    const int n = 101; // Nombre de points dans le tableau

    double h ; // pas d'espaces
    auto x = build_mesh(h,n);
    auto f = set_values(x,n);
    auto d2f = get_der2(x,f,n);
    auto err = get_err(x,d2f,n);

    std::cout << h << " " << err << std::endl;

    delete[] x;
    delete[] f;
    delete[] d2f;
    
    return 0;
}
