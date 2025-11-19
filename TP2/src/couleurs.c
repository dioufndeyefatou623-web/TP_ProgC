#include <stdio.h>

// 1. Définition de la structure pour représenter une couleur RGBA
struct Couleur {
    unsigned char rouge;   // Composant rouge (0-255)
    unsigned char vert;    // Composant vert (0-255)
    unsigned char bleu;    // Composant bleu (0-255)
    unsigned char alpha;   // Composant alpha (0-255)
};

int main() {
    // 2. Création et initialisation d'un tableau de 10 couleurs
    struct Couleur couleurs[10] = {
        {0xEF, 0x78, 0x12, 0xFF}, // Couleur 1
        {0x2C, 0xC8, 0x64, 0xFF}, // Couleur 2
        {0xFF, 0x00, 0x00, 0xFF}, // Couleur 3 (Rouge pur)
        {0x00, 0xFF, 0x00, 0xFF}, // Couleur 4 (Vert pur)
        {0x00, 0x00, 0xFF, 0xFF}, // Couleur 5 (Bleu pur)
        {0xFF, 0xFF, 0x00, 0xFF}, // Couleur 6 (Jaune)
        {0xFF, 0x00, 0xFF, 0xFF}, // Couleur 7 (Magenta)
        {0x00, 0xFF, 0xFF, 0xFF}, // Couleur 8 (Cyan)
        {0x80, 0x80, 0x80, 0xFF}, // Couleur 9 (Gris)
        {0xFF, 0xA5, 0x00, 0xFF}  // Couleur 10 (Orange)
    };

    // 3. Affichage des couleurs
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].rouge);
        printf("Vert : %d\n", couleurs[i].vert);
        printf("Bleu : %d\n", couleurs[i].bleu);
        printf("Alpha : %d\n", couleurs[i].alpha);
        printf("---------------------------\n");
    }

    return 0;
}
