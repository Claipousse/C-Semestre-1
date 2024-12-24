#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandomInteger(int min, int max) {
    srand(time(NULL));
    return min + rand() % (max - min + 1); //+1 permet que le maximum soit inclus dans l'intervalle
}

int main(void) {
    int randomNumber = 0;
    int min = 50;
    int max = 100;
    randomNumber = getRandomInteger(min, max);
    printf("%d\n", randomNumber);
    return 0;
}
