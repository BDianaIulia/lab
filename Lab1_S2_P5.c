#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{   int i;
    char name[20];
    gets(name);

    printf("\n");
    for(i=1;i<=10;i++)
    printf("%s\n", name);

    printf("Hello world!\n");
    return 0;
}
