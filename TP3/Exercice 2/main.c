#include <stdio.h>

int main() {
    float largeur, longueur, perimetre, aire;
    printf("Saisissez la largeur du rectangle:\n");
    scanf("%f", &largeur);
    printf("Saisissez la longueur du rectangle:\n");
    scanf("%f", &longueur);
    aire = longueur * largeur;
    perimetre = (largeur + longueur) * 2;
    printf("Le perimetre est: %f\n", perimetre);
    printf("L'aire est: %f\n", aire);
    return 0;
}
