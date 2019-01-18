#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000003
#define fi first
#define se second
#define N 1000005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
ll  fact[N+1];
void gen()
{
    fact[0]=1;
    for(int i=1;i<=N;i++)
        fact[i]=((fact[i-1]%MOD)*(i%MOD))%MOD;
}
ll gcd(ll a,ll b)
{
    if (a==0)
        return b;
    return gcd(b%a,a);
}
ll power(ll x,ll y,ll m)
{
    if (y==0)
        return 1;
    ll p=power(x,y/2,m)%m;
    p=(p*p)%m;
    return (y%2==0)?p:(x*p)%m;
}
ll modInverse(ll a,ll m)
{
    ll g=gcd(a,m);
    return power(a,m-2,m);
}
int main()
{
    gen();
    int t,tc,n,r;
    sf(tc);
    for(t=1;t<=tc;t++)
    {
        sff(n,r);
        ll ans=((fact[r]%MOD)*(fact[n-r]%MOD))%MOD;
        ans=modInverse(ans,MOD);
        ans=((fact[n]%MOD)*(ans%MOD))%MOD;
        printf("Case %d: %lld\n",t,ans);
    }
}
