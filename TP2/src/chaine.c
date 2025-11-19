#include <stdio.h>

// Fonction pour calculer la longueur d'une chaîne
int longueur(const char *chaine) {
    int count = 0;
    while (chaine[count] != '\0') { // Parcours jusqu'au caractère nul
        count++;
    }
    return count;
}

// Fonction pour copier une chaîne source dans une chaîne destination
void copier(char *destination, const char *source) {
    int i = 0;
    while (source[i] != '\0') { // Copie caractère par caractère
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0'; // Ajout du caractère nul à la fin
}

// Fonction pour concaténer deux chaînes
void concatener(char *destination, const char *source) {
    int i = 0;
    // Trouver la fin de la chaîne destination
    while (destination[i] != '\0') {
        i++;
    }

    int j = 0;
    // Ajouter la chaîne source à la suite de la destination
    while (source[j] != '\0') {
        destination[i] = source[j];
        i++;
        j++;
    }

    destination[i] = '\0'; // Ajouter le caractère nul à la fin
}

int main() {
    char chaine1[100], chaine2[100], copie[100];

    // Saisie de la première chaîne
    printf("Entrez la première chaîne : ");
    fgets(chaine1, sizeof(chaine1), stdin);

    // Retirer le saut de ligne éventuel de fgets
    int len = longueur(chaine1);
    if (chaine1[len - 1] == '\n') {
        chaine1[len - 1] = '\0';
    }

    // Saisie de la deuxième chaîne
    printf("Entrez la deuxième chaîne : ");
    fgets(chaine2, sizeof(chaine2), stdin);
    len = longueur(chaine2);
    if (chaine2[len - 1] == '\n') {
        chaine2[len - 1] = '\0';
    }

    // Calculer la longueur de la première chaîne
    printf("Longueur de la première chaîne : %d\n", longueur(chaine1));

    // Copier la première chaîne
    copier(copie, chaine1);
    printf("Copie de la première chaîne : %s\n", copie);

    // Concaténer la première et la deuxième chaîne
    concatener(chaine1, chaine2);
    printf("Après concaténation : %s\n", chaine1);

    return 0;
}
