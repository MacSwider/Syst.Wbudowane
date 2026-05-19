#include <stdio.h>
#include "zadania_while.h"
#include "grey.h"

int main(void) {
    int x = 420;
    printf("Iloczyn cyfr liczby %d wynosi: %d\n", x, iloczyn(x));
    printf("Liczba %d w systemie binarnym: %d\n", x, dec_to_binary(x));

    int pesel[10] = {2,1,3,7,4,2,0,0,6,9};
    int kontrola = cyfra_kontrolna(pesel);

    printf("Liczba kontrola peselu : %d\n", kontrola);
    int liczba = 13;
    int liczba_gray = 24;

    int kod_graya = int_to_gray(liczba);
    int liczba_odkodowana = gray_to_int(liczba_gray);

    printf("Liczba: %d\n", liczba);
    printf("Kod Graya: %d\n", kod_graya);
    printf("Liczba zakodowana: %d\n", liczba_gray);
    printf("Liczba odkodowana: %d\n", liczba_odkodowana);
}
