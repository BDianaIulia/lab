#include <stdio.h>
#include <stdlib.h>

int age;
int movieLenght;

int main()
{   printf ( "Enter your age:\n");
        scanf( "%d", &age );
    printf ( "Enter the length of the movie:\n");
        scanf ( "%d", &movieLenght );


    if ( ( age <= 17 ) && ( movieLenght <= 90 ) )
        printf("DISCOUNT APPLIES\n");
    else
        printf("NO DISCOUNT\n");


    if ( ( age > 17 ) || ( movieLenght > 90 ))
        printf("NO DISCOUNT\n");
    else
        printf("DISCOUNT APPLIES\n");

    return 0;
}
