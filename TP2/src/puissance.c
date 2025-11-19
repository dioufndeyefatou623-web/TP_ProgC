/*
 * Programme : puissance.c
 * Objectif  : Calculer a^b sans utiliser pow() et sans saisie utilisateur.
 * Auteur    : (Ton nom)
 */

#include <stdio.h>

int main(void) {
    int a = 2;       // Base
    int b = 3;       // Exposant
    int resultat = 1;

    // Affichage initial
    printf("=== Calcul de la puissance ===\n");
    printf("Base (a)      : %d\n", a);
    printf("Exposant (b)  : %d\n", b);

    // Vérification d'erreur : exposant négatif interdit pour un résultat entier
    if (b < 0) {
        printf("Erreur : l'exposant ne peut pas etre negatif.\n");
        return 1;   // Fin du programme avec erreur
    }

    // Calcul de a^b
    for (int i = 0; i < b; i++) {
        resultat *= a;
    }

    // Résultat final
    printf("Resultat (a^b) : %d\n", resultat);
    printf("=== Calcul termine ===\n");

    return 0;
}


