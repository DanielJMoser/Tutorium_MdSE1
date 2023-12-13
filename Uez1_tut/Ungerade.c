#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    if (argc != 2) {
        printf("This is not how you are supposed to use this program...\n Usage: %s <number>\n", argv[0]);
        return 1;
    }

    int passedNumber = atoi(argv[1]);

    if (passedNumber % 2 == 0) {
        printf("false :(\n");
    }
    else {
        printf("true! ;)\n");
    }
    return 0;
}