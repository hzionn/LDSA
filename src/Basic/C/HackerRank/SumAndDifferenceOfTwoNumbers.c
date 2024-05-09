// easy

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int int_a, int_b;
    float float_a, float_b;

    // read two integers and two floats into variables
    scanf("%d %d", &int_a, &int_b);
    scanf("%f %f", &float_a, &float_b);
	
    printf("%d %d\n", int_a + int_b, int_a - int_b);

    // print the floats with one decimal place
    printf("%.1f %.1f\n", float_a + float_b, float_a - float_b);

    return 0;
}
