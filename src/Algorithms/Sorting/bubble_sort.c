#include <stdio.h>

void bubble_sort(int arr[], int n)
{
    // pass
}

int main()
{

    // create an array
    int arr[5] = {5, 4, 3, 2, 1};

    // get the length of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("before sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // here we perform the bubble sort
    bubble_sort(arr, n);

    printf("after sorting: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
