#include "802.h"
#include <stdio.h>

int menu() {
    int choix;
    do {
        printf("Veuillez selectionner l'une des options suivantes :\n1. Ajouter 1\n2. Multiplier par 2\n3. Soustraire 4\n4. Somme de n premiers nombres entiers\n5. Quitter\n");
        scanf("%d", &choix);
    } while (choix > 5 || choix < 1);
    return choix;
}

int ajouter1(int entier) {
    return entier + 1;
}

int multiplierPar2(int entier) {
    return entier * 2;
}

int soustraire4(int entier) {
    return entier - 4;
}

int sommePremiersEntiers(int entier, int n) {
    printf("Choisissez un entier n:\n");
    scanf("%d", &n);
    for (int i = 0;i <= n; i++) {
        entier += i;
    }
    return entier;
}



