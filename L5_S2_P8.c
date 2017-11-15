#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char word[30];
void isPalindrome ( char word[], int length );
int length;

int main()
{
    printf ( " Enter the word: \n");
        gets ( word );

    length = strlen ( word );

    isPalindrome (  word , length );

    return 0;
}

void isPalindrome ( char word[], int length )
{
    int ok = 1;
    int i = 0;
    int left = 0;
    int right = length - 1;

    while ( ( left <= right ) && ( ok == 1 ) )
    {
        if ( word [ left ] == word [ right ] )
        {
            left ++;
            right --;
        }
        else
            ok = 0;
    }

    if ( ok == 1 )
        printf ( "1 (Palindrome)");
    else
        printf ( "0 (Nonpalindorme)" );
}
