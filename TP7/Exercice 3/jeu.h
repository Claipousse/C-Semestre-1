#ifndef JEU_H
#define JEU_H
#define TAILLE_MAX 30
int menu(int nb_parties, int *min, int *max, int *nombre_joueurs, char *choix, int *choix_menu, char nom1[TAILLE_MAX], char nom2[TAILLE_MAX]);
int saisieChoixMenu(int choix_menu, int nb_parties);
int nombreJoueurs(char *nom1[TAILLE_MAX], char *nom2[TAILLE_MAX]);
void saisieMinMax(int *min, int *max);
int nombreJoueurs();
char choixAide();
int getRandomInteger(int min, int max);
void PlusOuMoins(int n, int but, int max, int min);
void bouillant(int n, int but, int min, int max);
int tourJoueurs(int nb_tours, char nom1[TAILLE_MAX], char nom2[TAILLE_MAX]);
int ModifierNomJoueurs();

#endif