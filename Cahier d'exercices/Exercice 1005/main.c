#include <stdio.h>
#define TAILLE_PHYS 10

int tab[TAILLE_PHYS];

void saisieValeur(int tab[TAILLE_PHYS]) {
    for (int i = 0; i < TAILLE_PHYS; i++) {
        printf("Saisissez l'entier numero %d\n:", i+1);
        scanf("%d", &tab[i]);
    }
}

void affichage(int tab[TAILLE_PHYS]) {
    for (int i = 0; i < TAILLE_PHYS; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}


void triInsertion(int tab[TAILLE_PHYS]) {
    for (int i = 0; i < TAILLE_PHYS; i++) {
        int cle = tab[i];
        int j = i - 1;
        while (j >= 0 && tab[j] > cle) { //Tant que key n'est pas le plus grand dans le tableau tab[j] (tableau trié), on recommence
            tab[j + 1] = tab[j];
            j--;
        }
        tab[j + 1] = cle; //Quand key est le max, on l'insert dans le tableau
    }
    for (int i = 0; i < TAILLE_PHYS; i++) {
        printf("%d ", tab[i]);
    }
}

void rechercheEntier(int tab[TAILLE_PHYS], int entier_recherche) {
    int entier_trouve = 0;
    for (int i = 0; i < TAILLE_PHYS; i++) {
        if (tab[i] == entier_recherche) {
            entier_trouve = 1;
            break;
        }
    }
    if (entier_trouve == 1) {
        printf("L'entier est present dans le tableau.\n");
    }
    else {
        printf("L'entier n'est pas present dans le tableau.\n");
    }
}

int main(void) {
    int entier_recherche;
    saisieValeur(tab);
    printf("Tableau avant le tri:\n");
    affichage(tab);
    printf("Tableau apres le tri:\n");
    triInsertion(tab);
    printf("Quel entier recherchez-vous dans le tableau ?\n");
    scanf("%d", &entier_recherche);
    rechercheEntier(tab, entier_recherche);
    return 0;
}