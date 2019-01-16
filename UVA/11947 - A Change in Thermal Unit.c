#include <stdio.h>
int main ()
{
    float a,b,c;
    int n,m=1;
    scanf("%d",&n);
    while (m<=n)
    {
        scanf ("%f %f",&a,&b);
        c=a+(b/1.8);
        printf ("Case %d: %0.2f\n",m,c);
        m++;
    }
}
