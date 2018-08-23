#include <stdio.h>
int main ()
{
    int a,b,c,i,j,n,k,cnt;

    scanf ("%d",&n);
    for (i=1,cnt=0;i<=n;i++)
    {
        scanf("%d %d",&a,&b);

        if (b-a>=2)
            cnt++;
    }
    printf ("%d\n",cnt);
}
