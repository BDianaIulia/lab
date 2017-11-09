#include <stdio.h>
#include <stdlib.h>

int basePtoBase10 ( int xP , int baseP );
int basePtoBase10 ( int xP , int baseP );
int inverse ( int x );

int main()
{
    int xP;
    int baseP;
    int baseQ;
    int x10;

    printf ( "Enter the number and the base in which it's : \n");
        scanf ( "%d%d", &xP, &baseP );


    printf ( "\nThe number , in base 10, is : %d \n", basePtoBase10 ( xP, baseP ) );

    printf ( "\nEnter the new base: \n");
        scanf ( "%d", &baseQ );



    x10 = basePtoBase10 ( xP, baseP );
    printf ( "\nThe number, in base %d, is: %d", baseQ, base10toBaseQ ( x10, baseQ ) );

    return 0;
}

int basePtoBase10 ( int xP , int baseP )
{
    int x10 = 0;
    int powerOfP = 1;

    while ( xP )
    {
        x10 = x10 + ( xP % 10 ) * powerOfP;
        xP /= 10;
        powerOfP *= baseP;
    }

    return x10;
}

int base10toBaseQ ( int x10, int baseQ )
{
    int xQ = 0;
    int powerOf10 = 1;

    while ( x10 )
    {
        xQ = xQ + ( x10 % baseQ ) * powerOf10;
        x10 /= baseQ;
        powerOf10 *= 10;
    }

    return xQ;
}


