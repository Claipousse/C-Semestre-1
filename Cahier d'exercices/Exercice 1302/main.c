#include <stdio.h>
#define TAILLE_PHYS 3

typedef struct {
    char carac;
    int tab[TAILLE_PHYS];
} Structure;

Structure saisie() {
    Structure s;
    printf("Saisissez un caractere :\n");
    scanf("%c", &s.carac);
    for (int i = 0; i < TAILLE_PHYS; i++) {
        printf("Saisissez la valeur %d (%d valeurs a saisir) :\n", i + 1, TAILLE_PHYS);
        scanf("%d", &s.tab[i]);
    }
    return s;
}

void affichage(Structure s) {
    printf("Caractere saisit: %c\n", s.carac);
    printf("Valeurs du tableau: ");
    for (int i = 0; i < TAILLE_PHYS; i++) {
        printf("%d ", s.tab[i]);
    }
}

int main() {
    Structure s = saisie();
    affichage(s);
    return 0;
}