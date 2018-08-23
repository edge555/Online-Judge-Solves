#include <stdio.h>
int main ()
{
    int ara[10000],i,j,n,k,cnt=0;
    float ave,pc,sum;
    scanf ("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf ("%d",&k);
        for (j=0,sum=0;j<k;j++)
        {
        scanf ("%d",&ara[j]);
        sum+=ara[j];
        }
        ave=sum/k;
        for (j=0,cnt=0;j<k;j++)
        {
            if (ara[j]>ave)
                cnt++;
        }
        pc=((cnt*1.0)/k)*100;
            printf ("%0.3f%%\n",pc);
    }
        return 0;
}
