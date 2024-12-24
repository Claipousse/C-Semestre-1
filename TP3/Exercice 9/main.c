#include <stdio.h>
int main() {
     int nb_pierres;
     int nouvel_etage;
     int nb_pierre_origine;
     int i = 1;

     printf("Combien de pierres avez vous?\n");
     scanf("%d", &nb_pierres);
     nb_pierre_origine = nb_pierres; /*Comme variable nombre de pierre va changer,
                                     on sauvegarde nb original de pierre dans un autre variable,
                                     utile seulement pour phrase à la fin*/

     while(nb_pierres >= i*i) {         //(=Tant que le nombre de pierre n'est pas suffisant pour construire un étage supplémentaire)
          nouvel_etage = i*i;
          nb_pierres -= nouvel_etage; //On soustrait au nombre de pierres les pierres utilisés pour creer un nouvel etage
          i++; // i = i + 1
     }
    i--; //SUPER IMPORTANT, A cause de while, il y a une itération en trop, permet de corriger ce probleme
    printf("Avec %d pierres, on peut faire %d etages.\n", nb_pierre_origine, i);
    return 0;
}