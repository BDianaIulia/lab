#include <stdio.h>
#include <stdlib.h>

void interchange ( int *a, int *b );

int main()
{
    int x;
    int y;
    int *a;
    int *b;

    printf (" Enter x and y: \n");
        scanf ( "%d%d", &x, &y);

    a = &x;
    b = &y;

    interchange ( a, b );

    printf ( "%d %d", x, y );

    return 0;
}


void interchange ( int *a, int *b )
{
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;

}
