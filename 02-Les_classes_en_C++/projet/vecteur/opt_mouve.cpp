#include <iostream>
#include <utility> // pour std::move

class vecteur {
private:
    int n_;
    double* data_;

public:
    // Constructeurs
    vecteur() : n_(0), data_(nullptr) {}
    vecteur(int n) : n_(n), data_(new double[n]) {
        for (int i = 0; i < n_; ++i) {
            data_[i] = 0.0; // Initialisation à zéro pour l'exemple
        }
    }

    // Constructeur de copie
    vecteur(const vecteur& other) : n_(other.n_), data_(new double[other.n_]) {
        for (int i = 0; i < n_; ++i) {
            data_[i] = other.data_[i];
        }
    }

    // Constructeur de déplacement
    vecteur(vecteur&& other) noexcept : n_(other.n_), data_(other.data_) {
        std::cout << "mouve" << std::endl;
        other.n_ = 0;
        other.data_ = nullptr;
    }

    // Opérateur d'affectation par déplacement
    vecteur& operator=(vecteur&& other) noexcept {
        if (this != &other) {
            delete[] data_;
            n_ = other.n_;
            data_ = other.data_;
            other.n_ = 0;
            other.data_ = nullptr;
        }
        return *this;
    }

    // Destructeur
    ~vecteur() {
        delete[] data_;
    }

    // Accès aux éléments
    double& operator[](int i) {
        return data_[i];
    }

    const double& operator[](int i) const {
        return data_[i];
    }

    // Opérateur +
    vecteur operator+(const vecteur& other) const {
        vecteur result(n_);
        for (int i = 0; i < n_; ++i) {
            result[i] = data_[i] + other.data_[i];
        }
        return result; // retourne un vecteur temporaire
    }

    // Impression pour débogage
    void print() const {
        for (int i = 0; i < n_; ++i) {
            std::cout << data_[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    vecteur u(5); // Crée un vecteur de taille 5
    vecteur v(5); // Crée un autre vecteur de taille 5

    // Remplissage des vecteurs pour l'exemple
    for (int i = 0; i < 5; ++i) {
        u[i] = i + 1;
        v[i] = (i + 1) * 10;
    }

    vecteur w(5); // Crée un vecteur w de taille 5

    // Addition de u et v, et affectation à w
    w = u + v; // Le résultat temporaire de u + v est déplacé dans w

    std::cout << "u: ";
    u.print();

    std::cout << "v: ";
    v.print();

    std::cout << "w (u + v): ";
    w.print();

    vecteur z=std::move(w);
    w.print();
    vecteur x;
    x=u+v;
    x.print();

    return 0;
}
