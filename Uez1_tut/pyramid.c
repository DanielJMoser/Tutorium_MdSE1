#include <stdio.h>

int main() {

    // Schleifenvariablen
    int i, j = 0;
    // Anzahl der Reihen
    int rows = 3;

    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf(" ");
        }

        for (j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}