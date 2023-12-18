#include "my_string.h"
#include <stdio.h>

int string_cmp(const char* str1, const char* str2) {

    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return (*str1 == *str2);
}

unsigned int string_len(const char* str) {

    unsigned int length = 0;

    while (str[length]) {
        length++;
    }
    return length;
}

void string_rev(unsigned char* str) {

    int left = 0;
    int right = string_len((const char*) str) - 1;

    while (left < right) {

        char temp = str[left];

        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

char *string_chr(const char* str, const char c) {
    while (*str) {
        if (*str == c) {
            return (char *) str;
        }
        str++;
    }
    return NULL;
}