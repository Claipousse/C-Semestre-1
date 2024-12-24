#include <stdio.h>
#include "C:\Users\cleme\Desktop\ECE\Programmes\TD4\bibliotheque\cours4.c"

int main() {
    int nb_pierres = saisirEntier();
    printf("Avec %d pierres, on peut realiser %d etages.", nb_pierres, calculEtage(nb_pierres));
    return 0;
}
