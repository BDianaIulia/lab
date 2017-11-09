#include <stdio.h>
#include <stdlib.h>

int i;
int main()
{

    printf ( " a) \n" );
    for ( i = 2 ; i < 61; i += 2 )
        printf ( " %d ", i );


    printf ( "\n b) \n" );
    i = 2;
    while ( i < 61 )
    {
        printf ( " %d ", i );
        i += 2;
    }


    printf ( "\n c) \n" );
    i = 2;
    do
    {
        printf ( " %d ", i );
        i += 2;
    }
    while ( i < 61 );


    return 0;
}
