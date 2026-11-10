#include <iostream>

#define forc(i, from, to) \
    { int __i = (from), __n = (to); \
      for (const int &i = __i; i < __n; __i++) {

#define endfor } }

int main() {
    std::cout << "forc: ";
    forc(k, 0, 5)
        std::cout << k << " ";
    endfor
    std::cout << "\n";

    std::cout << "for:  ";
    for (int k = 0; k < 5; k++) {
        std::cout << k << " ";
    }
    std::cout << "\n";
    return 0;
}
