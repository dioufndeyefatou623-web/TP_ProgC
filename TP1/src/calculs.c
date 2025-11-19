#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    // Exemple de valeurs
    num1 = 12;
    num2 = 4;
    op = '*'; // Change cette valeur pour tester d'autres opérations

    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);
    printf("operateur = %c\n\n", op);

    switch (op) {
        case '+':
            printf("Resultat : %d\n", num1 + num2);
            break;

        case '-':
            printf("Resultat : %d\n", num1 - num2);
            break;

        case '*':
            printf("Resultat : %d\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Resultat : %d\n", num1 / num2);
            else
                printf("Erreur : division par zero !\n");
            break;

        case '%':
            if (num2 != 0)
                printf("Resultat : %d\n", num1 % num2);
            else
                printf("Erreur : modulo par zero !\n");
            break;

        case '&': // ET bit à bit
            printf("Resultat : %d\n", num1 & num2);
            break;

        case '|': // OU bit à bit
            printf("Resultat : %d\n", num1 | num2);
            break;

        case '~': // NON bit à bit (1 seul opérande)
            printf("Resultat : %d\n", ~num1);
            break;

        default:
            printf("Operateur inconnu !\n");
            break;
    }

    return 0;
}


