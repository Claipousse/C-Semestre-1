#include <stdio.h>

int main() {
    int numero = 0;
    int soda = 1;
    int jus_de_fruits = 2;
    int limonade = 3;
    int chocolat_chaud = 10;
    int cafe = 11;

    printf("Quel boisson voulez-vous (indiquez le numero).\n");
    scanf("%d", &numero);
    if (numero == soda) {
        printf("Vous desirez un soda n'est ce pas?");
    }
    else if (numero == jus_de_fruits) {
        printf("Vous desirez un jus de fruits n'est ce pas?");
    }
    else if (numero == limonade) {
        printf("Vous desirez une limonade n'est ce pas?");
    }
    else if (numero == chocolat_chaud) {
        printf("Vous desirez un chocolat chaud n'est ce pas?");
    }
    else if (numero == cafe) {
        printf("Vous desirez un chocolat chaud n'est ce pas?");
    }
    else {
        printf("Nous ne trouvons pas la boisson que vous voulez, dsl :(");
    }
    return 0;
}
