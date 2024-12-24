#include <stdio.h>
#define TAILLE_PHYS 20

float tab[TAILLE_PHYS] = {0};

void saisieValeur(float tab[TAILLE_PHYS]) {
    for (int i = 0; i < TAILLE_PHYS; i++) {
        printf("Saisissez la valeur %d :", i+1);
        scanf("%f", &tab[i]);
    }
    printf("Tableau avant le tri :");
    for (int i = 0; i < TAILLE_PHYS; i++) {
        printf("%0.3f ", tab[i]);
    }
    printf("\n");
}


void triInsertion(float tab[TAILLE_PHYS]) {
    for (int i = 0; i < TAILLE_PHYS; i++) {
        float key = tab[i]; //key = element à trier, au début egal a tous les éléments du tableau
        int j = i - 1;
        while (j >= 0 && tab[j] > key) { //Tant que key n'est pas le plus grand dans le tableau tab[j] (tableau trié), on recommence
            tab[j + 1] = tab[j];
            j--;
        }
        tab[j + 1] = key; //Quand key est le max, on l'insert dans le tableau
    }
    printf("Tableau apres le tri :");
    for (int i = 0; i < TAILLE_PHYS; i++) {
        printf("%0.3f ", tab[i]);
    }
    printf("\n");
}


int main(void) {
    saisieValeur(tab);
    triInsertion(tab);
    return 0;
}
