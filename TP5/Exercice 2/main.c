#include <stdio.h>
#define TAILLE_PYS_MAX 100

int main(void) {
    int taille_pys, max = 0;
    do {
        printf("Saisissez combien d'entiers voulez-vous dans le tableau (Maximum: 100)\n");
        scanf("%i", &taille_pys);
    } while (taille_pys > TAILLE_PYS_MAX);

    int tab[taille_pys];
    for (int i = 0; i < taille_pys; i++) {
        printf("Saisissez l'entier numero %d du tableau :\n", i+1);
        scanf("%i", &tab[i]);
        if (tab[i] > max) {
            max = tab[i];
        }
    }
    printf("Le maximum du tableau est %d", max);
    return 0;
}
