#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

float rad;
float nr_degrees;

int main()
{   printf("enter the value of the angle in radians:");
    scanf("%f", &rad);

    nr_degrees = rad * 180;
    nr_degrees = nr_degrees / PI;


    printf("%.4f", nr_degrees);
    printf("\n Hello world!\n");
    return 0;
}
