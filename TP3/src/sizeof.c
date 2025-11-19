#include <stdio.h>

int main() {
    // Variables simples
    int i;
    char c;
    float f;

    // Pointeurs simples
    int *pi;
    char *pc;
    float *pf;

    // Pointeurs de pointeurs
    int **ppi;
    char **ppc;
    float **ppf;

    // Pointeurs de pointeurs de pointeurs
    int ***pppi;
    char ***pppc;
    float ***pppf;

    printf("=== Tailles des types de données et pointeurs ===\n\n");

    // Tailles des types simples
    printf("La taille de int est : %zu octets\n", sizeof(i));
    printf("La taille de char est : %zu octets\n", sizeof(c));
    printf("La taille de float est : %zu octets\n", sizeof(f));

    printf("\n");

    // Tailles des pointeurs simples
    printf("La taille de int* est : %zu octets\n", sizeof(pi));
    printf("La taille de char* est : %zu octets\n", sizeof(pc));
    printf("La taille de float* est : %zu octets\n", sizeof(pf));

    printf("\n");

    // Tailles des pointeurs de pointeurs
    printf("La taille de int** est : %zu octets\n", sizeof(ppi));
    printf("La taille de char** est : %zu octets\n", sizeof(ppc));
    printf("La taille de float** est : %zu octets\n", sizeof(ppf));

    printf("\n");

    // Tailles des pointeurs de pointeurs de pointeurs
    printf("La taille de int*** est : %zu octets\n", sizeof(pppi));
    printf("La taille de char*** est : %zu octets\n", sizeof(pppc));
    printf("La taille de float*** est : %zu octets\n", sizeof(pppf));

    return 0;
}
