#include <stdio.h>
#define TAILLE_PHYS 20

float tab[TAILLE_PHYS] = {0};

void saisieValeurs(float tab[TAILLE_PHYS]) {
    for (int i = 0; i < TAILLE_PHYS; i++) {
        printf("Saisissez le reel numero %d:\n", i + 1);
        scanf("%f", &tab[i]);
    }
    printf("\n");
}


void affichage(float tab[TAILLE_PHYS]) {
    printf("Tableau avant tri: ");
    for (int i = 0; i < TAILLE_PHYS; i++) {
        printf("%0.2f ", tab[i]);
    }
    printf("\n");
}


void triBulle(float tab[TAILLE_PHYS]) {
    for (int i = 0; i < TAILLE_PHYS - 1; i++) {
        for (int j = 0; j < TAILLE_PHYS - 1; j++) {
            if (tab[j] > tab[j+1]) { //Si le nombre suivant est inférieur, on les intervertis
                float temp = tab[j];
                tab[j] = tab[j+1];
                tab[j+1] = temp;
            }
        }
    }
    printf("Tableau filtrer via le tri a bulle: "); //On ajoute cela au sous-programme pour afficher le tableau
    for (int i = 0; i < TAILLE_PHYS; i++) {
        printf("%0.2f ", tab[i]);
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
    printf("Tableau filtrer via le tri par insertion: "); //On ajoute cela au sous-programme pour afficher le tableau
    for (int i = 0; i < TAILLE_PHYS; i++) {
        printf("%0.2f ", tab[i]);
    }
    printf("\n");
}


int main() {
    saisieValeurs(tab);
    affichage(tab);
    triBulle(tab);
    triInsertion(tab);
    return 0;
}