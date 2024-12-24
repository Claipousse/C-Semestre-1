#include <stdio.h>
#define NB_LIGNES_MAX 3
#define NB_COLONNES_MAX 4
#define TAILLE_PYS 12

int tableau_2d[NB_LIGNES_MAX][NB_COLONNES_MAX] = {{0}};
int tableau_1d[TAILLE_PYS]= {0};

int main() {
    int i, j, k = 0; //Saisie des valeurs dans le tableau 2d puis transposition dans le tableau 1d
    for (i = 0; i < NB_LIGNES_MAX; i++) {
        for (j = 0; j < NB_COLONNES_MAX; j++) {
            printf("Valeur dans la case %d.%d :", i + 1, j + 1);
            scanf("%d", &tableau_2d[i][j]);
            tableau_1d[k++] = tableau_2d[i][j];
        }
    }

    printf("Tableau 2d :\n"); //Affichage tableau 2d
    for (int i = 0; i < NB_LIGNES_MAX; i++) {
        for (int j = 0; j < NB_COLONNES_MAX; j++) {
            printf("%d\t", tableau_2d[i][j]);
        }
        printf("\n");
    }

    printf("Tableau 1d :\n"); //Affichage tableau 1d
    for (int i = 0; i < TAILLE_PYS; i++) {
        printf("%d\t", tableau_1d[i]);
    }
    printf("\n");
    return 0;
}