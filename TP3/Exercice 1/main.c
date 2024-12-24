#include <stdio.h>

int main()
{
    int a, b;
    printf("Choissisez un premier entier\n");
    scanf("%d", &a);
    printf("Choisissez un deuxieme entier\n");
    scanf("%d", &b);

    if (a > b) {
        printf("Le plus grand nombre est %d", a);
    }
    else if (a < b) {
        printf("Le plus grand nombre est %d", b);
    }
    return 0;
}
