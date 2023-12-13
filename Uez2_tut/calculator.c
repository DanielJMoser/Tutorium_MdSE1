#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operations.h"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Fehler: Bitte geben Sie eine Operation und zwei Zahlen an.\n");
        return 1;
    }

    // Liest die Operation und die Zahlen aus den Argumenten.
    int num1 = atoi(argv[1]);
    char* operation = argv[2];
    int num2 = atoi(argv[3]);
    int result;

    // Überprüft die Operation und führt sie aus.
    if (strcmp(operation, "+") == 0) {
        result = add(num1, num2);
    } else if (strcmp(operation, "-") == 0) {
        result = subtract(num1, num2);
    } else if (strcmp(operation, "*") == 0) {
        result = multiply(num1, num2);
    } else if (strcmp(operation, "/") == 0) {
        if (num2 == 0) {
            fprintf(stderr, "Fehler: Division durch Null.\n");
            return 1;
        }
        result = divide(num1, num2);
    } else {
        fprintf(stderr, "Fehler: Unbekannte Operation '%s'.\n", operation);
        return 1;
    }

    // Gibt das Ergebnis aus.
    printf("Ergebnis: %d\n", result);
    return 0;
}

