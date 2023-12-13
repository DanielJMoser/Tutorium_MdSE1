#include <stdio.h>

int main() {

    int sum = 0;

    for (int i = 2; i < 1000; i += 8) {
        sum += i;
    }
    printf("sum: %d\n", sum);
    return 0;
}
