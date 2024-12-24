#include <stdio.h>
int n = 2;
int main() {
    for (int i = 2; i <= 98; i+=4) {
        printf("%d\n", i);
    }
    return 0;
}

/* Avec une boucle while, on a:

int main() {
    int n = 2;
    while (n < 98) {
        printf("%d\n", n);
        n+=4;
    }
    return 0;
}
*/
