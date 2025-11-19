#include <stdio.h>

int main() {
    int a = 2;       // Base
    int b = 3;       // Exposant
    int resultat = 1;

    printf("Calcul de %d puissance %d\n", a, b);

    // Gestion du cas exponent négatif (optionnel)
    if (b < 0) {
        printf("Erreur : l'exposant ne peut pas etre negatif pour un resultat entier.\n");
        return 1;
    }

    // Boucle de calcul de la puissance
    for (int i = 1; i <= b; i++) {
        resultat *= a;
    }

    // Affichage du résultat
    printf("Resultat : %d\n", resultat);

    return 0;
}
