#include <stdio.h>
#include <stdlib.h>

int lines;
int columns;
int i;
int j;
int columnWith0;
int lineWith0;
int matrix[20][20];
int contor;

int main()
{
    printf ( "Enter the number of lines and columns:\n" );
        scanf ( "%d%d", &lines, &columns );

    printf ( "Enter the matrix:\n" );

    for( i=0; i < lines; i++ )
        for ( j=0; j < columns; j++ )
            scanf ( "%d", &matrix[i][j] );

    for ( i=0; i < lines; i++ )
        for ( j=0; j < columns; j++ )
            if ( matrix[i][j] == 0 )
            {
                lineWith0 = i;
                columnWith0 = j;

                do
                {
                    for ( j=0 ; j < columns ; j++ )
                        matrix[ lineWith0 ][j] = matrix[ lineWith0 + 1 ][j];

                    lineWith0 ++;
                }
                while ( lineWith0 < lines );


                 do
                {
                    for ( i=0 ; i < lines ; i++ )
                        matrix[i][ columnWith0 ] = matrix[i][ columnWith0 + 1 ];

                    columnWith0 ++;
                }
                while ( columnWith0 < columns );

                columns --;
                lines --;

            }

    for ( i=0; i < lines; i++ )
    {
        for ( j=0; j < columns; j++ )
            printf ( " %d ", matrix[i][j] );

        printf ("\n");
    }

    return 0;
}
