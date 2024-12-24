#include <stdio.h>
#define PRIX_BILLET 50

void prixBillet(int age, float *prix) {
    if (age < 5) {
        *prix = 0;
    }
    else if (age >= 5 && age <=17) {
        *prix = PRIX_BILLET * 0.25;
    }
    else if (age >= 18 && age <= 29) {
        *prix = PRIX_BILLET * 0.50;
    }
    else if (age >= 30 && age <= 60) {
        *prix = PRIX_BILLET;
    }
    else if (age > 60) {

    }
}