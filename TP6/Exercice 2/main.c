#include <stdio.h>

void procedure(int a, int b, int* quotient, int* reste) {
    *reste = a % b;
    *quotient = a / b;
}

int fonction(int a, int b, int* quotient) {
    *quotient = a / b;
    return a % b;
}

int main() {
    int a = 17, b = 5 , r, q;
    procedure(a, b, &q, &r);    
    printf("Le quotient est %d et le reste est %d\n", q, r);
    r = fonction(a, b, &q);
    printf("Le quotient est %d et le reste est %d\n", q, r);
    return 0;
}

