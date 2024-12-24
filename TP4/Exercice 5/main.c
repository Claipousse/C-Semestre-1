#include <stdio.h>
#include "C:\Users\cleme\Desktop\Programmes\TD4\bibliotheque\cours4.c"

int main() {
    int note1 = saisirEntier();
    int note2 = saisirEntier();
    int note3 = saisirEntier();

    int moyenne = calculMoyenne(note1, note2, note3);

    if (moyenne == -1) {
        printf("Une ou plusieurs notes sont invalides. Veuillez reessayer avec des notes comprises entre 0 et 20.\n");
    } else {
        printf("La moyenne des trois notes est de %d.\n", moyenne);
    }
    return 0;
}

