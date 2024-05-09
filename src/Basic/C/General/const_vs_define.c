/*
 * const and #define are both used to set immutable values,
 * but they have significant differences in how they operate and are used.
 *
 * const:
 *  - its still a variable that has scope and type,
 *    declared with a specific data type and adhere to type rules.
 *  - it is stored in memory.
 *
 * #define:
 *  - its a preprocessor directive used to define macros or constants.
 *  - it tell the compiler to replace all instances of a defined identifier
 *    with a value or expression before compilation begins.
 *  - it operates textually and is not aware of C's type system.
 */

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    const int MAX_STUDENTS = 300;

    printf("MAX_SIZE: %d\n", MAX_SIZE);
    printf("MAX_STUDENTS: %d\n", MAX_STUDENTS);

    return 0;
}
