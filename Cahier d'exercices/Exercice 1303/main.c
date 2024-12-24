#include <stdio.h>
#define NB_NOTES 5

typedef struct note {
    int id, cpostal, anaissance;
    float notes[NB_NOTES];
} t_etudiant;

int existeDeja(t_etudiant tab[], int id, int n) {
    for (int i = 0; i < n; i++) {
        if (tab[i].id == id) {
            
}



t_etudiant saisieValeur() {
    t_etudiant etudiant;
    printf("Entrez l'ID de l'etudiant");
    scanf("%d", &etudiant.id);
    if (etudiant.id )

}