#include <iostream>
class A {
public:
    void f() {
        std::cout << "A::f()" << std::endl;
    }
};

class B {
private:
    A& a; // Agrégation : B utilise A, mais A peut exister indépendamment.
public:
    B(A& ptr) : a(ptr) {}
    
    void g() {
        a.f();
    }
};

int main() {
    A objA;
    B objB(objA); // B utilise un objet A existant
    objB.g();
    
    return 0;
}
