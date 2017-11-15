#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char bigString [50] = "Ana eat apple and pear";
    char firstString [20] = "apple";
    char secondSring [20] = "banana";
    char keepInMind[20];

    char *p;

    p = strstr ( bigString, firstString );

    *p = 0 ;

    strcpy ( keepInMind, bigString );

    strcat ( keepInMind, secondSring );

    strcat ( keepInMind, p + strlen(firstString) );

    printf ("%s", keepInMind );
    return 0;
}
