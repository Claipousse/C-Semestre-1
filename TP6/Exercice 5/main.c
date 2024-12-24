#include <stdio.h>

//Initialisation de la structure
typedef struct {
    float x, y;
} Point;

void saisieCoordonnees(Point *p1, Point *p2) {
    printf("Saisissez les coordonnees x et y du premier point :\n");
    scanf("%f%f", &p1->x, &p1->y);
    printf("Saisissez les coordonnees x et y du second point :\n");
    scanf("%f%f", &p2->x, &p2->y);
}

void echange(Point *p1, Point *p2) {
    //Changement x
    float temp = p1->x;
    p1->x = p2->x;
    p2->x = temp;

    //Changement x
    temp = p1->y;
    p1->y = p2->y;
    p2->y = temp;
}

void afficher(Point *p1, Point *p2) {
    printf("Apres l'echange, on a :\n");
    printf("Coordonnees du 1er point: x:%0.2f y:%0.2f\n",p1->x, p1->y);
    printf("Coordonnees du 2nd point: x:%0.2f y:%0.2f\n",p2->x, p2->y);
}

int main(void) {
    Point p1, p2;
    saisieCoordonnees(&p1, &p2); //Saisie des valeurs
    echange(&p1, &p2); //Echange des coordonnées x et y
    afficher(&p1, &p2); //Affichage des valeurs
    return 0;
}