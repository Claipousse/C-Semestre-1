#include <stdio.h>
#include "C:\Users\cleme\Desktop\ECE\Programmes\TD4\bibliotheque\cours4.c"

int main() {
    int nombre_de_classes = saisirEntier();
    printf("Le nombre d'eleves total dans votre etablissement est de %d.\n", calculNbEleves(nombre_de_classes));
    return 0;
}

