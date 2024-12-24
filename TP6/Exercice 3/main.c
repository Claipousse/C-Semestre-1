#include <stdio.h>

void echange(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A = 0, B = 0;
    printf("Saisissez la valeur de A:");
    scanf("%d", &A);
    printf("Saisissez la valeur de B:");
    scanf("%d", &B);
    //Affichage des valeurs
    printf("La valeur de A est : %d\n", A);
    printf("La valeur de B est : %d\n\n", B);
    //Appel de la procédure
    echange(&A, &B);
    //Affichage des valeurs apres echange
    printf("La nouvelle valeur de A est : %d\n", A);
    printf("La nouvelle valeur de B est : %d\n", B);
    return 0;
}