#include <stdio.h>
#include <stdlib.h>

int main()
{
    int angle;
    int i = 0;

    printf ( " Enter the angle:\n" );

    do
    {
        if ( i > 0 )
            printf ( "A wrong answer! Please, try again.\n");
        scanf ( "%d", &angle );
        i++ ;
    }
    while ( angle > 90 || angle < 0 );

    return 0;
}
