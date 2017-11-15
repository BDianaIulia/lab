#include <stdio.h>
#include <stdlib.h>

void doSpace ( int* p, int i, int n );

int v1[50];
int v2[100];
int n;
int i;

int main()
{
    printf ( "Enter the length of the sequence: \n" );
        scanf ( "%d", &n );

    printf ( "Enter the sequence: \n");

    for ( i=1 ; i <= n; i++ )
        scanf ( "%d", &v1[i] );


    for ( i=1 ; i <= n; i++ )
        v2 [ 2*i - 1] = v1 [i];

    for ( i=2 ; i <= (2*n - 1); i += 2 )
        v2 [i] = ( v2 [i - 1] + v2 [i + 1] ) / 2;


    for ( i=1 ; i <= (2*n -1) ; i++ )
        printf ( "% d ", v2 [i] );

    return 0;
}

