#include <stdio.h>

int main() {
    // Deklaration von Variablen
    int i, j;      // Schleifenindizes
    int rows = 3;  // Anzahl der Reihen der Pyramide

    // Äußere Schleife: Durchläuft jede Reihe der Pyramide
    for (i = 1; i <= rows; i++) {
        // Innere Schleife für Leerzeichen
        // Druckt Leerzeichen in jeder Reihe, um die Pyramidenform zu erstellen
        for (j = i; j < rows; j++) {
            printf(" ");  // Druckt Leerzeichen
        }

        // Innere Schleife für Asterisks (*)
        // Druckt die Asterisks in jeder Reihe
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");  // Druckt einen Asterisk
        }
        printf("\n");  // Beginnt nach dem Füllen einer Reihe eine neue Zeile
    }

    return 0;  // Gibt 0 zurück und signalisiert das erfolgreiche Ende des Programms
}