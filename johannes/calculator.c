#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "operations.h"

int main(int argc, char *argv[]){
    if (argc != 4){
        printf("Die Eingabe ist nicht korrekt");
        return 1;
    }
    else{
        int operand1 = atoi(argv[1]);
        char operator [2];
        snprintf(operator, sizeof(operator), "%s", argv[2]);
        int operand2 = atoi(argv[3]);


        if (strcmp(operator, "+") == 0){
            addition(operand1, operand2);
        }
        else if (strcmp(operator, "-") == 0){
            subtraktion(operand1, operand2);
        }
        else if (strcmp(operator, "*") == 0){
            multiplikation(operand1, operand2);
        }
        else if (strcmp(operator, "/") == 0){
            division(operand1, operand2);
        }
        else {
            printf("Bitte einen Grundrechenoperator eingeben!");
        }
    }
    return 0;
}