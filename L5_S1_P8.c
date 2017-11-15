#include <stdio.h>
#include <stdlib.h>

char str [50];
int i;
int contor = 1;
int vect [26];

int main()
{
    printf ( "Enter the string : \n");
        gets ( str );

    for ( i = 0; i < strlen ( str ) ; i++ )
        if ( str[i] == ' ' )
            contor ++;

    printf ( "a) The number of words is : %d \n", contor );

    for ( i = 0 ; i < strlen ( str ) ; i++ )
        if ( str [i] >= 'A'  &&  str [i] <= 'Z' )
            str [i] += 32;

    for ( i = 0 ; i < 26 ; i++ )
        vect [i] = 0;

    for ( i = 0 ; i < strlen ( str ) ; i++ )
    {
        int x = str [i];
        if ( x > 96  &&  x < 123 )
            vect [ x - 97 ] ++;
    }

    printf ("b)");

    for ( i = 0 ; i < 26 ; i++ )
        if ( vect [i] != 0 )
        {
            char letter = i + 97;
            printf ( "\n the letter  %c  appears  %d  time(s) ", letter , vect [i] );
        }

    return 0;
}
