#ifndef MY_CLASS_H // include guard
#define MY_CLASS_H
double* build_mesh( double &h, int const n ){
    double *x = new double[n]; // Allocation dynamique pour le tableau x
    h = 1./(n-1); 
    for (int i = 0; i < n; ++i) {
        x[i] = i * h;
    }
    return x;
};


double* set_values( double *x, int const n ){
    double *f = new double[n]; // Allocation dynamique pour le tableau x
    
    for (int i = 0; i < n; ++i) {
        f[i] = -std::sin(2 * M_PI * x[i])/(4.*M_PI*M_PI) ;
    }
    return f;
};

double* get_der2( double *x, double *f, int const n ){
    double *d2 = new double[n]; // Allocation dynamique pour le tableau x
    auto h=x[1]-x[0];    

    d2[0]=0;
    d2[n-1]=0;

    for (int i = 1; i < n-1; ++i) {
        d2[i] = (f[i+1] - 2 * f[i] + f[i-1]) / (h * h);
    }
    return d2;
};

double get_err( double *x, double *d2, int const n ){
    double err=0.;
    double tmp;
   
    for (int i = 1; i < n-1; ++i) {
        tmp = std::abs(d2[i]- std::sin(2 * M_PI * x[i])) ;
        err = std::max(tmp,err) ;
    }
    return err;
};

#endif 