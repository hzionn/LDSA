// ref: https://www.w3schools.com/c/c_switch.php

#include <stdio.h>

int main() {
    int day = 4;

    switch (day) {
        case 6:
            printf("today is saturday\n");
            break;
        case 7:
            printf("today is sunday\n");
            break;
        default:
            printf("looking forward to the weekend\n");
    }
    return 0;
}
