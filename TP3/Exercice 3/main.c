#include <stdio.h>
#define MUL 3
int main() {
    int n;
    printf("Saisissez un nombre:\n");
    scanf("%d", &n);
    if (n > 10 && n % MUL == 0) {
        printf("%d est un multiple de 3 ET superieur à 10.", n);
    }
    else if (n > 10) {
        printf("%d est superieur à 10 mais multiple de 3", n);
    }
    else if (n % 3 == 0) {
        printf("%d est un multiple de 3 mais n'est pas superieur a 10", n);
    }
return 0;
}
