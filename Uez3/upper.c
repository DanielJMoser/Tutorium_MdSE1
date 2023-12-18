#include <stdio.h>

// TODO:
//      Eine Zeichenkette mit einer maximalen Länge von 49 Zeichen einlesen (um Buffer-Overflow zu vermeiden).
//      Jeden Kleinbuchstaben in der Zeichenkette in den entsprechenden Großbuchstaben umwandeln.
//      Die veränderte Zeichenkette ausgeben.

int main() {
    char str[50]; // Erstellt einen String mit Platz für 49 Zeichen + Null-Terminator

    printf("Bitte geben Sie eine Zeichenfolge ein: ");
    scanf("%49[^\n]", str); // Liest bis zu 49 Zeichen ein

    // Durchläuft die Zeichenkette und wandelt Kleinbuchstaben in Großbuchstaben um
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }

    printf("Veränderte Zeichenfolge: %s\n", str); // Gibt die veränderte Zeichenkette aus

    return 0;
}