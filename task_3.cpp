#include <iostream>

//Aufgabe: Bestimmen Sie die Anzahl der ganzen Zahlen im Bereich von 1000 bis 9000 (einschließlich),
//die durch 7 teilbar, aber nicht durch 5, 11 oder 13 teilbar sind.

int main() {
    int a = 0;
    int min = 0;
    for (int i = 1000; i <= 9000; ++i) {
        if (i % 7 == 0 && i % 5 != 0 && i % 11 != 0 && i % 13 != 0) {
            if (a == 0) {
                min = i;
            }
            ++a;
        }
    }
    std::cout << a << std::endl;
    std::cout << min << std::endl;
    return 0;
}
