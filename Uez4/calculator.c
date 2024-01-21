#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operations.h"

int main() {
    char input[100];
    long int num1, num2;
    char op[1];

    while (1) {

        printf("Geben Sie Zahl 1 ein:\n");
        fgets(input, 100, stdin);

        if (strncmp(input, "exit", 4) == 0) {
            printf("Der Rechner wird geschlossen.");
            break;
        };
        if (sscanf(input, "%ld", &num1) != 1){
            perror("Falsche Eingabe!\n");
        }


        printf("Geben Sie die Operation ein:\n");
        fgets(input, 100, stdin);

        if (strncmp(input, "exit", 4) == 0) {
            printf("Der Rechner wird geschlossen.");
            break;
        };
        if (strchr("+-*/", op[0]) == NULL){
            perror("Falsche Eingabe!\n");
        }


        printf("Geben Sie Zahl 2 ein:\n");
        fgets(input, 100, stdin);

        if (strncmp(input, "exit", 4) == 0) {
            printf("Der Rechner wird geschlossen.");
            break;
        };
        if (sscanf(input, "%ld", &num2) != 1){
            perror("Falsche Eingabe!\n");
        }


        switch (op[0]) {
            case '+':
                printf("Ergebnis: %d\n", addition(num1, num2));
                break;
            case '-':
                printf("Ergebnis: %d\n", subtraktion(num1, num2));
                break;
            case '*':
                printf("Ergebnis: %d\n", multiplikation(num1, num2));
                break;
            case '/':
                if (num2 != 0) {
                    printf("Ergebnis: %.1f", division(num1, num2));
                }
                else {
                    fprintf(stderr, "Falsche Eingabe!!\n");
                }
                break;
            default:
                fprintf(stderr, "Falsche Eingabe!!\n");
            
        }
    }
    return 0;

}