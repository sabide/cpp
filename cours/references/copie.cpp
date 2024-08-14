class Person
{
public:
    Person(const std::string& name)
        : _name { name }
    {}

    std::string get_name() const { return _name; }

private:
    std::string _name;
};

int main()
{
    auto bob = Person { "Bob" };

    auto name = bob.get_name();
    std::cout << name << " is my favorite person in the world" << std::endl;

    return 0;
}


class Person
{
public:
    Person(const std::string& name)
        : _name { name }
    {}

    const std::string& get_name() const { return _name; }

private:
    std::string _name;
};

int main()
{
    auto donatien = Person { "Donatien" };

    const auto& name = donatien.get_name();
    std::cout << name << " is my favorite person in the world" << std::endl;

    return 0;
}




#include <iostream>
const int nx=100;
void inc_i(double tab[nx*nx*nx]){
    tab[10]=1000;
};

void inc_ii(double* tab){
    tab[10]=1000;
};

void inc_iii(double& tab[]){
    tab[10]=1000;
};


int main() {
    double *tab = new double [nx*nx*nx];
    double T[nx*nx*nx];
    inc_i(T);
    std::cout << T[10] << std::endl;
    inc_ii(&T[0]);
    std::cout << T[10] << std::endl;
    //inc_iii(T);
    //std::cout << tab[10] << std::endl;

    return 0;
}
