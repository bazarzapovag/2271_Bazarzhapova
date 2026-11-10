#include <iostream>
#include <vector>

#define forc(i, from, to) \
    { int __i = (from), __n = (to); \
      for (const int &i = __i; i < __n; __i++) {

#define endfor } }

int main() {
    int n = 5;
    std::cout << "forc: ";
    forc(k, 0, n)
        std::cout << k << " ";
        n = 0;
    endfor
    std::cout << "\n";

    n = 5;
    std::cout << "for: ";
    for (int k = 0; k < n; k++) {
        std::cout << k << " ";
        n = 0;
    }
    std::cout << "\n";

    std::vector<int> v = {10, 20, 30, 40, 50};

    std::cout << "forc по v.size(): ";
    forc(k, 0, (int)v.size())
        std::cout << v[k] << " ";
        v.clear();
    endfor
    std::cout << "\n";
    return 0;
}
