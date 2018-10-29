#include <bits/stdc++.h>
#define sf(n) scanf("%lld",&n)
#define sff(n,m) scanf("%d %d",&n,&m)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define pf printf
using namespace std;
typedef long long int ll;
int main()
{
    ll n;
    while(1)
    {
        sf(n);
        if(n==0)
            break;

        ll m=1,p;
        while(m<n)
        {
            m*=2;
            m++;
        }
        if(m==n)
            puts("Bob");
        else
            puts("Alice");
    }
}
