#include <stdio.h>

void update(int *a, int *b) {
    // params: pointers of a and b

    int sum = *a + *b;
    int diff = *a - *b;

    // if the difference is negative, make it positive
    if (diff < 0) {
        diff *= -1;
    }

    // replace the values of a and b with the sum and diff
    *a = sum;
    *b = diff;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
