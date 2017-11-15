#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int age;
char name [15];
int rest;
int i;

int main()
{
    printf ( "Enter the name and the age: \n");
        scanf ( "%s%d", name, &age );

    for ( i = 0 ; i < strlen( name ) ; i++ )
    {
        name [i] += age;

        if ( ( name [i] > 'Z') && ( name [i] < 'd' ) )
        {
            name [i] -= age;
            rest = 'Z' - name [i];
            name [i] = 'A' + age - rest - 1;
        }

        if ( name [i] > 'z')
        {
            name [i] -= age;
            rest = 'z' - name [i];
            name [i] = 'a' + age - rest - 1;
        }

    }

    printf ( "%s", name );

    return 0;
}
