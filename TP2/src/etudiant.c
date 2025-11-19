#include <stdio.h>

int main() {
    // 1. Déclaration des tableaux pour stocker les informations des étudiants
    char noms[5][20] = {"Dupont", "Martin", "Durand", "Petit", "Moreau"};
    char prenoms[5][20] = {"Alice", "Bob", "Claire", "David", "Emma"};
    char adresses[5][50] = {
        "12 rue de Paris, Lyon",
        "45 avenue Victor Hugo, Paris",
        "78 boulevard Saint-Germain, Paris",
        "23 rue Lafayette, Marseille",
        "56 avenue de la Republique, Lille"
    };

    // Tableaux pour les notes des modules (Programmation en C et Système d'exploitation)
    float notes_progC[5] = {15.5, 12.0, 18.0, 14.5, 16.0};
    float notes_SE[5] = {14.0, 13.5, 17.5, 15.0, 16.5};

    // 2. Affichage des informations des étudiants
    printf("=== Informations des étudiants ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note en Programmation en C : %.2f\n", notes_progC[i]);
        printf("Note en Système d'exploitation : %.2f\n", notes_SE[i]);
        printf("-----------------------------------\n");
    }

    return 0;
}
