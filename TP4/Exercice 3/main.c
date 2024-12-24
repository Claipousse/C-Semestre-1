#include <stdio.h>
#include "C:\Users\cleme\Desktop\Programmes\TD4\bibliotheque\cours4.c"

int main() {
    int longueur = saisirEntier();
    int largeur = saisirEntier();
    printf("L'aire du rectangle est : %d.\n", calculAire(longueur, largeur));
    printf("Le perimetre du rectangle est : %d.\n", calculPerimetre(longueur, largeur));
    return 0;
}
