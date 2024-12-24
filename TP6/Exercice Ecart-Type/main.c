#include <stdio.h>
#include <math.h>
#define TAILLE_PHYS 3

float sommeEcartype(int tab[TAILLE_PHYS], int *somme, float *moyenne, float *variance) {
    *somme = 0;
    *moyenne = 0;
    *variance = 0;
    int i = 0;

    for (i = 0; i < TAILLE_PHYS; i++) {
        *somme += tab[i];
    }
    *moyenne = (float)*somme / TAILLE_PHYS; //Moyenne = somme des valeurs divisé par le nombre de valeurs

    for (i = 0; i < TAILLE_PHYS; i++) { //Variance = difference entre valeur et la moyenne au carré (x le nombre de notes), le tout divisé par le nb de valeurs
        *variance += ((float)tab[i] - *moyenne) * ((float)tab[i] - *moyenne);
    }
    *variance /= TAILLE_PHYS;

    return sqrt(*variance); //Ecart-type = racine carrée (sqrt) de la variance
}

int main() {
    int somme=0;
    float moyenne = 0, variance = 0, ecartype = 0;
    int tab[TAILLE_PHYS]={0};

    for (int i = 0; i < TAILLE_PHYS; i++) {
        printf("Saisissez la valeur %d (%d valeurs restantes)\n", i+1, TAILLE_PHYS-i);
        scanf("%d", &tab[i]);
    }
    ecartype = sommeEcartype(tab, &somme, &moyenne, &variance);
    printf("La somme est %d\n", somme);
    printf("La moyenne est %0.2f\n", moyenne);
    printf("La variance est %0.2f\n", variance);
    printf("L'ecart-type est %0.2f\n", ecartype);
    return 0;
}

