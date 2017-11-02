#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int a, b, c;
float x1, x2;

int delta (int a1, int b1, int c1);

int main()
{

    printf ("a = "); scanf ( "%d", &a );
    printf ("\nb = "); scanf ( "%d", &b );
    printf ("\nc = "); scanf ( "%d", &c );


    x1 = ( -b ) + sqrt( delta( a, b, c ));
    x1 = x1 / (2* a);

    x2 = ( -b ) - sqrt( delta( a, b, c ));
    x2 = x2 / (2* a);

    printf ("\n x1 = %.2f  and  x2 = %.2f", x1, x2);

    return 0;
}

   int delta (int a ,int b ,int c)
    {  int result = b*b - 4*a*c;
         return result;
    }




