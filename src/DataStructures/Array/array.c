#include <stdio.h>

#define SIZE 5  // define the constant size of the array

int main()
{
    // initialize array with size 5
    // we wish to store 5 integers
    int arr[SIZE] = {1, 2, 3, 4, 5};

    // print the first element of the array
    printf("first element of the array is %d\n", arr[0]);
    // print the second element of the array
    printf("second element of the array is %d\n", arr[1]);

    // get the first n elements of the array
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        printf("%d element of the array is %d\n", i, arr[i]);
    }

    // get the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("size of this array is %d\n", size);

    return 0;
}
