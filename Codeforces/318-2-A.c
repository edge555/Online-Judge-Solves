#include <stdio.h>
int main()
{
    long long int n,k,ans,i;
    scanf ("%lld %lld",&n,&k);

    if (n%2==0)
    {
        if (k<=(n/2))
            ans=(k*2)-1;
        else if (k>(n/2))
            ans=(k-(n/2))*2;
    }
    else if (n%2==1)
    {
        if (k<=(n/2)+1)
            ans=(k*2)-1;
        else if (k>(n/2)+1)
            ans=(k-((n/2)+1))*2;
    }
    printf ("%lld\n",ans);
}
