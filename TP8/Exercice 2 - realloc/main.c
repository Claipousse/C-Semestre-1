#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

float* saisieTableau(int capacite) {
    float* notes = (float*) malloc(capacite * sizeof(float));
    assert(notes != NULL);
    return notes;
}

int main(void) {
    int n = 0, capacite = 1; //n : nombres de notes, capacite : capacité du tableau, qui va s'incrémenter et va etre utilisée dans realloc
    float somme = 0; //Pour calculer la moyenne
    float* notes = saisieTableau(capacite);
    float* temp = NULL;

    while (1) {
        printf("Saisir la note %d : (-1 pour quitter)\n", n + 1);
        scanf("%f", &notes[n]);

        if (notes[n] == -1) break;

        if (notes[n] < 0 || notes[n] > 20) {
            printf("Note invalide, veuillez saisir une note entre 0 et 20.\n");
            continue; //Permet de sauter la suite de la boucle, pour ne pas que la capacité s'incremente, remplace la boucle do while
        }

        // Ajouter la note à la somme
        somme += notes[n];
        n++;

        if (n == capacite) {
            capacite ++;
            temp = (float*) realloc(notes, capacite * sizeof(float));
            if (temp == NULL) {
                printf("Erreur de réallocation de mémoire");
                free(notes); //Si allocation memoire echoue, on libere memoire pour pas avoir de fuite
                break;
            }
            notes = temp;
        }
    }
    if (n == 0) printf("Aucune note n'a été saisie");
    else printf("Moyenne: %0.2f\n", somme / (float)n);
    free(notes);//Warning normal, car il y a déjà un autre free en haut si allocation mémoire echoue
    return 0;
}
