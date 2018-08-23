#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long int ll;
using namespace std;

int main()
{
    ll n,sum,k,a;
    sf(n);
    sum=(n*(n+1))/2;
    sf(k);
    while(k--)
    {
        sf(a);
        sum-=a;

    }
    pf("%lld\n",sum);
}
