#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11 // Taille des tableaux

int main() {
    int tableauInt[TAILLE];
    float tableauFloat[TAILLE];

    srand(time(NULL)); // Initialisation de la graine pour rand()

    // 1. Remplissage des tableaux avec des valeurs aléatoires
    for (int i = 0; i < TAILLE; i++) {
        *(tableauInt + i) = rand() % 100 + 1;       // Entiers entre 1 et 100
        *(tableauFloat + i) = ((float)(rand() % 1000)) / 100.0f; // Float entre 0.00 et 9.99
    }

    // 2. Affichage des tableaux avant multiplication
    printf("Tableau d'entiers (avant multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d", *(tableauInt + i));
        if (i < TAILLE - 1) printf(", ");
    }
    printf("\n");

    printf("Tableau de floats (avant multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f", *(tableauFloat + i));
        if (i < TAILLE - 1) printf(", ");
    }
    printf("\n");

    // 3. Multiplication par 3 des éléments dont l'indice est divisible par 2
    for (int i = 0; i < TAILLE; i += 2) { // Indices 0,2,4,...
        *(tableauInt + i) *= 3;
        *(tableauFloat + i) *= 3.0f;
    }

    // 4. Affichage des tableaux après multiplication
    printf("Tableau d'entiers (après multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%d", *(tableauInt + i));
        if (i < TAILLE - 1) printf(", ");
    }
    printf("\n");

    printf("Tableau de floats (après multiplication par 3) :\n");
    for (int i = 0; i < TAILLE; i++) {
        printf("%.2f", *(tableauFloat + i));
        if (i < TAILLE - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
