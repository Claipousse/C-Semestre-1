#include "projet.h"
#include <stdio.h>

#define NB_LIGNES 17
#define NB_COLONNES 17

char matrice[NB_LIGNES][NB_COLONNES];

void remplissageMatrice(char matrice[NB_LIGNES][NB_COLONNES]) {
    for (int i = 0; i < NB_LIGNES; i++) {
        for (int j = 0; j < NB_COLONNES; j++) {
            //Permet de mettre un blanc lorsque les lignes et les colonnes ont un index pair, pour que les cases soient correctement espacés
            (i % 2 == 0 && j % 2 == 0 ) ? (matrice[i][j] = ' ') : (matrice[i][j] = 0xB0);
        }
    }
}

void afficherMatrice(char matrice[NB_LIGNES][NB_COLONNES]) {
    char lettre = 65; // Lettre pour les lettres en haut (A, B, C, ...), 65 correspond à A sur la table ASCII
    int numero = 1; //Entier pour les numéros sur le coté (1, 2, 3, ...)

    // Affichage des lettres
    printf("  "); // Pour aligner les numéros avec les cases, purement esthétique
    for (int i = 0; i < NB_COLONNES; i++) {
        //On affiche une lettre seulement au dessus des cases vides. Si on affiche, alors on incrémente la valeur de lettre (A devient B, B devient C, ...)
        if (i % 2 == 0) printf(" %c ", lettre++);
        else printf(" "); //Sinon on laisse un espace
    }
    printf("\n");

    // Affichage des numéros, on utilise la meme stratégie que pour les lettres
    for (int i = 0; i < NB_LIGNES; i++) {
        if (i % 2 == 0)printf(" %d ", numero++); // Numéro de ligne
        else printf("   "); // Espaces pour les lignes non-valables

        //On affiche a present les valeurs de la matrice
        for (int j = 0; j < NB_COLONNES; j++) {
            printf("%c ", matrice[i][j]);
        }
        printf("\n");
    }
}
