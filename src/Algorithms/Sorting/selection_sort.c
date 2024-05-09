/*
 * selection sort
 *
 * in each iteration,
 * find the smallest element and swap it with the current first element
 */

#include "helper.h"

void selection_sort(int arr[]) {
    for (int i=0; i<5; i++) {
        for (int j=i+1; j<5; j++) {
            print_array(arr);
            if (arr[i] > arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

int main(void) {
    int arr[5] = {5, 4, 3, 2, 1};

    selection_sort(arr);
    print_array(arr);

    return 0;
}
