/*
 * bubble sort
 *
 * start compare element from the first two
 * if the first element is greater than the second element, swap them
 * repeat the process for the next two elements
 * continue this process until the entire array is sorted
 */

#include "helper.h"
#include <stdio.h>

void bubble_sort(int arr[], int size) {
    for (int step = 0; step < size - 1; ++step) {
        for (int i = 0; i < size - step - 1; ++i) {
            if (arr[i] > arr[i+1]) {
                swap(&arr[i], &arr[i+1]);
            }
        }
    }
}

int main(void) {

    // create an array
    int arr[5] = {5, 4, 3, 2, 1};

    // get the length of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("before sorting: ");
    print_array(arr, n);

    // here we perform the bubble sort
    bubble_sort(arr, n);

    printf("after sorting: ");
    print_array(arr, n);

    return 0;
}
