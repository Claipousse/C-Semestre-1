#include <stdio.h>
#define AGE_TARIF_ENFANT 11
#define AGE_TARIF_ETUDIANT_MIN 18
#define AGE_TARIF_ETUDIANT_MAX 27
#define AGE_TARIF_JEUNE_MIN 12
#define AGE_TARIF_JEUNE_MAX 17
#define AGE_TARIF_SENIOR 65

int main() {
    int age;
    printf("Entrez votre age.\n");
    scanf("%d", &age);
    if (age <= AGE_TARIF_ENFANT) {
        printf("Vous beneficiez du tarif enfant, payez 4 euros.");
    }
    else if (age <= AGE_TARIF_JEUNE_MAX && age >= AGE_TARIF_JEUNE_MIN) {
        printf("Vous beneficiez du tarif jeune, payez 6 euros.");
    }
    else if (age >= AGE_TARIF_ETUDIANT_MIN && age <= AGE_TARIF_ETUDIANT_MAX) {
        printf("Vous beneficiez du tarif etudiant, payez 6 euros.");
    }
    else if (age >= AGE_TARIF_SENIOR) {
        printf("Vous beneficiez du tarif senior, payez 6 euros.");
    }
    else {
        printf("Vous ne beneficiez d'aucunes reductions, payez 9 euros.");
    }
    return 0;

}
