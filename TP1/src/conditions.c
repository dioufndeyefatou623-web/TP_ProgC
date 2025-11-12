#include <stdio.h>

int main() {
    int i;              // Variable de boucle
    int somme = 0;      // Accumulateur pour la somme

    printf("=== Début du calcul de la somme ===\n");

    // Parcours des nombres de 1 à 1000
    for (i = 1; i <= 1000; i++) {

        // Si divisible par 11 → on saute cette itération
        if (i % 11 == 0) {
            continue;
        }

        // Si divisible par 5 ou 7 → on l’ajoute à la somme
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // Si la somme dépasse 5000 → on arrête tout
        if (somme > 5000) {
            printf("Somme dépassée à %d (valeur actuelle : %d)\n", i, somme);
            break;
        }
    }

    // Affichage de la somme finale
    printf("=== Somme finale : %d ===\n", somme);

    return 0;
}
