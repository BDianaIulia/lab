#include <stdio.h>
#include <stdlib.h>

int main()
{
    long vector1 [100];

    vector1 [0] = 0;
    vector1 [1] = 1;

    printf ( "%ld  %ld  ", vector1[0], vector1[1] );

    int i = 1;

    do
    {
        i++;
        vector1 [i] = vector1 [i-1] + vector1 [i-2];
        printf ( "%ld   ", vector1[i] );
    }
    while  ( vector1 [i] > 0 );

    return 0;
}
