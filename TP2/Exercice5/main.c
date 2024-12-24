#include <stdio.h>

int main()
{
    int i = 1, n = 0;
    printf("Saissisez un nombre entier\n");
    scanf("%d",&n);
    printf("Entiers naturels impairs inferieurs a %d: \n", n);
    while(i<n)
    {
        printf("%d",i);
        i = i + 2;
    }
    return 0;
}
