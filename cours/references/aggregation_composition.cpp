#include <iostream>
class C {
public:
    void f() {
        std::cout << "C::f()" << std::endl;
    }
};

class D {
private:
    C c; // Composition : D contient C, et C est créé et détruit avec D.
public:
    void g() {
        c.f();
    }
};

int main() {
    D objD; // C est automatiquement créé avec D
    objD.g();
    
    return 0;
}
