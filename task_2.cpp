#include <iostream>

int main() {
    int a;
    std::cout << "Geben Sie den Grad ein: ";
    std::cin >> a;

    int b = a * 9/5 + 32;
    std::cout << "Grad Fahrenheit: " << b;

    return 0;
}

