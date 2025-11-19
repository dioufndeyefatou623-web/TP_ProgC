#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

// Fonction de recherche dichotomique
int rechercheDichotomique(int tableau[], int taille, int valeur) {
    int debut = 0;
    int fin = taille - 1;

    while (debut <= fin) {
        int milieu = debut + (fin - debut) / 2;

        if (tableau[milieu] == valeur) {
            return 1; // Entier trouvé
        } else if (tableau[milieu] < valeur) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }

    return 0; // Entier absent
}

int main() {
    int tableau[TAILLE];
    int i, valeurRecherchee;

    // Initialisation de la graine pour rand()
    srand((unsigned int)time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre 1 et 200
    for (i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 200 + 1; // 1 à 200
    }

    // Tri du tableau par ordre croissant (tri à bulles pour simplicité)
    for (i = 0; i < TAILLE - 1; i++) {
        for (int j = 0; j < TAILLE - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    // Affichage du tableau trié
    printf("Tableau trié :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Saisie de l'entier à rechercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeurRecherchee);

    // Recherche dichotomique
    if (rechercheDichotomique(tableau, TAILLE, valeurRecherchee)) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
