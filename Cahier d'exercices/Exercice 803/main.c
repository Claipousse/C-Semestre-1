#include <stdio.h>
#include <unistd.h>
#include "803.h"
int minute, heure;
int main() {
    while (1) {
        printf("Horloge: %02d:%02d\n", heure, minute);
        sleep(1);

        minute = minute_suivante(minute);
        if (minute == 0) {
            heure = heure_suivante(heure);
        }
    }
}