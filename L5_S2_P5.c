#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char firtString[100];
    char substring[20];
    int *p;
    int contor = 0;

    printf ( "Enter the first string:\n" );
        gets( firtString );

    printf ( "Enter the substring: \n" );
        gets ( substring );


    p = strstr( firtString , substring );

    while (p)
    {
        contor ++;
        p++;
        p = strstr ( p, substring );
    }

    printf ("%d", contor );
    return 0;
}
