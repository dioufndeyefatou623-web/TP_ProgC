#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Opérations arithmétiques
    printf("Addition : %d + %d = %d\n", a, b, a + b);
    printf("Soustraction : %d - %d = %d\n", a, b, a - b);
    printf("Multiplication : %d * %d = %d\n", a, b, a * b);
    printf("Division : %d / %d = %d\n", a, b, a / b);
    printf("Modulo : %d %% %d = %d\n", a, b, a % b);

    // Opérations logiques / de comparaison
    printf("a == b ? %d\n", a == b); // 0 = faux, 1 = vrai
    printf("a > b ? %d\n", a > b);
    printf("a < b ? %d\n", a < b);
    printf("a != b ? %d\n", a != b);

    // Exemple avec opérateurs logiques combinés
    printf("(a > 0 && b > 0) ? %d\n", (a > 0 && b > 0)); // ET logique
    printf("(a > 0 || b < 0) ? %d\n", (a > 0 || b < 0)); // OU logique

    return 0;
}
