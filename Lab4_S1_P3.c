#include <stdio.h>
#include <stdlib.h>

int average ( int x, int y, int z );
int addition ( int x, int y, int z );
int product ( int x, int y, int z );

int main()
{
    int x;
    int y;
    int z;

    printf ( "Enter the three numbers : \n");
        scanf ( "%d%d%d", &x, &y, &z );

    printf ( " addition: %d\n product: %d\n average: %d\n", addition(x,y,z), product(x,y,z), average(x,y,z) );
    return 0;
}


int addition ( int x, int y, int z )
{
    return x + y + z;
}

int product ( int x, int y, int z )
{
    return x * y * z;
}

int average ( int x, int y, int z )
{
    return ( addition ( x, y, z ) / 2 );
}
