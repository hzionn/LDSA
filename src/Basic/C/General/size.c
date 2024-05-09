#include <stdio.h>

// when passing an array to a function, the array is converted to a pointer
void foo(int arr[]) {
    // this gives the size of the pointer
    printf("size of array in foo: %zu bytes\n", sizeof(arr));
}

int main() {

    int arr[10];

    // this gives the total size of the array
    printf("size of array in main: %zu bytes\n", sizeof(arr));

    foo(arr);

    // to get the length of the array
    printf("length of array: %zu\n", sizeof(arr) / sizeof(arr[0]));

    return 0;
}
