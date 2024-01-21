#include "operations.h"
#include <stdio.h>

int addition(int operand1, int operand2){
    int summe = operand1 + operand2;
    return summe;
}
int subtraktion(int operand1, int operand2){
    int differenz = operand1 - operand2;
    return differenz;
}
int multiplikation(int operand1, int operand2){
    int produkt = operand1 * operand2;
    return produkt;
}
double division(double operand1, double operand2) {
    if (operand2 == 0) {
        printf("Division durch 0 nicht verfügbar!");
        return 0;
    } else {
        double quotient = operand1 / operand2;
        return quotient;
    }
}
