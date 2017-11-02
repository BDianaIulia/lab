#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define G 9,8
int main()
{   int  v, i=1;
    double x;

    printf("enter the angle that the projectile is launched (in whole degrees):\n");
    scanf("%lf", &x);
    printf("enter the initial velocity of the projectile (in meters/second):\n");
    scanf("%d", &v);

    float h=1;
    while(i<3)
    { h=h*v*sin(x);
      i++;
    }
    h=h/2*G;
    printf("The maximum height is %.4f\n", h );

    double r=2*v*v*sin(x)*cos(x);
    r=r/G;
    printf("The range is %lf\n", r);

    double t=2*v* sin(x);
    t=t/G;
    printf("the time it takes for the projectile to hit the ground is  %lf\n", t);

    printf("Hello world!\n");
    return 0;
}
