#include <stdio.h>
#define TAILLE_PHYS 3
#define NULL 0
int tab[TAILLE_PHYS] = {0};

void saisieValeurs(int tab[TAILLE_PHYS]) {
    for (int i = 0; i < TAILLE_PHYS; i++) {
        printf("Saisissez la valeur %d (%d valeurs restantes)",i+1, TAILLE_PHYS-i);
        scanf("%d",&tab[i]);
    }
}

void scanZero(int tab[TAILLE_PHYS]) {
    int nb_zero = 0;
    printf("Les emplacements nuls sont:\n");
    for (int i = 0; i < TAILLE_PHYS; i++) {
        if (tab[i] == 0) {
            nb_zero++;
            printf("Valeur %d ",i+1);
        }
    }
    if (nb_zero == NULL) {
        printf("Aucunes !");
    }
}


int main() {
    saisieValeurs(tab);
    scanZero(tab);
    return 0;
}