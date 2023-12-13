#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    if (argc != 2) {
        fprintf(stderr, "Fehler!!! Die Größe der Pyramide als Parameter übergeben. (Bitte)");
        return 1;
    }

    int size = atoi(argv[1]);
    if (size <= 0) {
        fprintf(stderr, "Fehler! Bitte positive Zahl angeben. Danke.");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        for (int j = size; j > i; j--) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}