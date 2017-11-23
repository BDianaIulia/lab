#include <stdio.h>
#include <stdlib.h>
#define N 10

float ident[N][N];
float *p;
int i;
int j;

int main()
{
    for ( i = 0; i < N  ; i++ )
        for ( j = 0; j < N ; j++ )
            ident[i][j] = 0;


    p = ident;

    for ( i = 0; i < N ; i++ )
    {
        *p = 1;
        p = p + 11;
    }


    for ( i = 0 ; i < N ; i++ )
    {
        for ( j = 0; j < N ; j++ )
            printf ( " %.0f ", ident[i][j] );

        printf ( "\n" );
    }
    return 0;
}

