#include <stdio.h>
#include "903.h"

void somme(int a, int b, int *somme) {
    *somme = a + b;
}

int main() {
    int n1 = 0, n2 = 0, resultat;
    printf("Saisissez le 1er entier :\n");
    scanf("%d", &n1);
    printf("Saisissez le 2eme entier :\n");
    scanf("%d", &n2);
    somme(n1, n2, &resultat);
    printf("La somme des deux nombres est : %d", resultat);
    return 0;
}

/* Si la procédure devient une fonction, on a:
 int somme(int a, int b) {
    return a + b;
}

int main() {
    int n1 = 0, n2 = 0, resultat;
    printf("Saisissez le 1er entier :\n");
    scanf("%d", &n1);
    printf("Saisissez le 2eme entier :\n");
    scanf("%d", &n2);
    resultat = somme(n1, n2);
    printf("La somme des deux nombres est : %d", resultat);
    return 0;
}
*/