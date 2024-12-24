#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int* allouer_tableau(int n) {
    int* liste = (int*) calloc(n, sizeof(int));
    assert(liste !=NULL);
    return liste;
}

int main(void) {
    int n = 0;
    int* liste = NULL;
    printf("Saisissez un entier n : ");
    scanf("%d", &n);
    liste = allouer_tableau(n);

    printf("Tableau de %d entiers initialises à 0 :\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", liste[i]);
    }
    printf("\n");
    free(liste);
    return 0;
}