#include <stdio.h>

typedef struct {
    int numerateur, denominateur;
} NombreRationnel;

NombreRationnel saisieN1() {
    NombreRationnel n1;
    printf("Saisissez numerateur et un denominateur du premier nombre:");
    scanf("%d%d", &n1.numerateur, &n1.denominateur);
    return n1;
}

NombreRationnel saisieN2() {
    NombreRationnel n2;
    printf("Saisissez numerateur et un denominateur du deuxieme nombre:");
    scanf("%d%d", &n2.numerateur, &n2.denominateur);
    return n2;
}

void afficherRationnel(NombreRationnel n1, NombreRationnel n2) {
    float rationnel1 = (float)n1.numerateur / (float)n1.denominateur;
    float rationnel2 = (float)n2.numerateur / (float)n2.denominateur;
    printf("Le premier rationnel est %f,\nLe deuxieme rationnel est %f", rationnel1, rationnel2);
}

int main(NombreRationnel n1, NombreRationnel n2) {
    n1 = saisieN1();
    n2 = saisieN2();
    afficherRationnel(n1, n2);
    return 0;
}

