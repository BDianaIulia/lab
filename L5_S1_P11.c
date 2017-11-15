#include <stdio.h>
#include <stdlib.h>

int countNegatives(int numArray[]);
int findFirstNegative(int numArray[]);

int main()
{
    int arr[2][2] = { 9 , 3 , -2 , -8 };

    printf ( "%d\n", countNegatives( arr ) );
    printf ( "%d", findFirstNegative( arr ) );

    return 0;
}

int countNegatives(int numArray[])
{
    int count = 0;
    int i;

    for ( i = 0; i < 2*2 ; i++ )
    {
        if ( numArray[i] < 0 )
            count++;
    }
    return count;
}


int findFirstNegative(int numArray[])
{
    int index = 0;

    while ( numArray[ index ] >= 0  &&  index < 4  )
        index++;

    return index;
}
