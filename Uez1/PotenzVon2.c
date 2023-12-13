
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Prüfen, ob ein Kommandozeilenparameter vorhanden ist
    if (argc != 2) {
        printf("Bitte geben Sie eine Zahl als Kommandozeilenparameter an.\n");
        return 1;
    }

    // Konvertieren des Kommandozeilenparameters in einen Integer
    int zahl = atoi(argv[1]);
    if (zahl <= 0) {
        printf("Bitte geben Sie eine positive Zahl an.\n");
        return 1;
    }

    int exponent = 0;
    while (zahl % 2 == 0 && zahl > 1) {
        zahl /= 2;
        exponent++;
    }
    

    // Überprüfen, ob die Zahl eine Zweierpotenz ist
    if (zahl == 1) {
        printf("%d\n", exponent);
    }

    return 0;
}