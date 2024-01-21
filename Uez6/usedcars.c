#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_RECORDS 42
#define MAX_STRING_LENGTH 64

typedef struct {
    char marke[MAX_STRING_LENGTH];
    char modell[MAX_STRING_LENGTH];
    int baujahr;
    int kilometerstand;
    double verkaufspreis;
    char zusatzausstattung[MAX_STRING_LENGTH];
} Gebrauchtwagen;

int readCommandLineArguments(int argc, char *argv[], int *minBaujahr, double *maxPreisProKm, char zusatzausstattungen[MAX_STRING_LENGTH]);
int readData(const char *filename, Gebrauchtwagen cars[MAX_RECORDS]);
void printCars(const Gebrauchtwagen cars[MAX_RECORDS], int minBaujahr, double maxPreisProKm, const char *zusatzausstattungen);

int main(int argc, char* argv[]) {
    int minBaujahr;
    double maxPreisProKm;
    char zusatzausstattungen[MAX_STRING_LENGTH] = {0};
    Gebrauchtwagen cars[MAX_RECORDS];

    if (readCommandLineArguments(argc, argv, &minBaujahr, &maxPreisProKm, zusatzausstattungen) != 0) {
        return 1;
    }

    if (readData("gebrauchtwagen.csv", cars) != 0) {
        return 1;
    }

    printCars(cars, minBaujahr, maxPreisProKm, zusatzausstattungen);

    return 0;
}



int readCommandLineArguments(int argc, char *argv[], int *minBaujahr, double *maxPreisProKm, char zusatzausstattungen[MAX_STRING_LENGTH]) {
    if (argc < 3) {
        fprintf(stderr, "Eingabefehler: Zu wenige Argumente.\n");
        return 1;
    }

    *minBaujahr = atoi(argv[1]);
    *maxPreisProKm = atof(argv[2]);

    if (*minBaujahr <= 0 || *maxPreisProKm < 0) {
        fprintf(stderr, "Eingabefehler: Ungültiger Zahlenbereich.\n");
        return 1;
    }

    if (argc > 3) {
        strncpy(zusatzausstattungen, argv[3], MAX_STRING_LENGTH - 1);
    }

    return 0;
}


int readData(const char *filename, Gebrauchtwagen cars[MAX_RECORDS]) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        fprintf(stderr, "Lesefehler: Datei kann nicht geöffnet werden.\n");
        return 1;
    }

    char line[256];
    int index = 0;
    while (fgets(line, sizeof(line), file) && index < MAX_RECORDS) {
        if (sscanf(line, "%63[^:]:%63[^:]:%d:%d:%lf:%63[^\n]",
                    cars[index].marke,
                    cars[index].modell,
                    &cars[index].baujahr,
                    &cars[index].kilometerstand,
                    &cars[index].verkaufspreis,
                    cars[index].zusatzausstattung) != 6) {
            fprintf(stderr, "Zeilenfehler: Ungültige Daten in Zeile %d.\n", index + 1);
            continue;
        }
        index++;
    }
    fclose(file);
    return 0;
}


void printCars(const Gebrauchtwagen cars[MAX_RECORDS], int minBaujahr, double maxPreisProKm, const char *zusatzausstattungen) {
    for (int i = MAX_RECORDS - 1; i >= 0; i--) {
        double preisProKm = cars[i].verkaufspreis / cars[i].kilometerstand;
        if (cars[i].baujahr >= minBaujahr && preisProKm <= maxPreisProKm) {
            if (zusatzausstattungen[0] == '\0' || strstr(cars[i].zusatzausstattung, zusatzausstattungen) != NULL) {
                printf("%s %s, Baujahr %d, Kilometerstand: %d km, Preis: %.2f Euro\n",
                       cars[i].marke, cars[i].modell, cars[i].baujahr, cars[i].kilometerstand, cars[i].verkaufspreis);

                if (strlen(cars[i].zusatzausstattung) > 0) {
                    char ausstattung[MAX_STRING_LENGTH];
                    strcpy(ausstattung, cars[i].zusatzausstattung);

                    char *token = strtok(ausstattung, "#");
                    printf("    Zusatzausstattung: ");
                    while (token != NULL) {
                        printf("%s", token);
                        token = strtok(NULL, "#");
                        if (token != NULL) {
                            printf(", ");
                        }
                    }
                    printf("\n");
                }

            }
        }
    }
}



