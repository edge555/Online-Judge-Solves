#include <stdio.h>
int main ()
{
    int n,i,j,a,b,sum=0;
    scanf ("%d",&n);

    for (i=1;i<=n;i++)
    {
        scanf ("%d",&a);
        for (j=0,sum=0;j<a;j++)
        {
            scanf ("%d",&b);
            sum+=b;
        }
        printf ("Case %d: %d\n",i,sum);
    }
    return 0;
}
