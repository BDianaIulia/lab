#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[226];

int main()
{
    printf ( "Enter the string: \n" );
        gets ( str );

    int contor;
    int maxim = 0;
    int i;

    for ( i = 0 ; i < strlen ( str ) ; i++ )
    {
        contor = 1;

        while ( str [i] == str [i - 1] + 1 )
        {
            contor ++;
            i++;
        }

        if ( contor > maxim )
            maxim = contor;
    }

    printf ( "%d", maxim );
    return 0;
}
