#include <stdio.h>
#include <stdlib.h>

float vector1 [2][35];
int j;
int i;

float average ( float a[][35] );
float highLow ( float b [][35], float minim, float maxim );

int main()
{
    printf ( " Enter the high and low temperatures for each day in the month of January: \n" );

    for ( j=1 ; j <= 31 ; j++ )
        for ( i=1 ; i <= 2 ; i++ )
            scanf ("%f", &vector1 [i][j] );

    printf( "\n The average: %.2f", average ( vector1 ) );


    return 0;
}

float average ( float a[][35] )
{
    float maxim = a[1][1];
    float minim = a[2][1];

    return ( highLow ( a , maxim, minim ) /2 ) ;
}



float highLow ( float b [][35], float minim1, float maxim1 )
{
    int j;

    for ( j=1; j <= 31 ; j++ )
        if ( b[1][j] > maxim1 )
            maxim1 = b[1][j];


    for ( j=1; j <= 31 ; j++ )
        if ( b[2][j] < minim1 )
            minim1 = b[2][j];

    printf ( " highest :%.2f and lowest: %.2f ", maxim1, minim1 );

    return ( maxim1 + minim1 );
}
