#include "grey.h"

int int_to_gray(int x) {
    return x ^ (x >> 1);
}

int gray_to_int(int gray) {
    int wynik = gray;
    for (int mask = gray >> 1; mask > 0; mask >>= 1) {
        wynik ^= mask;
    }
    return wynik;
}