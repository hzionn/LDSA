#include <stdio.h>
#include <string.h>

int main() {
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%s\n", alphabet);

    // strlen() returns the length of the string which type is size_t (unsigned long)
    // that's why we use %zu to print it, instead of %d
    printf("length of alphabet: %zu\n", strlen(alphabet));

    // there will be plus one size for the null terminator
    printf("size of alphabet: %zu\n", sizeof(alphabet));

    char first_name[30] = "John";
    char last_name[] = "Doe";

    // concatenate two strings
    strcat(first_name, last_name);

    // result will store in first_name
    printf("full name: %s\n", first_name);
    printf("last name: %s\n", last_name);

    // copy a string
    char name[30] = "Henry";
    char name_copy[30];

    strcpy(name_copy, name);
    printf("copied name: %s\n", name_copy);

    // compare two strings
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";

    // return 0 if the strings are equal
    printf("str1 == str2: %d\n", strcmp(str1, str2));
    printf("str1 == str3: %d\n", strcmp(str1, str3));

    return 0;
}
