#include "operations.h"

#include <stdio.h>

int addition(int operand1, int operand2){
    int summe = operand1 + operand2;
    printf("%d \n", summe);
    return 0;
}
int subtraktion(int operand1, int operand2){
    int differenz = operand1 - operand2;
    printf("%d \n", differenz);
    return 0;
}
int multiplikation(int operand1, int operand2){
    int produkt = operand1 * operand2;
    printf("%d \n", produkt);
    return 0;
}
int division(int operand1, int operand2){
    if (operand2 == 0){
        printf("Division durch 0 nicht verfügbar!");
    }
    else{
        int quotient = operand1 / operand2;
        printf("%d \n", quotient);
    }
    return 0;
}