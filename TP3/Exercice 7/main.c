#include <stdio.h>

int main() {
    int nombre_de_classes, nombre_eleves_par_classes, total_eleves = 0;
    printf("Saisissez le nombre de classes dans votre etablissement:\n");
    scanf("%d", &nombre_de_classes);
    for (int i=1; i<=nombre_de_classes; i++) {
        printf("Saisissez le nombre d'eleves dans la classe:\n");
        scanf("%d", &nombre_eleves_par_classes);
        total_eleves += nombre_eleves_par_classes;
    }
    printf("Le nombre total d'eleves dans cet etablissement est de %d.\n", total_eleves);
    return 0;
}
