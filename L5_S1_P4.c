#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int convBase2toBase8 ( int x2 );
int convBase2toBase10 ( int x2 );
void convBase2toBase16 ( int x2 , char* p );
void inversion ( char *p , int leigthOfString );

int nrInBase2;

int main()
{
    printf ( "Enter the number in base 2: \n ");
        scanf ( "%d", &nrInBase2 );

    printf ( "\n a) This number in base 8 is : %d \n ", convBase2toBase8( nrInBase2 ) );


    char nrInBase16 [20];
    char *p;

    p = &nrInBase16;

    convBase2toBase16 ( nrInBase2 , p );

    inversion ( p , strlen ( nrInBase16 ) );

    printf ( "\n b) The number in base 16 is : %s \n", nrInBase16 );

    return 0;
}

int convBase2toBase8 ( int x2 )
{
    int x8 = 0;
    int coada;
    int powerOf10 = 1;

    do
    {
        coada = x2 % 1000 ;
        x2 /= 1000 ;

        x8 += convBase2toBase10 ( coada ) *  powerOf10;
        powerOf10 *= 10;
    }
    while ( x2 );

    return x8;
}

int convBase2toBase10 ( int x2 )
{
    int x10 = 0;
    int powerOf2 = 1;

    do
    {
        x10 += ( x2 % 10 )  * powerOf2 ;
        x2 /= 10;
        powerOf2 *= 2;
    }
    while ( x2 );

    return x10;
}


void convBase2toBase16 ( int x2 , char* p )
{
    int coada;
    char x;

    do
    {
        coada = x2 % 10000;
        x2 /= 10000;

        x = convBase2toBase10 ( coada ) + 48 ;

        if ( x > 57 )
            x += 7;

        *p = x;
        p ++;
    }
    while ( x2 );
}


void inversion ( char *p , int leigthOfString )
{
    int aux;
    int cursor = leigthOfString - 1;

    do
    {
        aux = *p;
        *p = *( p + cursor );
        *( p + cursor ) = aux;

        cursor --;
        p ++ ;
    }
    while ( cursor > ( leigthOfString / 2 )  );
}
