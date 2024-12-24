#include <stdio.h>

int main()
{
    char carac1, carac2, temp;
    printf("Donner deux caracteres carac1 et carac2\n");
    scanf("%c", &carac1, &carac2);
    printf("La valeur des carac1 et carac2 avant la permutation est %c et %c\n", carac1, carac2);
    temp = carac1;
    carac1 = carac2;
    carac2 = temp;
    printf("La valeur des carac1 et carac2 apres permutation est %c et %c\n", carac1, carac2);
    return 0;
}

