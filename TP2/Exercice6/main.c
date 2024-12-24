#include <stdio.h>

int main()
{
    int res = 1, i = 1, n = 0;
    printf("Saisissez un nombre entier\n");
    scanf("%d", &n);
    for (i = 1; i <= 5; i++) {
        res = res * n;
    }
    printf("Resultat :" "%d", res);
    return 0;
}
