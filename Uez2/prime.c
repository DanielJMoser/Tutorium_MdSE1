#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int main(int argc, char* argv[]) {

    if (argc != 2) {
        fprintf(stderr, "Aussagekräftige Fehlermeldung\n");
        return 1;
    }

    int n = atoi(argv[1]);
    if (n <= 0) {
        fprintf(stdout, "Die übergebene Zahl muss positiv sein. :)");
        return 1;
    }

    int count = 0;

    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d\t", i);
            count++;

            if (count % 10 == 0) {
                printf("\n");
            }
        }
    }
    if (count % 10 != 0) {
        printf("\n");
    }
    return 0;
}