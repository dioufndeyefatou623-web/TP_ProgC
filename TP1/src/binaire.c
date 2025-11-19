#include <stdio.h>

void afficherBinaire(unsigned int n) {
    int i;

    // On affiche 32 bits (taille standard d'un int)
    for (i = 31; i >= 0; i--) {
        // On vérifie si le bit i est activé
        unsigned int masque = 1u << i;
        printf("%d", (n & masque) ? 1 : 0);

        // Ajout d'un espace tous les 4 bits pour lisibilité
        if (i % 4 == 0) {
            printf(" ");
        }
    }

    printf("\n");
}

int main() {

    unsigned int valeurs[] = {0, 1024, 4096, 65535, 65536};
    int taille = sizeof(valeurs) / sizeof(valeurs[0]);

    printf("=== Affichage en binaire ===\n\n");

    for (int i = 0; i < taille; i++) {
        printf("Valeur : %u\n", valeurs[i]);
        afficherBinaire(valeurs[i]);
        printf("\n");
    }

    return 0;
}
