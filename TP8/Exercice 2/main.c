#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

float* notesAllouée(int* n) {
    printf("Combien de notes voulez-vous?\n");
    scanf("%d",n);
    float* notes = (float*) calloc(*n, sizeof(float));
    assert(notes != NULL);
    return notes;
}

int main() {
    int n;
    float *notes = NULL;
    float somme = 0;
    notes = notesAllouée(&n);
    for (int i = 0; i < n; i++) {
        do {
            printf("Saisissez la note numero %d :\n", i+1);
            scanf("%f",&notes[i]);
        } while (notes[i] < 0 || notes[i] > 20);
        somme += notes[i];
    }
    printf("La moyenne est de %0.2f", somme / (float)n);
    free(notes);
    return 0;
}