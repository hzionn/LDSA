#include "helper.h"

int main(void) {
    int arr[10] = {5, 4, 3, 2, 1, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    print_array(arr, size);
    return 0;
}
