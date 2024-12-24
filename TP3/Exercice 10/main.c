#include <stdio.h>

float main() {
    float n, somme, moyenne;
    int i = 0; // Permet de compter le nombre d'entiers saisis, utile pour calculer la moyenne
    int j = 1; // Permet de compter le nombre de repetitions dans la console

    printf("Choisissez l'entier positif numero %d.\n", j);
    scanf("%f",&n);
    while (n >= 0) {
        i++;
        j++;
        somme += n; //A chaque itération, ajoute le nombre saisit à la somme de tous les nombres réunis
        printf("Choisissez l'entier positif numero %d.\n", j);
        scanf("%f",&n);
    }
    moyenne = somme / i;
    printf("La moyenne est de %f",moyenne);
    return 0;
}
// Sur la table ASCII: * = 42, @ = 64, # = 35, $ = 36