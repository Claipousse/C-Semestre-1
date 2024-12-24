#include <stdio.h>
#define LIGNES_MAX 7
#define COLONNES_MAX 4

int main(void) {
    float tab[LIGNES_MAX][COLONNES_MAX] = {{0}};

    for (int i = 0; i < LIGNES_MAX; i++) {
        for(int j = 0;j < COLONNES_MAX; j++) {
            printf("Valeur de %d.%d :",i+1, j+1);
            scanf("%f", &tab[i][j]);
        }
    }

    for (int i = 0; i < LIGNES_MAX; i++) {
        for (int j = 0; j < COLONNES_MAX; j++) {
            printf("%0.2f ", tab[i][j]);
        }
    }
    return 0;
}