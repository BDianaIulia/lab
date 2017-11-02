#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{   char nume[30];
    int i;

    gets(nume);
    int lung=strlen(nume);

    for(i=0;i<lung;i++)
    if(nume[i]>='a' && nume[i]<='z')
        nume[i]=nume[i]-32;

     printf("upper-care:  %s\n", nume);

      for(i=0;i<lung;i++)
    if(nume[i]>='A' && nume[i]<='Z')
        nume[i]=nume[i]+32;

      printf("lower-care:  %s", nume);

    printf("\nHello world!\n");
    return 0;
}
