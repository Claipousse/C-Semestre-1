#include <stdio.h>

int main(void) {
    int a, b, somme;
    do {
        printf("Saisissez un entier A :\n");
        scanf("%d", &a);
        printf("Saisissez un entier B :\n");
        scanf("%d", &b);
    }while (a > b);

    for (int i=a; i<=b; i++) {
        somme = somme + i;
    }
    printf("La somme des entiers de %d a %d est %d.",a, b, somme);
    return 0;
}
