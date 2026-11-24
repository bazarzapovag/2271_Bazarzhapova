#include <iostream>

int main() {
    int a = 10;
    int b = 3;

    int umnozh = a * b;
    int pobit = a & b;
    int *p = nullptr;
    p = &a;
    *p = 20;
    int &ref = b;
    ref = 5;

    std::cout << "umnozh = " << mul << std::endl;
    std::cout << "pobit = " << bitAnd << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "*p = " << *p << std::endl;
    std::cout << "ref = " << ref << std::endl;

    return 0;
}
