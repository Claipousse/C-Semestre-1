#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char carac = rand() % 256 - 128;
    printf("L'entier choisit aleatoirement est: %d\n", carac);
    printf("Sous format caractere, on a: %c\n", carac); //Affiche la valeur de l'entier sur la table ASCII

    do {
        printf("Saisir un entier entre 97 et 122:\n");
        scanf("%d", &carac);
    } while (carac < 97 || carac >122); //Permet d'afficher uniquement les lettres de l'alphabet
    printf("Ce caractere sous format entier est: %d\n", carac);
    printf("Ce caractere sous format caractere est: %c\n", carac);
    return 0;
}
// Sur la table ASCII: * = 42, @ = 64, # = 35, $ = 36
