#include <stdio.h>
#include <stdlib.h>

int main()
{   printf("Diana Iulia\n");
    char a[30];
    int i;
    a[0]='A';
    printf("%c", a[0]);
    for(i=1;i<=25;i++)
        {a[i]=a[i-1]+1;
        printf("%c",a[i]);}
    printf("\n");

    float nr=1.23456789;
    printf("%10.1f %.2f\n",nr, nr);
    printf("%9.2f   %.3f\n",nr, nr);
    printf("%8.3f     %.4f\n",nr, nr);
    printf("%7.4f       %.5f\n",nr, nr);
    printf("%6.5f        %.6f\n",nr, nr);

    printf("\nHello world!\n");
    return 0;
}
