#include <stdio.h>
#include <string.h> // Pour utiliser strcpy

// 1. Définition de la structure représentant un étudiant
struct Etudiant {
    char nom[30];
    char prenom[30];
    char adresse[50];
    float note1; // Note en Programmation en C
    float note2; // Note en Système d'exploitation
};

int main() {
    // 2. Déclaration d'un tableau de 5 étudiants
    struct Etudiant etudiants[5];

    // 3. Initialisation des données pour chaque étudiant
    // Étudiant 1
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon");
    etudiants[0].note1 = 16.5;
    etudiants[0].note2 = 12.1;

    // Étudiant 2
    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon");
    etudiants[1].note1 = 14.0;
    etudiants[1].note2 = 14.1;

    // Étudiant 3
    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Claire");
    strcpy(etudiants[2].adresse, "5, Rue de la République, Paris");
    etudiants[2].note1 = 18.0;
    etudiants[2].note2 = 17.5;

    // Étudiant 4
    strcpy(etudiants[3].nom, "Petit");
    strcpy(etudiants[3].prenom, "David");
    strcpy(etudiants[3].adresse, "12, Avenue Victor Hugo, Marseille");
    etudiants[3].note1 = 14.5;
    etudiants[3].note2 = 15.0;

    // Étudiant 5
    strcpy(etudiants[4].nom, "Moreau");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "56, Rue Lafayette, Lille");
    etudiants[4].note1 = 16.0;
    etudiants[4].note2 = 16.5;

    // 4. Affichage des informations de chaque étudiant
    printf("=== Informations des étudiants ===\n\n");

    for (int i = 0; i < 5; i++) {
        printf("Étudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1 (Programmation en C) : %.2f\n", etudiants[i].note1);
        printf("Note 2 (Système d'exploitation) : %.2f\n", etudiants[i].note2);
        printf("-----------------------------------\n");
    }

    return 0;
}
