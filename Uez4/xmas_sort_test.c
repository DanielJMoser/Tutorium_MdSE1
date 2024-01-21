#include <stdio.h>
#include "xmas_sort.h"

// Prints the given array
void printArray(int* array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d - ", array[i]);
    }
    printf("\n");
}

void test_xmas_sort(int* array, int n) {
    printArray(array, n);
    xmas_sort(array, n);
    printArray(array, n);
}


int main() {
    
    printf("1st test:\n");
    int array1[] = {4, 2, 7, 3, 1, 8, 4};
    test_xmas_sort(array1, sizeof(array1)/sizeof(int));
    
    printf("\n2nd test:\n");
    int array2[] = {12};
    test_xmas_sort(array2, sizeof(array2)/sizeof(int));
    
    printf("\n3rd test:\n");
    int array3[] = {9, 4, 6, 2, 7, 4, 3, 6};
    test_xmas_sort(array3, sizeof(array3)/sizeof(int));

}

