#include <stdio.h>

int main() {
    int n, i;  // n : nombre de termes à générer, i : compteur de boucle
    unsigned long long fib0 = 0, fib1 = 1, nextFib; // Variables pour calculer la suite

    // 1. Demander à l'utilisateur de saisir le nombre de termes
    printf("Entrez le nombre de termes de la suite de Fibonacci : ");
    if (scanf("%d", &n) != 1 || n < 1) { // Vérifie que l'entrée est valide et positive
        printf("Entrée invalide. Veuillez entrer un entier positif.\n");
        return 1; // Quitte le programme en cas d'erreur
    }

    // 2. Afficher un message indiquant le début de la suite
    printf("Suite de Fibonacci jusqu'au terme %d :\n", n);

    // 3. Boucle pour générer et afficher les termes
    for (i = 0; i < n; i++) {
        if (i == 0) {
            // Premier terme de la suite
            printf("%llu", fib0);
        } else if (i == 1) {
            // Deuxième terme de la suite
            printf(", %llu", fib1);
        } else {
            // Calcul des termes suivants
            nextFib = fib0 + fib1;  // Un = Un-1 + Un-2
            printf(", %llu", nextFib);

            // Mise à jour des variables pour le prochain calcul
            fib0 = fib1;
            fib1 = nextFib;
        }
    }

    // 4. Retour à la ligne après l'affichage de tous les termes
    printf("\n");

    return 0;
}


