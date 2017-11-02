#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sigma;
int x[100];
int n;
int sum1 = 0;
int sum2 = 0;
int i;

int main()
{   printf ( "Enter the value of N:\n" ); scanf ( "%d", &n );
    printf ( "Enter the values f measurements:\n");
        for ( i=1; i <= n; i++ )
            scanf ( "%d", &x[i] );

    for ( i=1; i <= n; i++ )
        sum1 = sum1 + x[i]*x[i];

    for ( i=1; i <= n; i++ )
        sum2 = sum2 + x[i];

    sum2 = sum2 * sum2;

    sigma = sqrt( (n * sum1 - sum2) / ( n * (n - 1)) );

    printf ( "\n Sigma is %d", sigma );



    return 0;
}
