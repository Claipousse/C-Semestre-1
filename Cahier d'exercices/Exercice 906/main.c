#include <stdio.h>
#include <math.h>
#define PI 3.14

void calculAirePerimetre(char figure,float *perimetre, float *aire) {
    float rayon = 0, longueur = 0, largeur = 0, troisieme_cote = 0;

        if (figure == 'c') {
            printf("Quel est le rayon du cercle ?\n");
            scanf("%f",&rayon);
            *perimetre = rayon * PI * 2;
            *aire = PI * rayon * rayon;
        }

        else if (figure == 'r') {
            printf("Quel est la longueur du rectangle ?\n");
            scanf("%f",&longueur);
            printf("Quel est la largeur du rectangle ?\n");
            scanf("%f",&largeur);
            *perimetre = (longueur + largeur) * 2;
            *aire = longueur * largeur;
        }

        else if (figure == 't') {
            printf("Quel est la longueur du triangle rectangle ?\n");
            scanf("%f",&longueur);
            printf("Quel est la largeur du triangle rectangle ?\n");
            scanf("%f",&largeur);
            troisieme_cote = sqrt(longueur * longueur + largeur * largeur);
            *perimetre = longueur + largeur + troisieme_cote;
            *aire = (longueur * largeur) / 2;
        }
    }

int main() {
    char figure;
    float perim = 0, A = 0;
    while (1) {
        do {
            //Afficher le menu et saisir les choix
            printf("\nMenu de calcul de figures geometriques:\n");
            printf("'r' pour Rectangle\n");
            printf("'t' pour Triangle\n");
            printf("'c' pour Cercle\n");
            printf("'q' pour Quitter\n");
            printf("Votre choix: ");
            scanf(" %c",&figure);
        } while (figure != 'c' && figure != 'r' && figure != 't' && figure != 'q');

        if (figure == 'q') {
            break;
        }
        calculAirePerimetre(figure, &perim, &A);
        printf("\nResultats:\n");
        printf("Perimetre = %0.2f\n", perim);
        printf("Aire = %0.2f\n", A);
    }
    printf("Au revoir !\n");
    return 0;
}