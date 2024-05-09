// easy

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int n;
    scanf("%d", &n); // 77589

    // Complete the code to calculate the sum of the five digits on n.
    //  sum = 7 + 7 + 5 + 8 + 9 = 36

    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    printf("%d", sum);

    return 0;
}
