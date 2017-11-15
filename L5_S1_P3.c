#include <stdio.h>
#include <stdlib.h>

int prodArea1 = 1;
int sumArea2 = 0;
int prodArea3 = 1;
int sumArea4 = 0;
int dimension;
int i;
int j;
int matrix[30][30];

int main()
{
    printf ( "Enter the dimension of the matrix: \n" );
        scanf ( "%d", &dimension );

    printf ( "Enter the terms of the matrix: \n" );

    for ( i=0 ; i < dimension ; i++ )
        for ( j=0 ; j < dimension ; j++ )
            scanf ( "%d", &matrix[i][j] );


    for ( i=0 ; i < dimension ; i++ )
        for ( j=0 ; j < dimension ; j++ )
        {
            if (  ( i < j )  &&  ( ( i + j ) < ( dimension - 1 ) )   )
                prodArea1 *= matrix[i][j];


            if (  ( i > j )  &&  ( ( i + j ) <  ( dimension - 1 ) )   )
                sumArea2 += matrix[i][j];


            if (  ( i > j )  &&  ( ( i + j ) >=  dimension )  )
                prodArea3 *= matrix[i][j];


            if (  ( i < j )  &&  ( ( i + j ) >= dimension )   )
                sumArea4 += matrix[i][j];
        }

    printf ( " The product of the elements from area 1 is : %d \n ", prodArea1 );
    printf ( "The sum of the elements from area 2 is : %d \n " , sumArea2 );
    printf ( "The product of the elements from area 3 is : %d \n ", prodArea3 );
    printf ( "The sum of the elements from area 4 is : %d \n ", sumArea4 );


    return 0;
}
