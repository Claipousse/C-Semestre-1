#include <stdio.h>

int main(void) {
    int n;
    printf("Combien d'entiers naturels voulez-vous?\n");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    return 0;
}