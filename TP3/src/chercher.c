#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 100

int main() {
    int tableau[TAILLE];
    int i, valeurRecherchee;
    int trouve = 0; // Flag pour savoir si l'entier est trouvé

    // Initialisation de la graine pour rand()
    srand((unsigned int)time(NULL));

    // Remplissage du tableau avec des valeurs aléatoires entre -50 et 100
    for (i = 0; i < TAILLE; i++) {
        tableau[i] = rand() % 151 - 50; // Valeurs de -50 à 100
    }

    // Affichage du tableau
    printf("Tableau :\n");
    for (i = 0; i < TAILLE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n\n");

    // Demande de l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &valeurRecherchee);

    // Recherche de l'entier dans le tableau
    for (i = 0; i < TAILLE; i++) {
        if (tableau[i] == valeurRecherchee) {
            trouve = 1; // L'entier est présent
            break;      // On peut arrêter la boucle dès qu'on trouve l'entier
        }
    }

    // Affichage du résultat
    if (trouve) {
        printf("Résultat : entier présent\n");
    } else {
        printf("Résultat : entier absent\n");
    }

    return 0;
}
