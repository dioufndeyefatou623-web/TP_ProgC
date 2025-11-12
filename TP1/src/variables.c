#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int a = 16;
    int b = 3;

    // Opérations arithmétiques (entiers)
    printf("Addition : %d + %d = %d\n", a, b, a + b);
    printf("Soustraction : %d - %d = %d\n", a, b, a - b);
    printf("Multiplication : %d * %d = %d\n", a, b, a * b);
    printf("Division (entière) : %d / %d = %d\n", a, b, a / b);
    printf("Division (réelle) : %d / %d = %f\n", a, b, (double)a / (double)b);
    printf("Modulo : %d %% %d = %d\n", a, b, a % b);

    // Comparaisons (affichage lisible)
    bool eq = (a == b);
    bool gt = (a > b);
    bool lt = (a < b);
    bool ne = (a != b);

    printf("a == b ? %s\n", eq ? "true" : "false");
    printf("a > b ? %s\n", gt ? "true" : "false");
    printf("a < b ? %s\n", lt ? "true" : "false");
    printf("a != b ? %s\n", ne ? "true" : "false");

    // Exemples avec opérateurs logiques
    printf("(a > 0 && b > 0) ? %s\n", (a > 0 && b > 0) ? "true" : "false");
    printf("(a > 0 || b < 0) ? %s\n", (a > 0 || b < 0) ? "true" : "false");

    return 0;
}

