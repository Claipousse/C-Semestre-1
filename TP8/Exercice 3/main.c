#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

void saisieDimensions(int *lignes, int *colonnes) {
    *lignes = 0, *colonnes = 0;
    printf("Combien de lignes ?\n");
    scanf("%d", lignes);
    printf("Combien de colonnes ?\n");
    scanf("%d", colonnes);
}

int** allouerTableau2D(int lignes, int colonnes) {
    int** tableau2D = (int**) calloc(lignes, sizeof(int*));
    for(int i = 0; i < lignes; i++) {
        tableau2D[i] = (int*) calloc(colonnes, sizeof(int));
    }
    assert(tableau2D != NULL);
    return tableau2D;
}

int** saisieRandom(int** tableau2D, int lignes, int colonnes ) {
    srand(time(NULL));
    for(int i = 0; i < lignes; i++) {
        for(int j = 0; j < colonnes; j++) {
            tableau2D[i][j] = rand() % 256;
        }
    }
    return tableau2D;
}

void affichageMatrice(int** tableau2D, int lignes, int colonnes) {
    for (int i = 0; i < lignes; i++) {
        printf("\n");
        for(int j = 0; j < colonnes; j++) {
            printf("%d ", tableau2D[i][j]);
        }
    }
    printf("\n");
}

int** trierMatrice(int** tableau2D, int lignes, int colonnes) {
    //On transforme valeur de la matrice en un nouveau tableau temporaire, car le tri d'un tableau est beaucoup + simple
    int total_elements = lignes * colonnes;
    int* tab_temp = calloc(total_elements, sizeof(int));
    int k = 0;

    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            tab_temp[k++] = tableau2D[i][j];
        }
    }
    for (int i = 0; i < total_elements - 1; i++) {
        for(int j = 0; j < total_elements - i - 1; j++) {
            //Si le terme avant est supérieur, on les change de sens (ex: 8, 3, 6 --> 3, 8, 6 --> 3, 6, 8)
            if(tab_temp[j] > tab_temp[j + 1]) {
                int temp = tab_temp[j];
                tab_temp[j] = tab_temp[j + 1];
                tab_temp[j + 1] = temp;
            }
        }
    }
    //On transforme le tableau en matrice, qui sera donc triée
    int** matriceTriee = allouerTableau2D(lignes, colonnes);
    k = 0;
    for (int i = 0; i < lignes; i++) {
        for(int j = 0; j < colonnes; j++) {
            matriceTriee[i][j] = tab_temp[k++];
        }
    }
    free(tab_temp);
    return matriceTriee;
}

int main(void) {
    int lignes = 0, colonnes = 0;
    int** tableau2D;
    int** matriceTriee;

    saisieDimensions(&lignes, &colonnes); //Saisie nombre lignes/colonnes
    tableau2D = allouerTableau2D(lignes, colonnes); //Création de la matrice
    tableau2D = saisieRandom(tableau2D, lignes, colonnes); //Affectation de valeurs aléatoires

    //Affichage matrice non-triée
    printf("\nMatrice non triee :");
    affichageMatrice(tableau2D, lignes, colonnes);

    //Affichage matrice triée
    matriceTriee = trierMatrice(tableau2D, lignes, colonnes);
    printf("\nMatrice triee :");
    affichageMatrice(matriceTriee, lignes, colonnes);

    free(tableau2D); //Libère l'espace
    return 0;
}