#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#define MAX_MOTS 10
#define MAX_TAILLE 52 //50 + 2 car il faut la place de '\0' et '\n'

//Creation du tableau de pointeurs sur caractère
char** tableau10Mots() {
    char** tableau = calloc(MAX_MOTS, sizeof(char*));
    assert(tableau != NULL);
    return tableau;
}

void viderTampon() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void saisieMots(char** tableau) {
    for (int i = 0; i < MAX_MOTS; i++) {
        tableau[i] = (char*) calloc(MAX_TAILLE, sizeof(char)); // Allocation mémoire pour chaque mot
        assert(tableau[i] != NULL); // Vérification de l'allocation de mémoire

        do {
            printf("Saisissez le mot numero %d (Max 50 caracteres) :\n", i + 1);
            // Lecture d'un mot avec une taille max de 50 caractères, stdin correspond à "saisie via clavier"
            fgets(tableau[i], MAX_TAILLE, stdin);
            // Enlever le caractère '\n' de la chaîne, pour le remplacer par \0
            tableau[i][strcspn(tableau[i], "\n")] = '\0';

            // Si la chaîne dépasse la longueur maximale (avant ou après '\0'), on la rejette
            if (strlen(tableau[i]) == MAX_TAILLE - 1 && tableau[i][strlen(tableau[i]) - 1] != '\0') {
                printf("Le mot est trop long, veuillez reessayer.\n");
                viderTampon(); // Vider le tampon d'entrée
            }
        } while (strlen(tableau[i]) >= MAX_TAILLE - 1 || strlen(tableau[i]) == 0);
    }
}

void afficherMots(char** tableau) {
    for (int i = 0; i < MAX_MOTS; i++) {
        printf("%s", tableau[i]);
        if (i != MAX_MOTS - 1) printf(", "); //Pour que la virgule ne s'affiche pas a la fin
    }
}

int main() {
    char** tableau = NULL;
    tableau = tableau10Mots();
    saisieMots(tableau);
    afficherMots(tableau);
    for (int i = 0; i < MAX_MOTS; i++) {
        free(tableau[i]);
    }
    free(tableau);
    return 0;
}
