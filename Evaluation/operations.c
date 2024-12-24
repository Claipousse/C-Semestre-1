#include "operations.h"
#include <stdio.h>

int addition(int a, int b) {
    return a + b; //Retourne la somme des deux entiers saisis précédemment dans le fichier main.c
}

int afficher_resultat(int somme) { //Comme c'est une procédure, pas de return
    printf("Le resultat de l'addition est : %d\n", somme);
}

int somme_multiple(int somme,int nnn) {
    for (int i = 1; i <= nnn; i++) {
        somme+=i; //A chaque itération, on rajoute la valeur de i à la somme, jusqu'à ce que i soit supérieur à nnn
    }
    return somme;
}


