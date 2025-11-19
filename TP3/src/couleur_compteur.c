#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100  // Nombre de couleurs

// Structure pour une couleur RGBA
typedef struct {
    unsigned char R;
    unsigned char G;
    unsigned char B;
    unsigned char A;
} Couleur;

// Structure pour une couleur distincte et son compteur
typedef struct {
    Couleur couleur;
    int compteur;
} CouleurDistincte;

// Fonction pour comparer deux couleurs
int couleurEgale(Couleur c1, Couleur c2) {
    return (c1.R == c2.R) && (c1.G == c2.G) && (c1.B == c2.B) && (c1.A == c2.A);
}

int main() {
    Couleur tableau[N];
    CouleurDistincte distinctes[N]; // Au maximum N couleurs distinctes
    int nbDistinctes = 0;
    int i, j;
    int trouve;

    srand((unsigned int)time(NULL));

    // Remplissage du tableau avec des couleurs aléatoires
    for (i = 0; i < N; i++) {
        tableau[i].R = rand() % 256;
        tableau[i].G = rand() % 256;
        tableau[i].B = rand() % 256;
        tableau[i].A = rand() % 256;
    }

    // Comptage des couleurs distinctes
    for (i = 0; i < N; i++) {
        trouve = 0;
        // Vérifier si la couleur existe déjà
        for (j = 0; j < nbDistinctes; j++) {
            if (couleurEgale(tableau[i], distinctes[j].couleur)) {
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }
        // Si couleur non trouvée, l'ajouter aux distinctes
        if (!trouve) {
            distinctes[nbDistinctes].couleur = tableau[i];
            distinctes[nbDistinctes].compteur = 1;
            nbDistinctes++;
        }
    }

    // Affichage des couleurs distinctes et leur compteur
    printf("Couleurs distinctes et occurrences :\n");
    for (i = 0; i < nbDistinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinctes[i].couleur.R,
               distinctes[i].couleur.G,
               distinctes[i].couleur.B,
               distinctes[i].couleur.A,
               distinctes[i].compteur);
    }

    return 0;
}
