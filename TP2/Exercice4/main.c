#include <stdio.h>

int main() {
    int n=0, i=0;
    printf("Saissisez un nombre entier:");
    scanf("%d",&n);
    printf("Les %d premiers entiers naturels impairs:", n);
    for(i=0; i<n; ++i) {
        printf("%d ", i*2+1);
    }
    return 0;
}
