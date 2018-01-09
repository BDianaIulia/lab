#include <stdio.h>
#include <stdlib.h>

FILE *f;
typedef struct list
{
    char *productname;
    int cost;
    struct list * next;
};

char ch[40];
int no;

int main()
{
    f = fopen( "C:\\Users\\John\\Desktop\\fisiere\\ex2sub2.txt" , "r" );
    if( f == NULL )
    {
        printf( "Error" );
        return 0;
    }

    struct  list *p = (struct list *) malloc( sizeof( struct list ) );
    p -> next = NULL;

    fscanf( f , "%s" , ch );
    p -> productname = ch;

    fscanf( f , "%d" , &no );
    p -> cost = no;

    struct list * head = p;

    while( feof( f ) == 0 )
    {
        struct list * newEl = (struct list *) malloc( sizeof( struct list ) );
        newEl -> next = NULL;

        fscanf( f , "%s" , ch );
        newEl -> productname = ch;

        fscanf( f , "%d" , &no );
        newEl -> cost = no;

        p -> next = newEl;
        p = newEl;
    }

    p = head;
    int maxim = 0;

    while( p )
    {
        if( p -> cost  >  maxim )
        {
            maxim = p -> cost;
        }

        p = p -> next;
    }

    printf( "\n%d\n" , maxim );

    fclose( f );
    while( head )
    {
        p = head -> next;
        free( head );
        head = p;
    }
    return 0;
}
