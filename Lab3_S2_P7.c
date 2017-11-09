#include <stdio.h>
#include <stdlib.h>

int i, j;
int main()
{
    for ( i = 1; i <= 5; i++ )
    {
        for ( j = i; j <= 10 - i; j++ )
            printf ( " %d ", j );

        printf ( "\n");
    }
    return 0;
}
