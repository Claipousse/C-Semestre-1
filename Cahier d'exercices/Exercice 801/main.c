#include <stdio.h>
#include "library.h"

int main(void) {
    int a, b;
    printf("Saisissez un entier A :\n");
    scanf("%d", &a);
    printf("Saisissez un entier B :\n");
    scanf("%d", &b);
    printf("Les carres obtenus sont %d et %d.\n", calculCarre(a), calculCarre(b));
}
