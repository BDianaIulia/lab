#include <stdio.h>
#include <stdlib.h>

int nr ;
int perfect ( int nr );

int main()
{

    printf ( "The perfect numbers between 1 and 1000 are: \n" );
    for ( nr = 2 ; nr <= 1000; nr++ )
        if( perfect(nr) )
            printf ( "%d\n ", nr );
    return 0;
}

int perfect( int x )
{
    int sumOfFactors = 1;
    int i;

    for( i = 2 ; i <= x / 2 ; i++ )
        if ( x % i == 0 )
            sumOfFactors += i;

    if ( x == sumOfFactors )
        return 1;

    return 0;

}



