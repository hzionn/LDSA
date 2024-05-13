/*
 * selection sort
 *
 * in each iteration,
 * find the smallest element and swap it with the current first element
 */

#include <stdio.h>
#include "helper.h"

void selection_sort(int arr[], int size) {
    for (int i=0; i<size; i++) {
        for (int j=i+1; j<size; j++) {
            print_array(arr, size);
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main(void) {
    int arr[5] = {5, 4, 3, 2, 1};

    printf("Before sorting: ");
    print_array(arr, 5);

    selection_sort(arr, 5);

    printf("After sorting: ");
    print_array(arr, 5);

    return 0;
}
