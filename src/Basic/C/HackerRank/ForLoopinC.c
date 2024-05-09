// easy

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);

    // Complete the code.

    // init the numbers
    char numbers[10][6] = {
        "one", "two",   "three", "four", "five",
        "six", "seven", "eight", "nine"
    };

    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            // if the number is between 1 and 9, print the number
            printf("%s\n", numbers[i - 1]);
        } else if (i > 9) {
            // if the number is greater than 9, print even or odd
            if (i % 2 == 0) {
                printf("even\n");
            } else {
                printf("odd\n");
            }
        }
    }

    return 0;
}
