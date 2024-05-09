#include <stdio.h>

int main() {
    int matrix[2][3] = {
        {1, 4, 2},
        {3, 6, 8},
    };

    // the index always starts from 0
    printf("before: matrix[0][2] is %d\n", matrix[0][2]);

    // change the value of an element
    matrix[0][2] = 5;
    printf("after: matrix[0][2] is %d\n", matrix[0][2]);

    // loop through the matrix
    printf("loop through the matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
