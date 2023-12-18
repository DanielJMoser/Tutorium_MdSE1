#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    // Überprüfen, ob mindestens ein Kommandozeilenargument (neben dem Programmnamen) vorhanden ist
    if (argc < 2) {
        // Wenn kein Argument übergeben wurde, Fehlermeldung ausgeben und Programm beenden
        fprintf(stderr, "Fehler: Keine Zeichenkette als Argument übergeben.\n");
        return 1; // Beendet das Programm mit Exit-Code 1 (Fehlerzustand)
    }

    // Zuweisung des ersten Kommandozeilenarguments (nach dem Programmnamen) zur Variable str
    char *str = argv[1];

    // Initialisierung eines Arrays zur Speicherung der Häufigkeiten jedes ASCII-Zeichens
    // Das Array hat 256 Elemente (entspricht der Anzahl der möglichen ASCII-Zeichen)
    // Alle Elemente werden zu Beginn auf 0 gesetzt
    int frequency[256] = {0};

    // Durchlaufen der Zeichenkette str mit einem Zeiger ptr
    // Die Schleife läuft, bis das Nullzeichen '\0' (das Ende der Zeichenkette) erreicht wird
    for (char *ptr = str; *ptr != '\0'; ptr++) {
        // Erhöht den Zähler für das entsprechende ASCII-Zeichen im frequency-Array
        // Der ASCII-Wert des Zeichens wird als Index verwendet
        frequency[(unsigned char)*ptr]++;
    }

    // Durchlaufen aller möglichen ASCII-Zeichen
    for (int i = 0; i < 256; i++) {
        // Überprüfen, ob das aktuelle Zeichen in der Zeichenkette vorkommt (Häufigkeit > 0)
        if (frequency[i] > 0) {
            // Ausgabe des Zeichens und seiner Häufigkeit
            // %c gibt das Zeichen aus, %d die zugehörige Häufigkeit
            printf("Zeichen: '%c' - Häufigkeit: %d\n", i, frequency[i]);
        }
    }

    return 0; // Beendet das Programm erfolgreich
}
