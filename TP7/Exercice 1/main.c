#include <stdio.h>
#define MAX 20

void repetitions(char *tab) {
    char carac;
    int j = 0;
    printf("Saisir une chaine de caractere (Max 20 caracteres):\n");
    fgets(tab, MAX, stdin);
    printf("Saisissez un caractere:\n");
    scanf("%c", &carac);
    for (int i = 0; tab[i] != '\0'; i++) {
        if (tab[i] == carac) {
            j++;
        }
    }
    if (j != 0) {
        printf("L'element se repete %d fois", j);
    }
    else {
        printf("L'element n'est pas present dans la chaine de caractere\n");
    }
}
int main() {
    char tab[MAX];
    repetitions(tab);
    return 0;
}

