#include <stdio.h>


int main() {

    int i, j;
    int rows = 3;

    for (i = 1; i <= rows; i++) {
        for (j = i; j < rows; j++) {
            printf(" ");
            printf("%d\n", j);

        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
