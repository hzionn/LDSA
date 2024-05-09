// easy

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch;
    char s[50];
    char sen[50];

    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    // handly function to read a string with spaces
    fgets(sen, sizeof(sen), stdin);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);

    return 0;
}
