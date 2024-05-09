// easy

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Complete the following function.

int marks_summation(int *marks, int number_of_students, char gender) {
    // Write your code here.
    /*
     * read marks[0], marks[2], marks[4], ... for gender = 'b'
     * read marks[1], marks[3], marks[5], ... for gender = 'g'
     */
    int sum = 0;
    if (gender == 'b') {
        for (int i = 0; i < number_of_students; i++) {
            if (i % 2 == 0) {
                sum += marks[i];
            }
        }
    } else if (gender == 'g') {
        for (int i = 0; i < number_of_students; i++) {
            if (i % 2 != 0) {
                sum += marks[i];
            }
        }
    }
    return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *)malloc(number_of_students * sizeof(int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}
