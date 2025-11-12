#include <stdio.h>

int main() {
    int compteur = 5;  // Taille du triangle (modifiable, doit être < 10)

    printf("=== Triangle rectangle avec boucles for ===\n");

    // Boucle externe : lignes du triangle
    for (int i = 1; i <= compteur; i++) {
        // Boucle interne : colonnes (affiche des symboles selon la ligne)
        for (int j = 1; j <= i; j++) {

            // Conditions pour alterner les symboles selon la ligne
            if (i == 1) {
                printf("* ");
            } else if (i == 2) {
                if (j == 1 || j == i)
                    printf("* ");
                else
                    printf("* "); // ici pas de # encore
            } else if (i == 3) {
                if (j == 1 || j == i)
                    printf("* ");
                else
                    printf("# ");
            } else if (i == 4) {
                if (j == 1 || j == i)
                    printf("* ");
                else
                    printf("# ");
            } else {
                printf("* ");
            }
        }
        printf("\n");  // Saut de ligne après chaque ligne du triangle
    }

    return 0;
}
