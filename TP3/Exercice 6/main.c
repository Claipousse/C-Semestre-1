#include<stdio.h>
#define NOTE_MAX 20.0f
#define NOTE_MIN 0.0f

float main(){

    float note1;
    float note2;
    float note3;
    float moyenne;

    do {

        printf ("Saisissez une premiere note entre 0 et 20.\n");
        scanf ("%f", &note1);
        if (note1 < NOTE_MIN || note1 > NOTE_MAX)
        {
            printf("Erreur, veuillez saisir une note entre 0 et 20.\n");
        }

    } while (note1 < NOTE_MIN || note1 > NOTE_MAX);


    do {

        printf("Saisissez une deuxieme note entre 0 et 20.\n");
        scanf("%f", &note2);
        if (note2 < NOTE_MIN || note2 > NOTE_MAX)
        {
            printf ("Erreur, veuillez saisir une note entre 0 et 20.\n");
        }

    } while (note2 < NOTE_MIN || note2 > NOTE_MAX);


    do {

        printf("Saisissez une troisieme note entre 0 et 20.\n");
        scanf("%f", &note3);
        if (note3 < NOTE_MIN || note3 > NOTE_MAX)
        {
            printf ("Erreur, veuillez saisir une note entre 0 et 20.\n");
        }

    } while (note3 < NOTE_MIN || note3 > NOTE_MAX);

    moyenne = (note1 + note2 + note3)/3.0f;
    printf("La moyenne des trois notes est de %f.\n", moyenne);
    return 0;
}