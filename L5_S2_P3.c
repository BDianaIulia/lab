#include <stdio.h>
#include <stdlib.h>

int n;
int vect[100];
int i;

int main()
{

    printf ( "Enter n: \n");
        scanf ( "%d", &n );

    int contor = 1;
    int coada = 1;

    do
    {
        for ( i=1; i <= coada; i++ )
        {
            vect [contor] = i;
            contor ++;
        }
        coada ++;
    }
    while ( contor < n );

    for ( i=1 ; i <= n ; i++ )
        printf ( " %d ", vect[i] );


    return 0;
}


