#include <iostream>

int main() {
    int x;
    bool found = false;

    while (std::cin >> x) {
        if (x < 0) {
            std::cout << "Найдено отрицательное число: " << x << std::endl;
            found = true;
            break;
        }
    }

    if (!found) {
        std::cout << "Все числа неотрицательные" << std::endl;
    }

    return 0;
}
