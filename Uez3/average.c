#include <stdio.h>

void calculate(int arr[], int n, double *mean, double *variance) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    *mean = (double) sum / n;

    double sum_var = 0;
    for (int i = 0; i < n; i++) {
        sum_var += (arr[i] - *mean) * (arr[i] - *mean);
    }
    *variance = sum_var / n;
}

int main() {
    int n = 0;

    printf("Geben Sie die Anzahl der Elemente Ihres Arrays an: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Element #%d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    double mean, variance;
    calculate(arr, n, &mean, &variance);

    printf("Der Mittelwert des Arrays ist: %.lf\n", mean);
    printf("Die Varianz des Arrays ist: %.lf\n", variance);

    return 0;
}