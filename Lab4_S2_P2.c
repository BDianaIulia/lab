#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14
int n;
float a;
float b;
float c;
float d;
float x;

void firstFunct( int n , float a, float b, float c, float d, float x );
void secondFunct ( float a, float b, float c, float d, float x );

int main()
{
    printf ( "Enter the integer value for n and the decimal values of a, b, c, d, and x, in this order:\n");
    scanf ( "%d %f %f %f %f %f", &n, &a, &b, &c, &d, &x );

    firstFunct ( n, a, b, c, d, x );

    secondFunct( a, b, c, d, x );


    return 0;
}

void firstFunct ( int n , float a, float b, float c, float d, float x )
{
    float answer;

    answer =  a * pow( x, 2*n ) + b * x * x + c * x + d;

    printf ( "\n %.2f ", answer );
}


void secondFunct ( float a, float b, float c, float d, float x )
{
    float answer;

    answer = a * x * x + b * x + cos ( PI * c );

    printf ( "\n %.2f ", answer );
}
