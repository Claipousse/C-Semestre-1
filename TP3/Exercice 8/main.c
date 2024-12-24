#include <stdio.h>

int main() {
    int n;
    printf("Saisissez un entier multiple de 2 et de 7\n");
    scanf("%d", &n);
    while ( n % 2 != 0 || n % 7 != 0) {
        printf("%d n'est pas un multiple de 2 et de 7. Reessayez.\n",n);
        scanf("%d", &n);
    }
    printf("%d est un multiple de 2 et de 7.\n", n);
    return 0;
}