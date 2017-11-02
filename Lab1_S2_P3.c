#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   char name[20];
    gets(name);

    int i=0;
    while(i<=strlen(name))
        {if(name[i]==32)
          name[i]=10;
         i++;}

    printf("%s", name);
    printf("\n Hello world!\n");
    return 0;
}
