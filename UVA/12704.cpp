#include <stdio.h>
#include <math.h>
int main ()
{
    double n,a,b,c,r,max,min,i,j,k;
    scanf ("%lf",&n);
    for (k=0;k<n;k++)
    {
        scanf ("%lf %lf %lf",&a,&b,&r);
        c=sqrt((a*a)+(b*b));
        i=c+r;
        j=r-c;
        max=(i>j)?i:j;
        min=(i<j)?i:j;
        printf ("%0.2lf %0.2lf\n",min,max);
    }
return 0;
}
