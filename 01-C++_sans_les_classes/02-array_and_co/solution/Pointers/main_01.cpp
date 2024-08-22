#include <iostream>
#include <cmath>


int main() {
    const int n = 101; // Nombre de points dans le tableau
    double* x = new double[n]; // Allocation dynamique pour le tableau x
    double* f = new double[n]; // Allocation dynamique pour le tableau y (f(x) = cos(2*pi*x))
    double* d2f = new double[n]; // Allocation dynamique pour le tableau d2y (dérivée seconde)
    double* eps = new double[n]; // Allocation dynamique pour le tableau d2y (dérivée seconde)

    auto h = 1.0 / (n - 1); // Pas d'échantillonnage

    // Initialisation des valeurs de x et de y
    for (int i = 0; i < n; ++i) {
        x[i] = i * h;
        f[i] = std::sin(2 * M_PI * x[i])/(4.*M_PI*M_PI);
    }

    // Calcul de la dérivée seconde en utilisant une méthode des différences finies centrales
    for (int i = 1; i < n - 1; ++i) {
        d2f[i] = (f[i+1] - 2 * f[i] + f[i-1]) / (h * h);
    }

    // Pour les bords, on peut mettre la dérivée seconde à 0 ou utiliser une autre méthode
    d2f[0] = 0; // Simple approximation
    d2f[n-1] = 0; // Simple approximation

    // Affichage des résultats
    auto err = 0.0 ;
     for (int i = 0; i < n; ++i) {
        eps[i]=std::abs(d2f[i]+std::sin(2 * M_PI * x[i]));
        err = std::max(eps[i],err);
    }
    std::cout << h << " " << err << std::endl;

    
    // Libération de la mémoire allouée
    delete[] x;
    delete[] f;
    delete[] d2f;
    delete[] eps;

    return 0;
}
