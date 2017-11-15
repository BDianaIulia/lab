#include <stdio.h>
#include <stdlib.h>

int n;
int arr[30];
int contor = 0;
int i;


int main()
{
    printf ( "Enter n: \n");
        scanf ( "%d", &n );

    printf ( "Enter the terms: \n");
    for ( i = 0; i < n; i++  )
        scanf ( "%d", &arr[i] );


    for ( i = 1 ; i < n - 1 ; i++ )
        if ( arr[i] = (arr[i - 1] + arr[i + 1] ) / 2 )
            contor ++;

    printf ( "\nThe number of the elements which are equal to the average value of the neighbor elements is %d", contor );


    return 0;
}


