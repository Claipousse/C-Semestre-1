#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAILLE_MAX 30

int nombreJoueurs(char *nom1, char *nom2) {
    int nombreJoueurs = 0;

    do {
        printf("Combien y a-t-il de joueurs? (1 ou 2)\n");
        scanf(" %d", &nombreJoueurs);
        while (getchar() != '\n');
    } while (nombreJoueurs < 1 || nombreJoueurs > 2);

    if (nombreJoueurs == 2) {
        printf("Saisissez le nom du premier joueur: ");
        scanf("%s", nom1);
        printf("Saisissez le nom du deuxieme joueur: ");
        scanf("%s", nom2);
    }

    printf("\n");
    return nombreJoueurs;
}

int tourJoueurs(int nb_tours, char nom1[TAILLE_MAX], char nom2[TAILLE_MAX]) {
    printf("\nC'est au tour de %s", nb_tours % 2 == 0 ? nom1 : nom2);
    return nb_tours + 1;
}

void saisieMinMax(int *min, int *max) {
    // Saisie des min et max
    printf("===========Saisie de l'intervalle===========\n");
    do {
        printf("\nSaisissez un Minimum :");
        scanf("%d", min);
        printf("Saisissez un Maximum :");
        scanf("%d", max);
    } while (*max < *min);
}

char choixAide() {
    char choix;
    do { // Permet de savoir si le joueur veut de l'aide
        printf("Voulez-vous de l'aide lors de la partie ? (y/n)\n");
        scanf(" %c", &choix);
    } while (choix != 'y' && choix != 'n');
    return choix;
}

int getRandomInteger(int min, int max) {
    return min + rand() % (max - min + 1); // Le +1 sert à ce que le max soit compris dans l'intervalle
}

void PlusOuMoins(int n, int but, int max, int min) {
    if (n >= min && n <= max) {
        if (n < but) printf("C'est plus!\n");
        else if (n > but) printf("C'est moins!\n");
    }
}

void bouillant(int n, int but, int min, int max) { // Permet de donner un indicateur si le joueur est proche ou non du but
    if (n >= min && n <= max && abs(n - but) <= ceil(max * 0.005)) {
        printf("C'est bouillant!\n");
    }
}

int rejouer() {
    char choix;
    do {
        printf("Voulez-vous rejouer ? (y/n)\n");
        scanf(" %c", &choix);
        while (getchar() != '\n');
    } while (choix != 'y' && choix != 'n');
    return choix == 'y' ? 1 : 0; // Choix est-il égal à y? Si oui, return 1, sinon, return 0
}

int ModifierNomJoueurs() {
    char choix = 0;
    do {
        printf("Voulez-vous modifier le nombre ou le nom des joueurs? (y/n)\n");
        scanf(" %c", &choix);
        while(getchar()!='\n');
    } while (choix != 'y' && choix != 'n');
    return (choix == 'y') ? 1 : 0;
}

int menu(int nb_parties, int *min, int *max, int *nombre_joueurs, char *choix, int *choix_menu, char nom1[TAILLE_MAX], char nom2[TAILLE_MAX]) {
    do {
        printf("=============================JEU DE LA DEVINETTE=============================\n");
        printf("1. Jouer\n");
        if (nb_parties > 0) printf("2. Changer les parametres\n");
        printf("%d. Quitter\n", nb_parties == 0 ? 2 : 3);
        scanf("%d", choix_menu);

        if(*choix_menu < 1 || *choix_menu > (nb_parties == 0 ? 2 : 3)) {
            printf("Veuillez saisir un choix valide.\n");
        }
    } while (*choix_menu < 1 || *choix_menu > (nb_parties == 0 ? 2 : 3));

    if (*choix_menu == (nb_parties == 0 ? 2 : 3)) {
        printf("Merci d'avoir joue !\n");
        return 0;
    }

    if (*choix_menu == 2) {
        // Proposer les options de modification des paramètres
        int choix_parametres;
        do {
            do {
                printf("\n===============Quel(s) parametre(s) voulez-vous changer ?===============\n");
                printf("1. Changer le nombre/nom des joueurs\n");
                printf("2. Changer l'intervalle de jeu\n");
                printf("3. Changer l'assistance 'Bouillant'\n");
                printf("4. Tout changer\n");
                printf("5. Quitter\n");
                printf("Votre choix : ");
                scanf("%d", &choix_parametres);
            } while (choix_parametres < 1 || choix_parametres > 5);

            switch (choix_parametres) {
                case 1:
                    *nombre_joueurs = nombreJoueurs(nom1, nom2);
                break;
                case 2:
                    saisieMinMax(min, max);
                break;
                case 3:
                    *choix = choixAide();
                break;
                case 4:
                    *nombre_joueurs = nombreJoueurs(nom1, nom2);
                saisieMinMax(min, max);
                *choix = choixAide();
                break;
                case 5:
                    break;
                default:
                    printf("Le choix saisi n'est pas correct !\n");
                break;
            }
        } while (choix_parametres != 5);
    }

    if (*choix_menu == 1 || *choix_menu == 2) {
        if (*choix_menu != 2 && nb_parties == 0) { // Si c'est la première partie, on demande les paramètres même si l'utilisateur veut jouer
            *nombre_joueurs = nombreJoueurs(nom1, nom2);
            saisieMinMax(min, max);
            *choix = choixAide();
        }
    }
    return 1; // Si le menu ne demande pas de quitter, il continue le jeu
}