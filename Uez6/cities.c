#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CITIES 40
#define MAX_STRING_LENGTH 100

typedef struct {
    char name[MAX_STRING_LENGTH];
    char country[MAX_STRING_LENGTH];
    int population;
    double area;
} City;


int readCities(const char* filename, City cities[], int maxCities) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        fprintf(stderr, "Lesefehler: Datei kann nicht geöffnet werden.\n");
        return -1;
    }

    char buffer[1024];
    int count = 0;
    while(fgets(buffer, sizeof(buffer), file) && count < maxCities) {
        if (sscanf(buffer, "%[^;];%[^;];%d;%lf", cities[count].name, cities[count].country, &cities[count].population, &cities[count].area) == 4) {
            count++;
        }
    }

    fclose(file);
    return count;
}


int findCityWithHighestDensity(City cities[], int cityCount, const char* country, char* cityName, double* density) {

    int found = 0;
    double maxDensity = 0.0;

    for (int i = 0; i < cityCount; i++) {
        if (strcmp(cities[i].country, country) == 0) {
            double currentDensity = cities[i].population / cities[i].area;
            if (currentDensity > maxDensity) {
                maxDensity = currentDensity;
                strcpy(cityName, cities[i].name);
                *density = maxDensity;
                found = 1;
            }
        }
    }
    return found;
}



int main(int argc, char* argv[]) {

    if (argc < 2) {
        fprintf(stderr, "Eingabefehler: Keine Laender angegeben.\n");
        return 1;
    }

    City cities[MAX_CITIES];
    int cityCount = readCities("cities.csv", cities, MAX_CITIES);
    if (cityCount < 0) return 1;

    for (int i = argc - 1; i >= 1; i--) {
        char highestDensityCity[MAX_STRING_LENGTH];
        double density;

        if (findCityWithHighestDensity(cities, cityCount, argv[i], highestDensityCity, &density)) {
            printf("%s: %s with %.2f people per km2\n", argv[i], highestDensityCity, density);
        } else {
            printf("Country '%s' not found.\n", argv[i]);
        }
    }
    return 0;
}
