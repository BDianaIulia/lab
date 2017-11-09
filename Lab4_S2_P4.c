#include <stdio.h>
#include <stdlib.h>

void findMinMax ( int a[], int* minim, int* maxim );

int* minim1;
int* maxim1;
int vct[12];
int i;

int main()
{
    for ( i=1; i <= 10; i++ )
        vct [i] = rand() % 100;

    for ( i=1; i <= 10 ; i++ )
        printf ( " %d ", vct [i] );

    minim1 = maxim1 = & vct [1];

    findMinMax( vct, minim1, maxim1 );

    return 0;
}


void findMinMax ( int a[], int* minim, int* maxim )
{
    int i;

    for ( i=2; i <= 10 ; i++ )
    {
        if ( *minim > a[i] )
            minim = & a[i];

        if ( *maxim < a[i] )
            maxim = & a[i];
    }
    printf ( "\nminim: %d and maxim: %d", *minim, *maxim );
}
