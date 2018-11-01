#include <stdio.h>
int main ()
{
    int a,i,j,lar,n,o,ara[10000];

    scanf ("%d",&n);

    for (i=1;i<=n;i++)
    {
        scanf ("%d",&a);

        for (j=0;j<a;j++)
            scanf ("%d",&ara[j]);

        lar = ara[0];
        for (j=1;j<a;j++)
        {
            if (lar<ara[j])
                lar=ara[j];
        }
        printf("Case %d: %d\n",i,lar);
    }
    return 0;
}
