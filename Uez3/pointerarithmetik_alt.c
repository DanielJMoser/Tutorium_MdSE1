
#include <stdio.h>

int main(int argc, char **argv) {
    // Überprüfung, ob mindestens ein Argument (außer dem Programmnamen) übergeben wurde
    if (argc < 2) {
        printf("Keine Zeichenkette angegeben.\n");
        return 1; // Beendet das Programm mit dem Fehlercode 1, wenn kein Argument übergeben wurde
    }

    char *str = argv[1]; // Verwendet das erste Argument nach dem Programmnamen als Zeichenkette

    // Durchläuft alle möglichen ASCII-Werte von 0 bis 255
    for (int ascii = 0; ascii <= 255; ascii++) {
        int count = 0; // Zählt die Häufigkeit des aktuellen Zeichens (ascii)

        // Durchläuft die Zeichenkette str
        for (char *ptr = str; *ptr != '\0'; ptr++) {
            // Überprüft, ob das aktuelle Zeichen in der Zeichenkette dem aktuellen ASCII-Wert entspricht
            if (*ptr == ascii) {
                count++; // Erhöht den Zähler, wenn das Zeichen gefunden wird
            }
        }

        // Gibt das Zeichen und seine Häufigkeit aus, wenn es in der Zeichenkette vorkommt
        if (count > 0) {
            printf("> Zeichen: '%c' - Häufigkeit: %d\n", ascii, count);
        }
    }
    return 0; // Beendet das Programm erfolgreich
}


/*
LOGIK DER FOR-SCHLEIFEN:

Wir verwenden hier zwei Schleifen, die ineinander verschachtelt sind.

Die äußere Schleife iteriert durch alle möglichen ASCII-Werte. Davon gibt es 255.
An irgendeinem Punkt wird der Integer 'ascii' also zwangsläufig den Wert jedes ASCII-Zeichens angenommen haben
Wir definieren uns auch an dieser Stelle eine lokale Variable 'count', die mit jeder Iteration neu definiert wird.

Die innere Schleife iteriert über alle Werte der via Kommandozeile übergebenen Zeichenkette.
Dafür setzen wir uns einen Pointer auf das erste Symbol in ebendieser Kette.
Dann prüfen wir, ob der ASCII-Wert des dereferenzierten Pointers dem momentanen Wert der 'ascii'-Variable
(in der äußeren Schleife) entspricht. Ist dies der Fall, zählen wir einen Treffer.



Ein Beispiel:

Wir übergeben 'Hello World'.

Unsere 'ascii'-Variable ist in der ersten Iteration 0.

Mit unserem Counter wollen wir das Vorkommen des Zeichens mit dem ASCII-Wert 0 zählen.

Dafür iterieren wir mit einer zweiten Schleife über unsere übergebene Zeichenkette, 'Hello World'.

Beim 'H', welches durch den ASCII-Code 72 repräsentiert wird, schlägt der Vergleich nicht an.
Beim 'e', welches durch den ASCII-Code 101 repräsentiert wird, schlägt der Vergleich nicht an.
Beim 'l', welches durch den ASCII-Code 108 repräsentiert wird, schlägt der Vergleich nicht an.
.
    .
        .
            .
Beim 'r', welches durch den ASCII-Code 114 repräsentiert wird, schlägt der Vergleich nicht an.
Beim 'l', welches durch den ASCII-Code 108 repräsentiert wird, schlägt der Vergleich nicht an.
Beim 'd', welches durch den ASCII-Code 100 repräsentiert wird, schlägt der Vergleich nicht an.

Damit ist das Ende des übergebenen Strings erreicht und unsere 'count'-Variable noch immer 0.
-> Keine Ausgabe in der Konsole.

Die innere Schleife hat ihren Zweck vorerst erfüllt und wir brechen in die äußere Schleife aus.

Mit 'ascii == 1' sieht die Sache ähnlich aus, genauso bei 'ascii == 2' und 'ascii == 3'.

Den ersten Treffer landen wir mit 'ascii == 72', denn unser 'H' wird in der ASCII-Tabelle durch
72 repräsentiert.
Der Counter wird um eins erhöht und die restliche Zeichenkette auf ein weiteres großes H geprüft.
Da keines gefunden wird, printen wir die Häufigkeit 1.
(Etwa bei 'ascii == 108' würde unsere innere Schleife dreimal anschlagen, da 'l' dreimal in der Kette
"Hello World" zu finden ist.)

Da die lokale Variable 'count' in der äußeren Schleife initialisiert und definiert wird, müssen wir
sie nicht händisch zurücksetzen, damit sie in der nächsten Iteration den Wert 0 annimmt.

*/