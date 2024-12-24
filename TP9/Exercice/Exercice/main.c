#include <stdio.h>
#include <stdlib.h>
#define NB_ETUDIANT 2
#define TAILLE_MAX_NOM 30

//Question 1
typedef struct {
    char nom[TAILLE_MAX_NOM];
    float noteMaths;
    float noteInfo;
    float notePhysique;
} Etudiant;

//Utile pour plus tard, permet d'avoir la nombre d'étudiants en format size_t et non en constante (utile pour fwrite)
size_t nombreEtudiants() {
    size_t nb_etudiants = NB_ETUDIANT;
    return nb_etudiants;
}

//Question 2
void saisieValeurs(Etudiant liste_etudiant[NB_ETUDIANT]) {
    for (int i = 0; i < NB_ETUDIANT; i++) {
        printf("Saisissez le nom de l'etudiant %d:\n", i+1);
        scanf("%s", liste_etudiant[i].nom);

        do {
            printf("Saisissez sa note de Math :\n");
            scanf("%f", &liste_etudiant[i].noteMaths);
        } while (liste_etudiant[i].noteMaths < 0 || liste_etudiant[i].noteMaths > 20);

        do {
            printf("Saisissez sa note d'Informatique :\n");
            scanf("%f", &liste_etudiant[i].noteInfo);
        } while (liste_etudiant[i].noteInfo < 0 || liste_etudiant[i].noteInfo > 20);

        do {
            printf("Saisissez sa note de Physique :\n");
            scanf("%f", &liste_etudiant[i].notePhysique);
        } while (liste_etudiant[i].notePhysique < 0 || liste_etudiant[i].notePhysique > 20);

        printf("\n");
    }
}

//Question 3: Fichier Texte
void sauvegardeListeTexte(Etudiant liste_etudiant[NB_ETUDIANT]) {
    FILE* pf = fopen("../../Etudiants.txt", "w");
    if (pf == NULL) {
        printf("Erreur d'ouverture du fichier.\n");
        exit(1);
    }
    fprintf(pf, "Nombre d'étudiant : %d\n",NB_ETUDIANT);
    for (int i = 0; i < NB_ETUDIANT; i++) {
        fprintf(pf,"Etudiant %d :\n", i+1);
        fprintf(pf,"Nom : %s\n",liste_etudiant[i].nom);
        fprintf(pf,"Note en Math : %0.2f\n",liste_etudiant[i].noteMaths);
        fprintf(pf,"Note en Informatique : %0.2f\n",liste_etudiant[i].noteInfo);
        fprintf(pf,"Note en Physique : %0.2f\n\n", liste_etudiant[i].notePhysique);
    }
    fclose(pf);
    pf = NULL;
}

//Question 3: Fichier Binaire
void sauvegardeListeBinaire(Etudiant liste_etudiant[NB_ETUDIANT], size_t nb_etudiants) {
    FILE* pfbinaire = fopen("../../Etudiants.dat", "wb");
    if (pfbinaire == NULL) {
        printf("Erreur d'ouverture du fichier.\n");
        exit(1);
    }
    fwrite(&nb_etudiants, sizeof(size_t), 1, pfbinaire); //On écrit en premier le nombre d'étudiants
    fwrite(liste_etudiant, sizeof(Etudiant), nb_etudiants, pfbinaire); //On ecrit les données des étudiants
    fclose(pfbinaire);
}

//Question 4:
Etudiant* creationTableauDynamique() {
    FILE* pfbinaire = fopen("../../Etudiants.dat", "rb");
    if (pfbinaire == NULL) {
        printf("Erreur d'ouverture du fichier.\n");
        exit(1);
    }

}

int main() {
    Etudiant liste[NB_ETUDIANT];
    size_t nb_etudiants = nombreEtudiants();
    saisieValeurs(liste);
    sauvegardeListeTexte(liste);
    sauvegardeListeBinaire(liste, nb_etudiants);
    return 0;
}