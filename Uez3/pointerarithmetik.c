#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    if (argc < 2) {
        printf("Fehler! Keine Zeichenkette übergeben.\n");
        return 1;
    }

    char *str = argv[1];

    int frequency[256] = {0};

    for (char *ptr = str; *ptr != '\0'; ptr++) {
        frequency[(unsigned char) *ptr]++;
    }

    for (int i = 0; i < 256; i++) {

        if (frequency[i] > 0) {
            printf("Zeichen: '%c' - Häufigkeit: %d\n", i, frequency[i]);
        }
    }
    return 0;
}