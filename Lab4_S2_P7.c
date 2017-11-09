#include <stdio.h>
#include <stdlib.h>

float randomNo;

int main()
{
    do
        randomNo = (float) rand () / 3 ;
    while ( randomNo < 0 || randomNo >= 15 );

    printf(" %.2f ", randomNo );


    do
        randomNo = (float) rand () / 3 ;
    while ( randomNo < 15 || randomNo >= 40 );

    printf("\n %.2f ", randomNo );


    randomNo = rand () % 13;
    printf("\n %d ", (int) randomNo );


    randomNo = 12 + 3 * ( rand () % 7 );
    printf("\n %d ", (int) randomNo );

    return 0;
}
/*a. A random floating point value in [0,15).
b. A random floating point value in [15,40).
c. A random integer from the set {0, 1, 2, ... , 12}.
d. A random integer from the set {12, 15, 18, 21, 24, 27, 30}.*/
