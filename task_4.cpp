#include <iostream>

//Problemstellung: Gegeben ist ein Array aus 20 Ganzzahlen.
//Die Elemente des Arrays können ganzzahlige Werte im Bereich von -10.000 bis einschließlich 10.000 annehmen.
//Schreiben Sie ein Programm, das das kleinste gerade Element des Arrays ermittelt und ausgibt,
//welches nicht durch 3 teilbar ist.
//Falls kein solches Element existiert, soll 0 ausgegeben werden.

int main() {
    int a = 0;
    int min = 10001;

    int A[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    for (int i = 0 ; i < 20; ++i) {
        if (A[i] % 2 == 0) {
            a = A[i];
            if (a < min) {
                min = a;
            }
        }
    }

    std::cout << min;

    return 0;
}
