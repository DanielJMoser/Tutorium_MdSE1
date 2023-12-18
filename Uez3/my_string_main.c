#include "my_string.h"
#include <stdio.h>

int main() {
    const char* str1 = "Hello";
    const char* str2 = "World";
    unsigned char str3[] = "Hello";

    // Test: string_cmp
    printf("Vergleich von '%s' und '%s': %d \n", str1, str2, string_cmp(str1, str2));
    printf("Vergleich von '%s' und '%s': %d \n", str1, str3, string_cmp(str1, str1));

    // Test string_len
    printf("Länge von '%s': '%u'\n", str1, string_len(str1));

    // Test string_rev
    string_rev(str3);
    printf("rev: '%s': '%s'\n", str1, str3);

    // Test string_chr
    const char c = 'e';
    char *result = string_chr(str1, c);
    if (result != NULL) {
        printf("Erstes Vorkommen von '%c' ind '%s': '%s'\n", c, str1, result);
    } else {
        printf("nicht gefunden");
    }

    return 0;
}