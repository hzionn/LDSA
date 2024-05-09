// medium

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

    /* Write the logic to reverse the array. */

    // init the temporary array
    int temp_arr[1000];

    // start from find the last element of the original array
    // and put it in the first element of the temporary array
    for (i = 0; i < num; i++) {
        temp_arr[i] = *(arr + num - i - 1);
    }

    // replace the original array with the reversed array
    arr = temp_arr;

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
