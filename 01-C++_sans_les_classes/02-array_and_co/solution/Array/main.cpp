#include <algorithm>
#include <array>
#include <iostream>
#include <iterator>
#include <string>


int const n=21;

void build_mesh( std::array<double, n> &x ){
    double h=1./(x.size()-1);
    for(auto i=0 ; i<x.size() ; i++){
        x[i]=i*h;
    }
};

void set_values(const std::array<double, n> &x ,std::array<double, n> &u  ){

    for( std::size_t i=0;i<n;i++){
        u[i] =  std::sin(2 * M_PI * x[i])/(4.*M_PI*M_PI) ;
    }
};

void get_der2( const std::array<double, n> &x, const std::array<double, n> &f,  std::array<double, n> &d2 ){
    auto h=x[1]-x[0];    
    d2[0]=0;
    d2[n-1]=0;
    for (std::size_t i = 1; i < n-1; ++i) {
        d2[i] = (f[i+1] - 2 * f[i] + f[i-1]) / (h * h);
    }
    
};


int main(){

    std::array<double, n> x {} ;
    std::array<double, n> f {} ;
    std::array<double, n> d2 {} ;

    build_mesh( x );
    set_values( x , f );
    get_der2( x, f, d2 );

    for (auto s : x)
        std::cout << s << std::endl;

    for (auto s : f)
        std::cout << s << std::endl;
  
    for (auto s : d2)
        std::cout << s << std::endl;

    //std::cout << '\n';

    return 1;
}