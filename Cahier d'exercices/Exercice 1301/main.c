#include <stdio.h>
#define TAILLE_PHYS 5

typedef struct {
    int id, codePostal, anneeNaissance;
    float notes[TAILLE_PHYS];
} etudiant;

etudiant instance() {
    etudiant jacob;
    printf("Saisissez l'ID de l'étudiant :");
    scanf("%d",jacob.id );
    printf("Saisissez le code Postal de l'etudiant :");
    scanf("%d",jacob.codePostal);
    printf("Saisissez l'année de naissance de l'etudiant");
    scanf("%d", jacob.anneeNaissance);
    
}

