#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // --- Opérateurs arithmétiques ---
    printf("=== Operateurs arithmetiques ===\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // --- Opérateurs logiques / de comparaison ---
    printf("\n=== Operateurs logiques / de comparaison ===\n");
    printf("a == b : %d\n", a == b);
    printf("a > b  : %d\n", a > b);

    return 0;
}

