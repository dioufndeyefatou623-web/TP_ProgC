#include <stdio.h>

int main() {
    int n = 5;  // Hauteur de la pyramide
    int i, j;

    printf("=== Generation de la pyramide ===\n\n");

    // Boucle sur chaque niveau
    for (i = 1; i <= n; i++) {

        // 1) Espaces pour centrer la pyramide
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // 2) Nombres croissants de 1 à i
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // 3) Nombres décroissants de i-1 à 1
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        // Passer à la ligne suivante
        printf("\n");
    }

    printf("\n=== Pyramide terminee ===\n");

    return 0;
}

