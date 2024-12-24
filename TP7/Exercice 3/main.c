#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "jeu.h"
#define TAILLE_MAX 30

int main(void) {
    srand(time(NULL)); // Permet à la fonction rand de marcher correctement, en créant un nombre différent à chaque exécution
    int min = 0, max = 0;
    int but = 0; // Variable contenant l'entier aléatoire
    int n = 0; // Variable pour saisir un nombre
    int nombre_joueurs = 0; // Pour jouer seul ou avec un ami
    int nb_tours = rand() % 2; // Permet que ce ne soit pas toujours au J1 de commencer à jouer
    int choix_menu = 0;
    int nb_parties = 0;
    char nom1[TAILLE_MAX], nom2[TAILLE_MAX], choix = 0;

    while (1) {
        if (!menu(nb_parties, &min, &max, &nombre_joueurs, &choix, &choix_menu, nom1, nom2)) break;
        but = getRandomInteger(min, max);

        while (1) { // Boucle infinie
            if (nombre_joueurs == 2) nb_tours = tourJoueurs(nb_tours, nom1, nom2);

            do {
                printf("\nSaisissez un nombre entre %d et %d :", min, max);
                scanf("%d", &n);
                if (n < min || n > max) printf("\nSaisissez un nombre dans l'intervalle !");
            } while (n < min || n > max);

            if (n == but) { // Si on trouve le nombre, on sort de la boucle via break
                printf("Bravo! Le nombre a deviner etait bien %d!\n\n", but);
                break;
            }

            PlusOuMoins(n, but, max, min);
            if (choix == 'y') bouillant(n, but, min, max);
        }
        nb_parties++;
    }
}