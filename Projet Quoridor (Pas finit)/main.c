#include "projet.h"
#define NB_LIGNES 17
#define NB_COLONNES 17

int main() {
    char matrice[NB_LIGNES][NB_COLONNES];
    remplissageMatrice(matrice);
    afficherMatrice(matrice);
    return 0;
}
