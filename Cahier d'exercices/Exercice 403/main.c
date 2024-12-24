#include <stdio.h>
#define A 65
#define a 97
int main(void) {
    char carac;
    printf("Saisissez une lettre minuscule:\n");
    scanf("%c", &carac);
    if (carac < 97 || carac > 122) {
        printf("Le caractere saisi n'est pas une lettre minuscule...\n");
    }
    else {
        carac -= a - A;
        printf("Le caractere converti en majuscule est %c.\n", carac);
    }
    return 0;
}
