#include <stdio.h>

int main(void) {
    int annee;
    int note1, note2, note3;
    float moyenne;
    printf("Bonjour\n");
    printf("En quelle annee sommes-nous?\n");
    scanf("%d", &annee);
    printf("L'annee en cours est %d.\n", annee);
    printf("%d\n", - annee);

    printf("Saisissez la 1ere note:\n");
    scanf("%d", &note1);
    printf("Saisissez la 2eme note:\n");
    scanf("%d", &note2);
    printf("Saisissez la 3eme note:\n");
    scanf("%d", &note3);
    moyenne = (note1 + note2 + note3) / 3;
    printf("%d %d %d %0.2f", note1, note2, note3, moyenne);
    return 0;
}