#include <stdio.h>

int iloczyn(int x) {
    int wynik = 1;
    while (x > 0) {
        int mod = x % 10;
        wynik *= mod;
        x /= 10;
    }
    return wynik;
}

int dec_to_binary(int x) {
    int wynik = 0;
    int p = 1; // Pozycja bitowa w systemie dziesiętnym (1, 10, 100, ...)

    while (x > 0) {
        int bit = x % 2;  // Pobranie najmniej znaczącego bitu
        wynik += bit * p; // Dodanie bitu na odpowiednią pozycję
        p *= 10;          // Przesunięcie pozycji w systemie dziesiętnym
        x /= 2;           // Przesunięcie liczby w prawo (dzielenie przez 2)
    }

    return wynik;
}

int cyfra_kontrolna(int pesel[]) {
    int wagi[] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3};
    int suma = 0;

    for (int i = 0; i < 10; i++) {
        suma += pesel[i] * wagi[i];
    }

    int cyfra_kontrolna = (10 - (suma % 10)) % 10; // Jeśli wynik to 10, zwróci 0
    return cyfra_kontrolna;
}