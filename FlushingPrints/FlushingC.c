
#include <stdio.h>
#include <unistd.h>
// #include <Windows.h>  Inkludieren bei Visual Studio-Compiler. Bitte "sleep(1) durch "Sleep(1000) ersetzen.





    // TL;DR: Für ein besseres Debugging-Erlebnis unter Win + CLion, bitte Cygwin/Visual Studio Toolkit verwenden //




/*
    Hier soll in Kürze nochmals veranschaulicht werden, wieso CLion unter Windows während
    des Debuggens den Output der printf()-Standardfunktion nicht direkt anzeigt, sondern erst nach
    Beendigung des Programms.
    Bitte Breakpoints z.B. auf Höhe der for-Schleifen setzen und beim Debuggen die Konsole beobachten! :))
*/




int main() {

    /*
        Im ersten Durchgang "flushen" wir den Output Buffer, dh. wir senden seinen Inhalt
        zum Standardoutput (in unserem Falle unser Terminal).
        Unabhängig von unserer Programmierumgebung sollte uns jede Iteration unserer for-Schleife
        angezeigt werden, nachdem fflush(stdout); aufgerufen wurde.
    */

    printf("Testing with manual flushing:\n");
    for (int i = 0; i < 5; i++) {

        printf("Line %d\n", i);
        fflush(stdout);     // hier flushen wir und warten für eine Sekunde
        sleep(1);
    }




    /*
        Im Nachfolgenden "flushen" wir nicht. Je nach Betriebssystem und IDE werden Daten in einem Buffer
        unterschiedlich gehandhabt:

        - Line Buffering: Der Bufferinhalt wird z.B. nach jedem Newline-Symbol an den Output gesendet.
        - Block Buffering: Der Bufferinhalt wird z.B. nach Erreichen einer gewissen Größe an den Output gesendet.

        Ohne Buffering würde jede Eingabe sofort an unser Terminal weitergeleitet werden, was ressourcen frisst
        (wir hätten damit einen riesigen Overhead an I/O-operations).

        Line Buffering versucht hier einen Mittelweg zu schaffen und sammelt erstmal alle Daten ein, bis wir auf
        ein Newline-Symbol stoßen. Dann wird der Buffer "geflushed" und wir sehen den Output bis hierhin.

        Block Buffering (hab auch schon mal den Ausdruck "Full Buffering" gelesen) wartet bis der Buffer voll ist
        bzw. das Programm beendet wird und sendet dann alles unter einmal an unser Terminal. Da wir uns so
        die vielen I/O-operationen sparen, ist das Ganze ressourcenschonend.
    */

    printf("\nTesting without flushing:\n");
    for (int i = 0; i < 5; i++) {

        printf("Line %d\n", i);
        sleep(1);           // Kein Flushen, nur schlafen :)
    }

    return 0;
}




    /*
        -- Zusatzinfos --

        Während des Tutoriums debuggte ich die Asterisk-Pyramide in meiner Linux-Umgebung (I use Arch, btw).
        Dabei wurden die Leerzeichen und Sternderln auch ohne "\n"-Symbol direkt in der Konsole ausgegeben.
        Ich kann mir nicht vorstellen, dass hier gar kein Buffering zur Verwendung kam. Darum gehe ich davon aus,
        dass der Buffer geleert wird, sobald der Speicher mit allen Elementen aus dem print-statement gefüllt
        wurde.

        Für die ganz Motivierten habe ich ein Programm nach selben Konzept in C++ geschrieben; siehe Filetree

    */
