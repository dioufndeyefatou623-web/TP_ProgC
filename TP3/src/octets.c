#include <stdio.h>

int main() {
    // Déclaration des variables
    short s = 0x0203;
    int i = 0x01020304;
    long int li = 0x0102030405060708;
    float f = 9.0f;          // Exemple de float
    double d = 1.0;          // Exemple de double
    long double ld = 2.0L;   // Exemple de long double

    unsigned char *ptr;
    int j;

    // Affichage des octets d'un short
    printf("Octets de short :\n");
    ptr = (unsigned char*)&s;
    for (j = 0; j < sizeof(s); j++) {
        printf("%02x ", ptr[j]);
    }
    printf("\n\n");

    // Affichage des octets d'un int
    printf("Octets de int :\n");
    ptr = (unsigned char*)&i;
    for (j = 0; j < sizeof(i); j++) {
        printf("%02x ", ptr[j]);
    }
    printf("\n\n");

    // Affichage des octets d'un long int
    printf("Octets de long int :\n");
    ptr = (unsigned char*)&li;
    for (j = 0; j < sizeof(li); j++) {
        printf("%02x ", ptr[j]);
    }
    printf("\n\n");

    // Affichage des octets d'un float
    printf("Octets de float :\n");
    ptr = (unsigned char*)&f;
    for (j = 0; j < sizeof(f); j++) {
        printf("%02x ", ptr[j]);
    }
    printf("\n\n");

    // Affichage des octets d'un double
    printf("Octets de double :\n");
    ptr = (unsigned char*)&d;
    for (j = 0; j < sizeof(d); j++) {
        printf("%02x ", ptr[j]);
