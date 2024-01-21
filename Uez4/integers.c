#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main() {

    FILE *file = fopen("integers_output.txt", "w");

    if (file == NULL) {
        perror("Fehler beim Öffnen des Files.");
        return 1;
    }

    printf("Geben Sie Ihren Text ein:\n");

    char line[1024];

    while (1)
    {
        if (fgets(line, sizeof(line), stdin) == NULL) {
            perror("Fehlerhafte Eingabe.");
            break;
        }

        if (strcmp(line, "\n") == 0) {
            break;
        }

        int wasNumber = 0;
        for (int i = 0; i < strlen(line); i++) {
            if (isdigit(line[i])) {
                fputc(line[i], file);
                wasNumber = 1;
            }
            else if (wasNumber) {
                fputc(' ', file);
                wasNumber = 0;
            }
        }
        fputc("\n", file);
    }
    fclose(file);
    return 0;
}