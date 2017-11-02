#include <stdio.h>
#include <stdlib.h>

int nrOfElements;
int i;
int elements[100];

int main()

{   printf("numer of elements is:");
        scanf("%d", &nrOfElements);
    printf("enter the number:");
        for( i=1; i<=nrOfElements; i++ )
            scanf("%d", &elements[i]);

    int nrMax = elements[1];
    int nrMin = elements[1];

    for( i=2; i<=nrOfElements; i++ )
        if( elements[i] > nrMax )
            nrMax = elements[i];
        else
            if( elements[i] < nrMin)
                nrMin = elements[i];

    printf("\nThe largest element is %d\n", nrMax);
    printf("The smallest element is %d\n", nrMin);
    printf("\nHello world!\n");
    return 0;
}
