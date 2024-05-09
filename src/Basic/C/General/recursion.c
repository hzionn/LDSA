#include <stdio.h>

int sum(int number);

int main() {

    int result = sum(10);

    printf("result: %d\n", result);

    return 0;
}

int sum(int number) {
    if (number > 0) {
        return number += sum(number - 1);
    } else {
        return 0;
    }
}
