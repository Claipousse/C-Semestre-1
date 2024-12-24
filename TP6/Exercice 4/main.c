#include <stdio.h>
#define TAILLE_PHYS 3 //Determine la taille du tableau

void sommeEtProduit(int tab[TAILLE_PHYS], int *somme, int *produit) {
    for (int i = 0; i < TAILLE_PHYS; i++) {
        *somme += tab[i];
        *produit *= tab[i];
    }
}


int main(void) {
    int tab[TAILLE_PHYS] = {0};
    int somme = 0, produit = 1; //Ne pas initialiser produit à 0, sinon multiplication sera nulle
    //Saisie des valeurs
    for (int i = 0; i < TAILLE_PHYS; i++) {
        printf("Saisissez la valeur %d : (%d valeurs a saisir)\n",i+1, TAILLE_PHYS);
        scanf("%d",&tab[i]);
    }
    //Appel de la procédure
    sommeEtProduit(tab, &somme, &produit);

    //Affichage des valeurs
    printf("La somme est : %d\n", somme);
    printf("Le produit est : %d\n", produit);
    return 0;
}