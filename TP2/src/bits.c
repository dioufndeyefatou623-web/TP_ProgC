#include <stdio.h>

int main(void) {

    int d = 0x00F00000;

    int bit4  = (d >> (31 - 3)) & 1;
    int bit20 = (d >> (31 - 19)) & 1;

    int resultat = (bit4 == 1 && bit20 == 1) ? 1 : 0;

    printf("%d\n", resultat);

    return 0;
}

