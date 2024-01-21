#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ORTSLAENGE  50
#define MAX_DATEINAME   128
#define MAX_TAGE        8
#define MAX_LINE_LENGTH 100

int main() {
    char ort[MAX_ORTSLAENGE];
    int tag, gefunden = 0, summe = 0;
    char dateiname[MAX_DATEINAME], zeile[MAX_LINE_LENGTH];

    printf("Geben Sie einen Ort an:\n");
    scanf("%s", ort);
    printf("Geben Sie einen Tag an:\n");
    if (scanf("%d", &tag) != 1 || tag < 1 || tag > MAX_TAGE) {
        fprintf(stderr, "Eingabefehler: Ungueltiger Tag\n");
        return 1;
    }

    sprintf(dateiname, "snow_data/%s_%d.txt", ort, tag);

    FILE *ausgabe = fopen(dateiname, "w");
    if (ausgabe == NULL) {
        fprintf(stderr, "Schreibfehler: Kann Datei nicht öffnen.\n");
        return 1;
    }

    for (int i = 1; i <= tag; i++) {
        char eingabedatei[MAX_DATEINAME];
        sprintf(eingabedatei, "snow_data/%d.txt", i);

        FILE *eingabe = fopen(eingabedatei, "r");
        if (eingabe == NULL) {
            fprintf(stderr, "Lesefehler: Kann Datei %s nicht öffnen.\n", eingabedatei);
            fclose(ausgabe);
            return 1;
        }


        while (fgets(zeile, MAX_LINE_LENGTH, eingabe)) {

            char aktuellerOrt[MAX_ORTSLAENGE];
            int schneefall;

            if (sscanf(zeile, "%[^;];%d", aktuellerOrt, &schneefall) == 2) {
                if (strcmp(aktuellerOrt, ort) == 0) {
                    gefunden = 1;
                    fprintf(ausgabe, "Tag %d: %d\n", i, schneefall);
                    summe += schneefall;
                    break;
                }
            }
        }
        fclose(eingabe);

        if (!gefunden) {
            fprintf(stderr, "Eingabefehler: Ortschaft %s nicht gefunden.\n", ort);
            fclose(ausgabe);
            return 1;
        }
        gefunden = 0;
    }
    fprintf(ausgabe, "Summe: %d\n", summe);
    fclose(ausgabe);

    printf("Die Ergebnisse Ihrer Anfrage wurden erfolgreich in eine Datei geschrieben.\n");
    return 0;
}