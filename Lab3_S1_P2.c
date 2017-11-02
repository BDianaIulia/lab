#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nrTotal;
    int vector1 [100];
    int nrSearched;
    int initial;
    int i;

    printf ( "Enter the total number:\n" );
        scanf ( "%d", &nrTotal );

    printf ( "Enter the numbers (in increasing order): \n");
        for ( i=0; i < nrTotal  ; i++ )
            scanf ("%d", &vector1 [i] );

    printf ( "Enter the number you searched for:\n" );
        scanf ( "%d", &nrSearched );


     int left = 0;
     int right = nrTotal - 1;
     int middle;
     int ok = 0;

    while ( left <= right && ok == 0 )
    {
        middle = ( left + right ) / 2;
        if ( vector1 [middle] == nrSearched )
        {
            printf ( "The position on which the number is located is %d", middle );
            ok = 1;
        }
        else
            if ( vector1 [middle] < nrSearched )
                left = middle + 1;
            else
                right = middle - 1;
    }

    if ( ok == 0 )
        printf ( "-1");

    return 0;
}
