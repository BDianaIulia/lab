#include <stdio.h>
#include <stdlib.h>

int nr;
int vector1 [100];
int aux;
int i;
int j;

int main()
{
    printf ( "Enter the length of the sequence:\n" );
        scanf ( "%d", &nr );

    printf ( "Enter the terms of the sequence:\n ");
    for ( i=1; i <= nr; i++ )
        scanf ( "%d", &vector1[i] );


    for ( i=1; i < nr; i++ )
        for ( j = i; j <= nr; j++ )
            if ( vector1 [i] > vector1 [j])
            {
                aux = vector1 [i];
                vector1 [i] = vector1 [j];
                vector1 [j] = aux;
            }


    printf ( "The shorted sequence: \n ");
    for ( i=1 ; i <= nr; i++ )
        printf ( " %d  ", vector1 [i] );


    return 0;
}
