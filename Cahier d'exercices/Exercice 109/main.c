#include <stdio.h>
int nombre_pieces, nombre_billets, montant, reste;
float argent_recu;
int main(void) {
    printf("Saisissez le montant des achats (entier):\n");
    scanf("%d", &montant);
    printf("Saisissez la somme d'argent recue: (Attention, ne pas ecrire les centimes avec virgule)\n");
    scanf("%f", &argent_recu);

    if (montant > argent_recu) {
        printf("Veuillez reessayer, la somme recue doit etre superieure ou egale au montant des achats.\n");
    }
    else {
        argent_recu-=montant; // On soustrait pour obtenir l'argent qu'il faut rendre
        argent_recu*=100; //On convertit les euros en centime, permet de ne plus avoir de nombres a virgules et donc de travailler avec des entiers
        reste = argent_recu; //Pour convertir la variable de float à integer
    }

    //500 euros
    nombre_billets = reste / 50000;
    if (nombre_billets > 0) {
        printf("%d billets de 500\n", nombre_billets);
        reste %= 50000;
    }

    //100 euros
    nombre_billets = reste / 10000;
    if (nombre_billets > 0) {
        printf("%d billets de 100\n", nombre_billets);
        reste %= 10000;
    }

    //50 euros
    nombre_billets = reste / 5000;
    if (nombre_billets > 0) {
        printf("%d billets de 50\n", nombre_billets);
        reste %= 5000;
    }

    //20 euros
    nombre_billets = reste / 2000;
    if (nombre_billets > 0) {
        printf("%d billets de 20\n", nombre_billets);
        reste %= 2000;
    }

    //10 euros
    nombre_billets = reste / 1000;
    if (nombre_billets > 0) {
        printf("%d billets de 10\n", nombre_billets);
        reste %= 1000;
    }

    //5 euros
    nombre_billets = reste / 500;
    if (nombre_billets > 0) {
        printf("%d billets de 5\n", nombre_billets);
        reste %= 500;
    }

    //2 euros
    nombre_pieces = reste / 200;
    if (nombre_pieces > 0) {
        printf("%d pieces de 2\n", nombre_pieces);
        reste %= 200;
    }

    //1 euros
    nombre_pieces = reste / 100;
    if (nombre_pieces > 0) {
        printf("%d pieces de 1\n", nombre_pieces);
        reste %= 100;
    }

    //50 centimes
    nombre_pieces = reste / 50;
    if (nombre_pieces > 0) {
        printf("%d pieces de 50 centimes\n", nombre_pieces);
        reste %= 50;
    }

    //20 centimes
    nombre_pieces = reste / 20;
    if (nombre_pieces > 0) {
        printf("%d pieces de 20 centimes\n", nombre_pieces);
        reste %= 20;
    }

    //10 centimes
    nombre_pieces = reste / 10;
    if (nombre_pieces > 0) {
        printf("%d pieces de 10 centimes\n", nombre_pieces);
        reste %= 10;
    }

    //5 centimes
    nombre_pieces = reste / 5;
    if (nombre_pieces > 0) {
        printf("%d pieces de 5 centimes\n", nombre_pieces);
        reste %= 50;
    }

    //2 centimes
    nombre_pieces = reste / 2;
    if (nombre_pieces > 0) {
        printf("%d pieces de 2 centimes\n", nombre_pieces);
        reste %= 2;
    }

    //1 centime
    nombre_pieces = reste / 1;
    if (nombre_pieces > 0) {
        printf("%d pieces de 1 centime\n", nombre_pieces);
        reste %= 1;
    }
}