#include <stdio.h>
#define TAILLE_PYS 20

int tab[TAILLE_PYS];

void affichageTableau(int tab[TAILLE_PYS]) {
    for (int i = 0; i < TAILLE_PYS; i++) {
        printf("%d ", tab[i]);
    }
}

int main() {
    affichageTableau(tab);
    return 0;
}
