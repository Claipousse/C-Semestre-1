#include <stdio.h>
#include "operations.h" //Permet d'utiliser les fonctions/procédures créées dans operations.c
int a, b, somme, nnn; //On initialise les variables comme des entiers
int main() {
    printf("Entrez le premier nombre :");
    scanf("%d", &a);
    printf("Entrez le deuxieme nombre :");
    scanf("%d", &b);
    somme = addition(a, b);
    afficher_resultat(somme); //Appelle la procédure afficher_resultat pour afficher l'addition

    somme = 0; //On réinitialise la valeur de la variable somme, afin de l'utiliser pour la suite, permet d'eviter de créer 2 variables et donc d'allouer plus de mémoire sur le PC
    printf("Entrez un nombre pour calculer la somme de 1 a n : ");
    scanf("%d", &nnn); //La variable s'appelle nnn, car c'est ce que la consigne de l'évaluation veut
    somme = somme_multiple(somme, nnn); //Appelle la fonction somme_multiple afin d'effectuer l'opération
    printf("La somme des nombres de 1 a %d est : %d", nnn, somme);

    return 0;
}
