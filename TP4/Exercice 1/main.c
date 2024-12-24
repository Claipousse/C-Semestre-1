#include <stdio.h>
#include "C:\Users\cleme\Desktop\Programmes\TD4\bibliotheque\cours4.c"

int main() {
    int a, b;
    printf("Saisissez A :\n");
    scanf("%d", &a);
    printf("Saisissez B :\n");
    scanf("%d", &b);
    printf("Le plus grand nombre est %d.\n", getMax(a, b));
    return 0;
}
