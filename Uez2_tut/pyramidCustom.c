#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Fehler: Bitte geben Sie die Größe der Pyramide als Kommandozeilenparameter an.\n");
        return 1;  // Exit Code ungleich 0
    }

    int size = atoi(argv[1]);
    if (size <= 0) {
        fprintf(stderr, "Fehler: Die Größe der Pyramide muss eine natürliche Zahl sein.\n");
        return 1;
    }

    for (int i = 0; i < size; i++) {
        // Drucke Leerzeichen
        for (int j = 0; j < size - i - 1; j++) {
            printf(" ");
        }
        // Drucke Sternchen
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;  // Erfolgreiches Beenden des Programms
}
