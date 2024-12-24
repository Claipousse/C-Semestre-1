#include <stdio.h>
#define TAILLE_PYS 10

float tab_notes[TAILLE_PYS];

void saisieNotes(float tab_notes[TAILLE_PYS]) {
        for (int i = 0; i < TAILLE_PYS; i++) {
            do {
                printf("Entrer la note numero %d :", i + 1);
                scanf("%f", &tab_notes[i]);
            } while (tab_notes[i] < 0 || tab_notes[i] > 20);
    }
}


void affichageNotes(float tab_notes[TAILLE_PYS]) {
    for (int i = 0; i < TAILLE_PYS; i++) {
        printf("%0.2f ", tab_notes[i]);
    }
    printf("\n");
}


float saisieEtAffichage(float tab_notes[TAILLE_PYS]) {
    float somme = 0;
    saisieNotes(tab_notes);
    affichageNotes(tab_notes);
    for(int i = 0; i < TAILLE_PYS; i++) {
        somme += tab_notes[i]; // somme = somme + tab_notes[i]
    }
    return somme / TAILLE_PYS;
}


void rechercheMaxMin(float tab_notes[TAILLE_PYS], float *max, float *min) {
    *max = tab_notes[0];
    *min = tab_notes[0];

    for (int i = 0; i < TAILLE_PYS; i++) {
        if (tab_notes[i] > *max) {
            *max = tab_notes[i];
        }
        if (tab_notes[i] < *min) {
            *min = tab_notes[i];
        }
    }
}


int main(void) {
    float max, min, moyenne;
    moyenne = saisieEtAffichage(tab_notes);
    rechercheMaxMin(tab_notes, &max, &min);
    printf("Moyenne: %0.2f\n", moyenne);
    printf("Minimum: %0.2f\n", min);
    printf("Maximum: %0.2f\n", max);
    return 0;
}