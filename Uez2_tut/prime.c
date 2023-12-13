#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Funktion, die überprüft, ob eine Zahl eine Primzahl ist
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main(int argc, char *argv[]) {
    // Überprüft, ob ein Kommandozeilenargument vorhanden ist
    if (argc != 2) {
        fprintf(stderr, "Fehler: Bitte geben Sie eine Obergrenze als Kommandozeilenparameter an.\n");
        return 1;
    }

    int n = atoi(argv[1]);
    if (n <= 0) {
        fprintf(stderr, "Fehler: Die Obergrenze muss eine positive, natürliche Zahl sein.\n");
        return 1;
    }

    int count = 0; // Zählt, wie viele Primzahlen pro Zeile ausgegeben wurden

    // Durchläuft die Zahlen von 1 bis n und gibt die Primzahlen aus
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d\t", i);
            count++;
            // Nach jeweils 10 Primzahlen wird eine neue Zeile begonnen
            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }

    // Fügt eine neue Zeile am Ende der Ausgabe hinzu, falls notwendig
    if (count % 10 != 0) {
        printf("\n");
    }

    return 0; // Erfolgreiches Beenden des Programms
}
