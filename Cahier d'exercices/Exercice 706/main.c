#include <stdio.h>

int i, mois;
float epargne = 30;

int main() {
    printf("Pendant combien de mois voulez vous epargner?\n");
    scanf("%d", &mois);
    for (i = 1; i <= mois; i++) {
        epargne += epargne * 0.003;
    }
    printf("Au bout de %d mois, votre epargne est de %0.2f euros.\n", mois, epargne);
    return 0;
}
