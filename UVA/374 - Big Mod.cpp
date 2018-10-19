#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int bigmod(ll base,ll pow,ll mod)
{
    if (pow==0)
        return 1;
    if (pow%2==1)
    {
        ll p1=base%mod;
        ll p2=(bigmod(base,pow-1,mod))%mod;
        return (p1*p2)%mod;
    }
    if (pow%2==0)
    {
        ll p1;
        p1=(bigmod(base,pow/2,mod))%mod;
        return ((p1*p1)%mod);
    }
}
int main()
{
    ll base,pow,mod,k;
    while (scanf ("%lld %lld %lld",&base,&pow,&mod)==3){
    k=bigmod(base,pow,mod);
    cout<<k<<endl;
    }
}
