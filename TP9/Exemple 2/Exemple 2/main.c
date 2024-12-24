#include <stdio.h>

int main(void) {
    const int nbNumbers = 5;
    float numbers[5] = {3.43, 6.354, 5.6, 123.23, 64.2};
    FILE* pf = NULL;
    if ((pf = fopen("../../binaire.dat", "wb")) == NULL) {
        printf("Erreur d'ouverture du fichier.\n");
        return 0;
    }
    fwrite(&nbNumbers, sizeof(int), 1, pf);
    if (fwrite(numbers, sizeof(float), nbNumbers, pf) != nbNumbers) {
        printf("Problème d'écriture dans le fichier.\n");
    }
    fclose(pf);
    pf = NULL;
    return 0;
}