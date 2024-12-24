#include "803.h"

int minute_suivante(int minute) {
    if (minute == 59) {
        return 0;
    }
    else {
        return minute + 1;
    }
}

int heure_suivante(int heure) {
    if (heure == 23) {
        return 0;
    }
    else {
        return heure + 1;
    }
}