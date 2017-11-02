#include <stdio.h>
#include <stdlib.h>
int main()
{   int k = 1;
    int contorFactors = 0;
    int i;
    int number;
    int factors[100];

    printf("Enter the number:\n");
    scanf("%d", &number);

    for( i=2; i <= number/2 ; i++ )
        if( number % i == 0 )
            {contorFactors ++;
             factors[k] = i;
             k++;
            }

    if ( contorFactors == 0)
        printf("The number is prime");
    else
        { printf ("This number isn't prime and his factors are:\n" );
          for ( i=1; i < k; i++ )
              printf ("%d\n", factors[i]);
        }

    return 0;
}
