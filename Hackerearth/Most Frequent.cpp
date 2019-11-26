#include <bits/stdc++.h>
#define N 1000000
using namespace std;
int frq[2*N],ara[N],i,k,n,mx=0;
main()
{
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>k;
        k+=N;
        ara[i]=k;
        mx=max(mx,++frq[k]);
    }
    for(i=0;i<n;i++)
    {
        if(frq[ara[i]]==mx)
        {
            printf("%d",ara[i]-N);
            return 0;
        }
    }
}
