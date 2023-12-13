#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    if (argc != 2) {
        printf("Bitte geben sie genau eine Zahl ein!");
    }

    int zahl = atoi(argv[1]);

    if (zahl <= 0) {
        printf("Bitte geben Sie eine positive Zahl ein!");
        return 1;
    }

    int exponent = 0;

    while (zahl % 2 == 0 && zahl > 1) {
        zahl /= 2;
        exponent++;
    }
    if (zahl == 1) {
        printf("%d\n", exponent);
    }

    return 0;
}