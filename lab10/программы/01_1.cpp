#include <iostream>

int main() {
    int a = 10, b = 20;
    int *p = &a, *q = &b;
    p = q;
    std::cout << *p << ' ' << *q << std::endl;
    std::cout << "a=" << a << " b=" << b
              << " &a=" << &a << " &b=" << &b
              << " p=" << p << " q=" << q << std::endl;
}
