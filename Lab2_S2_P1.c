#include <stdio.h>
#include <stdlib.h>

int contor2 = 0;
int contor5 = 0;
int nr;
int numbers[15];
int i;

int main()
{   printf(" Enter the number of numbers:\n" );
    scanf ( "%d", &nr );
    printf ("Enter the numbers:\n" );

    for ( i=1; i <= nr; i++ )
        scanf (" %d", &numbers[i] );

    for ( i=1; i <= nr; i++ )
        { if ( numbers[i] % 2 == 0 )
                contor2 ++;
          if ( numbers[i] % 5 == 0 )
                contor5 ++;
        }

    if ( contor5 < contor2 )
       { int aux = contor2;
         contor2 = contor5;
         contor5 = aux;
       }

    printf ("\nThe final product has %d zeroes", contor2);
    return 0;
}
