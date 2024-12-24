#include <stdio.h>

int main()
{
    int i=0, a=0, b=0, somme=0;
    do {
        printf("Saissisez l'entier A\n :");
        scanf("%d", &a);
        printf("Saisissez l'entier B\n :", b);
        scanf("%d", &b);
    }

    while (a>b);
    for(i=a ; i<=b; i++)
        {
        somme = somme + i;
    }
    printf("La somme des nombre entre %d et %d est %d \n ", a, b, somme);
    return 0;
}
