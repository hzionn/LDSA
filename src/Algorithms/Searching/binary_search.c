/* Binary Search Algorithm 
 *
 * the array must be sorted before applying binary search
 */

#include <stdio.h>

int binary_search(int arr[], int size, int target) {
    // using two pointers method
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (mid == target) {
            return mid;
        } else if (mid < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main(void) {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 2;

    int target_index = binary_search(arr, size, target);
    if (target_index == -1) {
        printf("target not found\n");
    } else {
        printf("target found at index: %d\n", target_index);
    }

    return 0;
}
