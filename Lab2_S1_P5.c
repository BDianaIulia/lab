#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   int nrBase2 = 0;
    int nrBase10;
    long int powerOf10 = 1;
    int rest;



    printf( "Enter the number in base 10:\n" );
    scanf( "%d", &nrBase10 );


    while (nrBase10 != 0)
        {rest =  nrBase10 % 2;
         nrBase10 = nrBase10 / 2;
         nrBase2 = nrBase2 + rest * powerOf10;
         powerOf10 = powerOf10 * 10;
        }


    printf("\nThe number entered in base 2 is: %d\n" , nrBase2);



    int nrBase2_2;
    int nrBase10_2 = 0;
    long int powerOf2 = 1;

    printf("\nEnter the number in base 2:\n");
    scanf( "%d", &nrBase2_2 );


    while ( nrBase2_2 != 0)
        {  nrBase10_2 = nrBase10_2 + ( nrBase2_2 % 10 ) * powerOf2;
           powerOf2 = powerOf2 * 2;
           nrBase2_2 = nrBase2_2 / 10;
        }


    printf( "\nThe number entered in base 10 is:\n" );
    printf( "%d\n", nrBase10_2 );



    int number;
    int contor;
    int i;
    int k;

    printf( "\nEnter a number:\n");
    scanf ( "%d", &number );
    printf( "\nThe prime numbers smaller than this number are:\n");

    for ( i=2; i < number; i++ )
        { contor = 0;
          for ( k=2; k < i/2; k++ )
             if ( i % k == 0)
                contor ++;
          if ( contor == 0)
             printf ( "%d\n", i);
        }
    return 0;
}
