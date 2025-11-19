#include <stdio.h>

#define N 10
#define MAX_LEN 200 // Longueur maximale d'une phrase

// Fonction pour comparer deux chaînes caractère par caractère
int comparerPhrases(const char *p1, const char *p2) {
    int i = 0;
    while (p1[i] != '\0' && p2[i] != '\0') {
        if (p1[i] != p2[i]) {
            return 0; // Les phrases sont différentes
        }
        i++;
    }
    // Si les deux chaînes se terminent en même temps, elles sont identiques
    if (p1[i] == '\0' && p2[i] == '\0') {
        return 1; // Identiques
    }
    return 0; // Différentes si une chaîne est plus longue que l'autre
}

int main() {
    // Tableau de 10 phrases
    char *phrases[N] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char recherche[MAX_LEN];
    int trouve = 0;

    // Saisie de la phrase à rechercher
    printf("Entrez la phrase à rechercher :\n");
    fgets(recherche, MAX_LEN, stdin);

    // Suppression du caractère '\n' si présent
    int i = 0;
    while (recherche[i] != '\0') {
        if (recherche[i] == '\n') {
            recherche[i] = '\0';
            break;
        }
        i++;
    }

    // Parcours du tableau pour rechercher la phrase
    for (i = 0; i < N; i++) {
        if (comparerPhrases(phrases[i], recherche)) {
            trouve = 1;
            break;
        }
    }

    // Affichage du résultat
    if (trouve) {
        printf("Phrase trouvée.\n");
    } else {
        printf("Phrase non trouvée.\n");
    }

    return 0;
}
