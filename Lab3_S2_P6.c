#include <stdio.h>
#include <stdlib.h>

int main()
{   int sum = 0;
    int i;
    int nr;

    printf ( "Enter the value of the last number:\n" );
        scanf ( "%d", &nr );

    for ( i=1 ; i <= nr ; i++ )
        sum = sum + i*i;


    printf ( "\nThe value of the sum of the first %d squares is %d", nr, sum );


    i = nr;
    while ( sum > 0)
    {
        sum += i*i;
        i++;
    }

    printf ( "\n\n The largest value of the last number that gives you a correct answer is %d\n", i-2 );

    return 0;
}
