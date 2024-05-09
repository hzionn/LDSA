// easy

#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    int numbers[4] = {a, b, c, d};
    int array_size = sizeof(numbers)/sizeof(numbers[0]);

    // init the max to the first number
    // traverse the array and
    // update the max if the current number is greater than the max
    int max = numbers[0];
    for (int i = 1; i < array_size; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
