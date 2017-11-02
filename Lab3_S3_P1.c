#include <stdio.h>
#include <stdlib.h>

int vector1[100];
int vector2[100];
int finalVector [100];
int nr1;
int nr2;
int i;
int j;
int constant1;
int constant2;
int constant3;


int main()
{
    printf ( "Enter the dimension of the first vector:\n");
        scanf ( "%d", &nr1 );
    printf ( "Enter the numbers of the first vector:\n");
        for( i=1; i <= nr1 ; i++ )
            scanf ( "%d", &vector1[i] );


    printf ( "Enter the dimension of the second vector:\n");
        scanf ( "%d", &nr2 );
    printf ( "Enter the numbers of the second vector:\n");
        for( j=1; j <= nr2 ; j++ )
            scanf ( "%d", &vector2[j] );


    int k;

    for ( i=1, j=1, k=1; i <= nr1+1 && j <= nr2+1 ;  k++ )
    {
        if ( vector1[i] <= vector2[j] )
        {
            finalVector[k] = vector1[i];
            i++;
        }
        else
        {
            finalVector[k] = vector2[j];
            j++;
        }
        constant1 = i;
        constant2 = j;
        constant3 = k;
    }

    if ( constant1 > nr1 )
    {
        for ( constant2 ; constant2 <= nr2; constant2++ )
        {
            finalVector [constant3] = vector2 [constant2];
            constant3++;
        }
    }
    else
    {
        for ( constant1 ; constant1 <= nr1; constant1++ )
        {
            finalVector [constant3] = vector1 [constant1];
            constant3++;
        }
    }

    for ( k=1 ; k <= nr1+nr2; k++ )
        printf ( " %d  ", finalVector [k] );

    return 0;
}
