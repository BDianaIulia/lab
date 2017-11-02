#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{  int n1, n2, i, square1, square2;
    scanf("%d%d", &n1, &n2);

     printf("square root of n1 is %d\n", square1= sqrt(n1));

     printf("square root of n2 is %d\n", square2= sqrt(n2));

     long long power;
      printf("n1 to the power of n2 is %lli\n", power=pow(n1, n2));

    int inv1=0;
    while(n1!=0)
        {inv1= inv1*10+ n1%10;
         n1=n1/10;}
    printf("inverse n1= %d\n", inv1);

    int inv2=0;
    while(n2!=0)
        {inv2= inv2*10+ n2%10;
         n2=n2/10;}
    printf("inverse n2= %d\n", inv2);
    printf("Hello world!\n");
    return 0;
}
