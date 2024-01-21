#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_HOBBIES 5
#define MAX_NAME_LENGTH 50
#define MAX_PERSONS 20
#define MAX_LINE_LENGTH 200

typedef struct persons
{
    char firstName[MAX_NAME_LENGTH];
    char lastName[MAX_NAME_LENGTH];
    int age;
    char hobbies[MAX_HOBBIES][MAX_NAME_LENGTH];
} Person;


int main() {

    FILE *file = fopen("persons_input.txt", "r");
    if (file == NULL) {
        perror("Fehler beim Öffnen des Files.");
        return 0;
    }

    char line[MAX_LINE_LENGTH];
    Person persons[MAX_PERSONS];
    int personCount = 0;

    while (fgets(line, MAX_LINE_LENGTH, file) && personCount < MAX_PERSONS) {

        char *token;
        token = strtok(line, ";");
        if (token == NULL) continue;
        strncpy(persons[personCount].firstName, token, MAX_NAME_LENGTH);

        token = strtok(NULL, ";");
        if (token == NULL) continue;
        strncpy(persons[personCount].lastName, token, MAX_NAME_LENGTH);

        token = strtok(NULL, ";");
        if (token == NULL) continue;
        persons[personCount].age = atoi(token);

        token = strtok(NULL, ";");
        if (token == NULL) continue;
        char *hobby_token = strtok(token, ",");
        int hobbyCount = 0;
        while (hobby_token != NULL && hobbyCount < MAX_HOBBIES) {
            strcpy(persons[personCount].hobbies[hobbyCount], hobby_token);
            hobby_token = strtok(NULL, ",");
            hobbyCount++;
        }

        personCount++;

    }
    fclose(file);

    for (int i = 0; i < personCount; i++) {
        if (persons[i].age >= 20 && persons[i].age <= 30) {
            for (int j = 0; j < MAX_HOBBIES; j++) {
                if (strcmp(persons[i].hobbies[j], "Tanzen") == 0) {
                    printf("%s\n", persons[i].lastName);
                    break;
                }
            }
        }
    }   

    return EXIT_SUCCESS;
}
