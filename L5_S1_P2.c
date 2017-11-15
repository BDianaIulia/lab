#include <stdio.h>
#include <stdlib.h>

int length;
int arr[30];
int ratio;
int ok = 1;
int i;

int main()
{
    printf ( "Enter the length of the sequence: \n");
        scanf ( "%d", &length );

    printf ( "Enter the terms : \n");

    for ( i = 0; i < length; i++ )
         scanf ( "%d", &arr[i] );

    ratio = arr[1] - arr[0];

    for ( i = 1; i < length - 1 ; i++ )
        if ( ratio != ( arr [i + 1] - arr [i] ) )
            ok = 0;

    if ( ok == 1 )
        printf ( "\n The sequence is in an arithmetical progression and the ratio is: %d \n", ratio );
    else
        printf ( "\n The sequence isn't in an arithmetical progression  \n" );
    return 0;
}
