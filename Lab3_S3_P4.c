#include <stdio.h>
#include <stdlib.h>

int nonPrimeNumber (int x);
int vector1 [200];

int main()
{
    int nrAppear;
    int k;
    int nr;
    int i;


    printf ( "Enter the last N term \n" );
        scanf ( "%d", &nr );

    int contor = 1;
    int vectorPosition = 1;

    while ( vectorPosition <= nr )
    {
        for ( k=1; k <= contor; k++ )
        {
            vector1 [vectorPosition] = k;
            vectorPosition++;
        }

        if ( nonPrimeNumber (contor) != 0 )
        {
            for ( nrAppear =1;  nrAppear < contor;  nrAppear++ )
            {
                vector1 [vectorPosition] = contor;
                vectorPosition++;
            }
        }

        contor++;
    }

    printf ( "The sequence that contains the first N terms:\n");

    for ( i=1; i <= nr; i++)
    printf (" %d  ", vector1 [i] );

    return 0;
}

int nonPrimeNumber (int x)
{
    int nonPrimeNr = 0;
    int i;

    for ( i=2; i<= x/2; i++ )
        if ( x % i == 0 )
        {
            nonPrimeNr = x;
            break;
        }

    return nonPrimeNr;
}
