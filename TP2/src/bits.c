#include <stdio.h>
#include <limits.h>

int main(void) {

    int d = 0x00F00000;

    printf("=== Verification des bits ===\n");
    printf("Valeur de d : %d\n", d);

    int bitGauche4  = 31 - 3;
    int bitGauche20 = 31 - 19;

    int valeurBit4  = (d >> bitGauche4) & 1;
    int valeurBit20 = (d >> bitGauche20) & 1;

    printf("Valeur du 4eme bit  (depuis la gauche)  : %d\n", valeurBit4);
    printf("Valeur du 20eme bit (depuis la gauche) : %d\n", valeurBit20);

    int resultat = (valeurBit4 == 1 && valeurBit20 == 1) ? 1 : 0;

    printf("Resultat final : %d\n", resultat);
    printf("=== Verification terminee ===\n");

    return 0;
}



