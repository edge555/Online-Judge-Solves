#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%lld %lld",&num1,&num2)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define MOD 1000000007
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
bool func(ll a,ll b)
{
    return a>b;
}
int main()
{
    ll n,k,sum=0,a,b,i;
    sff(n,k);
    vector<ll>vec;
    for (i=0;i<n;i++)
    {
        sff(a,b);
        sum+=a;
        vec.pb(a-b);
    }
    if(sum<=k)
    {
        puts("0");
        return 0;
    }
    sort(vec.begin(),vec.end(),func);
    ll cnt=0;
    i=0;
    while(!(sum<=k))
    {
        sum-=vec[i++];
        cnt++;
        if(i==vec.size())
            break;
    }
    if(sum>k)
        puts("-1");
    else
        pf("%lld\n",cnt);
}
