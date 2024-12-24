#include <stdio.h>

void Procedure(int* entier, float* reel) {
    *entier = 0;
    *reel = 0;
    printf("%d et %0.2f\n", *entier, *reel);
}

int main(void) {
    int e = 7;
    int r = 12.5;
    Procedure(&e, &r);
    printf("En sortant de la procedure, on a %d et %0.2f", e, r);
    return 0;
}
