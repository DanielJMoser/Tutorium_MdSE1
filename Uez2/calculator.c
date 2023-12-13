#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "operations.h"


int main(int argc, char* argv[]) {
    if (argc != 4) {
        fprintf(stderr, "Fehler!! Bitte geben sie eine Operation sowie zwei Zahlen an.\n");
        return 1;
    }

    int a = atoi(argv[1]);
    char* operation = argv[2];
    int b = atoi(argv[3]);
    int result;

    if (strcmp(operation, "+") == 0) {
        result = add(a, b);
    } 
    else if (strcmp(operation, "-") == 0) {
        result = subtract(a, b);
    } 
    else if (strcmp(operation, "*") == 0) {
        result = multiply(a, b);
    } 
    else if (strcmp(operation, "/") == 0) {
        if (b == 0) {
            fprintf(stderr, "Leider kann ich nicht durch 0 dividieren...\n (noch nicht >:))");
            return 1;
        } else {
            result = divide(a, b);
        }
        
    } else {
        fprintf(stderr, "Bitte Betriebsanleitung lesen.");
        return 1;
    }
   printf("Ergebnis: %d\n", result);
   return 0; 
}