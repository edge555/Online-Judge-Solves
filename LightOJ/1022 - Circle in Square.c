#include <stdio.h>
#include <math.h>
int main ()
{
    double r,a,s,ac,as,pi;
    int i=1,n;

    scanf ("%d",&n);

    while (i<=n)
    {
        scanf ("%lf",&r);

        pi=2*acos(0.0);

        ac=pi*r*r;
        as=4*r*r;

        s=as-ac;
        printf ("Case %d: %0.2lf\n",i,s);

        i++;
    }
}
