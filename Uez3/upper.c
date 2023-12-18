#include <stdio.h>

int main() {
    char str[50];

    printf("Bitte geben Sie eine Zeichenfolge ein: ");
    scanf("%49[^\n]", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A';
        }
    }
    printf("%s\n", str);
    return 0;
}