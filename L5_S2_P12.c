#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char message[100];
char *p;
int i;

int main()
{
    printf ( "Enter a massage with uppercase : \n");
        gets ( message );

    p = strchr ( message, 'A' );

    if (p)
        printf ( "The address for the first A is : %d\n", p - &message[0] + 1 );
    else
        printf ( "not found A\n");


    p = strchr ( message, 'E' );

    if (p)
        printf ( "The address for the first E is : %d\n", p - &message[0] + 1 );
    else
        printf ( "not found E\n");


    p = strchr ( message, 'I' );

    if (p)
        printf ( "The address for the first I is : %d\n", p - &message[0] + 1 );
    else
        printf ( "not found I\n");


    p = strchr ( message, 'O' );

    if (p)
        printf ( "The address for the first O is : %d\n", p - &message[0] + 1 );
    else
        printf ( "not found O\n");


    p = strchr ( message, 'U' );

    if (p)
        printf ( "The address for the first U is : %d\n", p - &message[0] + 1 );
    else
        printf ( "not found U\n");

    return 0;
}
