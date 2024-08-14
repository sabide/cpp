#include <iostream>
void inc(int* a){++(*a);};
void inc(int& a){++( a);};
int main() {
    int var = 10;
    inc(&var);
    std::cout << var << std::endl;
    inc(var);
    std::cout << var << std::endl;
    return 0;
}
