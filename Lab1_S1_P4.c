#include <stdio.h>
#include <stdlib.h>

int main()
{   int x, y;
    scanf("%d""%d", &x, &y);

    printf("x+y=%d\n", x+y);
    printf("x-y=%d\n", x-y);
    printf("x*y=%d\n", x*y);
    printf("x/y(integer)=%d\n", x/y);
    printf("x/y(real)=%.4f\n", (float) x/y);
    printf("x modulus y=%d\n", x%y);
    printf("Hello world!\n");
    return 0;
}
