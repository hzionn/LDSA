#include <stdio.h>

int linear_search(int arr[], int size, int target) {
    // return the index of the target if found
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main(void) {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int result = linear_search(arr, size, target);
    if (result == -1) {
        printf("Element not found\n");
    } else {
        printf("Element found at index: %d\n", result);
    }

    return 0;
}
