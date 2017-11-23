#include <stdio.h>
#include <stdlib.h>

void minmax(int a[], int *min, int *max);

int i;
int vectorr[20];
int length;
int mini;
int maxi;

int main()
{
    printf ("Enter the length of the sequence: \n");
    scanf ( "%d", &length );

    printf ( "Enter the sequence: \n");
    for ( i = 0 ; i < length ; i++ )
        scanf ( "%d" , &vectorr[i] );

    mini = maxi = vectorr[0];

    int *min = &mini;
    int *max = &maxi;

    minmax( vectorr, min, max );

    printf ( "\n The minimum and the maximum are : %d   %d \n", *min, *max );

    return 0;
}


void minmax(int a[], int *min, int *max )
{
    int i;

    for ( i = 0 ; i < length ; i++ )
    {
        if ( *min > a[i] )
            *min = a[i];

        if ( *max < a[i] )
            *max = a[i];
    }
}
