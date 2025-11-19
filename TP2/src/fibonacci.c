#include <stdio.h>

int main() {
    int n, i;
    
    // Demande à l'utilisateur de saisir le nombre de termes
    printf("Entrez le nombre de termes de la suite de Fibonacci : ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Entrée invalide. Veuillez entrer un entier positif.\n");
        return 1;
    }

    // Cas particulier si n >= 1
    unsigned long long fib0 = 0, fib1 = 1, nextFib;

    printf("Suite de Fibonacci jusqu'au terme %d :\n", n);

    for (i = 0; i < n; i++) {
        if (i == 0) {
            printf("%llu", fib0);
        } else if (i == 1) {
            printf(", %llu", fib1);
        } else {
            nextFib = fib0 + fib1;
            printf(", %llu", nextFib);
            fib0 = fib1;
            fib1 = nextFib;
        }
    }

    printf("\n");
    return 0;
}

