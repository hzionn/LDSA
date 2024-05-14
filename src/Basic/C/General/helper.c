#include "helper.h"
#include <stdio.h>

// swap the values of two variables
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// print the array
void print_array(int arr[], int size) {
    printf("iteration: ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");
}
