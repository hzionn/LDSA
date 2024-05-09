#include <stdio.h>

void greeting(char name[], int age);

int main() {

    greeting("Liam", 14);
    greeting("Jone", 37);
    greeting("Mary", 22);

    return 0;
}

void greeting(char name[], int age) {
    printf("Hello, i'm %s, and i'm %d years old.\n", name, age);
}
