#include <stdio.h>

int main(void) {
    int c;
    for (int i=0; i < 127; i++) {
        printf("%c, %d\n", c, i);
        c++;
    }
}
