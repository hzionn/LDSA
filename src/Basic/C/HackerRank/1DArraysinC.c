// medium

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    // init the variables
    int n;
    int arr[1000];
    int sum = 0;

    // read number of elements
    scanf("%d\n", &n);

    // read elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // sum the elements of the array
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("%d\n", sum);

    return 0;
}
