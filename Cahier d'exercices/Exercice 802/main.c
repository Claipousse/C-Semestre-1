#include <stdio.h>
#include "802.h"

int entier, n, choix;

int main() {
    do {
        choix = menu();

        if (choix == 1) {
            entier = ajouter1(entier);
        }
        else if (choix == 2) {
            entier = multiplierPar2(entier);
        }
        else if (choix == 3) {
            entier = soustraire4(entier);
        }
        else if (choix == 4) {
            entier = sommePremiersEntiers(n);
        }
    } while (choix != 5);
    printf("On obtient %d.\n", entier);
    return 0;
}
