#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %lld: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long int ll;
using namespace std;
ll ara[100000005];
int main()
{
    ll n,i,j,k;
    ara[0]=1;
    ara[1]=1;
    ara[2]=2;
    for (i=1;i<=45;i++)
    {
       ara[2*i]=ara[i]*ara[i]+1;
       ara[(2*i)+1]=ara[i]*ara[i+1]+2;
    }
    sf(k);
    for (j=1;j<=k;j++)
    {
       sf(n);
       pf("Case %d: ",j);
       for (i=1;;i++)
       {
           if(ara[i]==n)
            break;
       }
       pf("%lld\n",i);
    }
}
