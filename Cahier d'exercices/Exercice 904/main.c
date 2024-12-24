#include <stdio.h>
#include <math.h>

float calcul(int *min, int *max) {
    *min = HUGE_VAL;
    *max = -HUGE_VAL;
    int n = 0, somme = 0, i = 0;
    do {
        printf("Saisissez un entier negatif :\n");
        scanf("%d", &n);

        if (n > 0) {
            break;
        }
        somme = somme + n; //somme+=n;
        i++;
        if (n < *min) { //-5 et -9
            *min = n;
        }
        if (n > *max) {
            *max = n;
        }
    } while (n <= 0);

    return somme / i;
}

int main() {
    int minimum = 0, maximum = 0;
    float moyenne = 0;
    moyenne = calcul(&minimum, &maximum);
    printf("Moyenne : %f\n", moyenne);
    printf("Minimum : %d\n", minimum);
    printf("Maximum : %d\n", maximum);
    return 0;
}