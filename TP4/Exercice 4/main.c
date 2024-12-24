#include <stdio.h>
#include <stdbool.h>
#include "C:\Users\cleme\Desktop\Programmes\TD4\bibliotheque\cours4.c"

int main() {
    int a = saisirEntier();
    int b = 3;
    int multiple = estMultiple(a, b);
    if (multiple == true && a >= CONST) {
        printf("%d est un multiple de 3 et est superieur ou egal a 10.\n", a);
    }
    else if (multiple == true && a < CONST) {
        printf("%d est un multiple de 3 et est inferieur a 10.\n", a);
    }
    else if (multiple == false && a >= CONST) {
        printf("%d n'est pas un multiple de 3 et est superieur ou egal a 10.\n",a);
    }
    else if (multiple == false && a < CONST) {
        printf("%d n'est pas un multiple de 3 et est inferieur a 10.\n", a);
    }
    return 0;
}
