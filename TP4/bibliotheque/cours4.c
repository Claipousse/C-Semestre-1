#include "cours4.h"
#include <stdio.h>
#include <stdbool.h>
#define CONST 10


int getMax(int a, int b) {
    return (a>b)? a : b;
}

int saisirEntier() {
    int entier;
    printf("Saisissez un entier :\n");
    scanf("%d", &entier);
    return entier;
}

int calculAire(int longueur, int largeur) {
    int aire = longueur * largeur;
    return aire;
}

int calculPerimetre(int longueur, int largeur) {
    int perimetre = (longueur + largeur) * 2;
    return perimetre;
}

int estMultiple(int a, int b) {
    if (b !=0 && a % b == 0) {
        return true; // Equivalent à return 1; Necessite bibliothèque stdbool.h
    }
    else {
        return false; // Equivalent à return 0; Necessite bibliotheque stdbool.h
    }
}

int calculMoyenne(int note1, int note2, int note3) {
    if (note1 >= 0 && note1 <= 20 && note2 >= 0 && note2 <= 20 && note3 >= 0 && note3 <= 20) {
        return (note1 + note2 + note3) / 3;
    }
    else {
        return -1;
    }
}

int calculNbEleves(nombre_de_classes) {
    int nombre_eleves_par_classes;
    int total_eleves = 0;
    for (int i=1; i<=nombre_de_classes; i++) {
        printf("Saisissez le nombre d'eleves dans la classe numero %d :\n", i);
        scanf("%d", &nombre_eleves_par_classes);
        total_eleves += nombre_eleves_par_classes;
    }
    return total_eleves;
}

int multiple2et7 (n) {
    while ( n % 2 != 0 || n % 7 != 0) {
        printf("%d n'est pas un multiple de 2 et de 7. Reessayez.\n",n);
        scanf("%d", &n);
    }
    return n;
}

int calculEtage(int nb_pierres) {
    int i = 1;
    while(nb_pierres >= i*i) {         //(=Tant que le nombre de pierre n'est pas suffisant pour construire un étage supplémentaire)
        int nouvel_etage = i*i;
        nb_pierres -= nouvel_etage; //On soustrait au nombre de pierres les pierres utilisés pour creer un nouvel etage
        i++; // i = i + 1
    }
    i--;
    return i;
}











