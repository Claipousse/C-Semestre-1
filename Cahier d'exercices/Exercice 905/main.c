#include <stdio.h>

float article(int *id, float *prix_ht, float *tva) {
    printf("Saisissez l'ID de l'article :");
    scanf("%d", *id);
    printf("Saisissez le prix unitaire HT :");
    scanf("%f", *prix_ht);
    printf("Saisissez la TVA (en pourcentage):");
    scanf("%f", *tva);
    return *prix_ht + *prix_ht * (*tva / 100);
}

int main(void) {
    int id = 0;
    float prix_ht = 0, tva = 0, prix_ttc = 0;
    prix_ttc = article(&id, &prix_ht, &tva);
    printf("\nID de l'article: %d\n", id);
    printf("Prix unitaire HT: %0.2f\n", prix_ht);
    printf("TVA: %0.0f\n", tva);
    printf("Prix TTC: %0.2f pourcent\n", prix_ttc);
    return 0;
}
