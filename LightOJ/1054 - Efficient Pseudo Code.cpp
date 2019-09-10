#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
bitset<N>mark;
vector<ll>prime;
vector<pi>fact;
ll n,m;
void sieve()
{
    mark.set();
    mark[0]=false;
    mark[1]=false;
    int i,j;
    for(i=4;i<N;i+=2)
        mark[i]=false;
    for(i=3;i*i<N;i++)
    {
        if(mark[i])
        {
            for(j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }
    prime.pb(2);
    for(i=3;i<=N;i++)
    {
        if(mark[i])
            prime.pb(i);
    }
}
void factorize(ll n)
{
    int i;
    for(i=0;i<prime.size() && prime[i]*prime[i]<=n;i++)
    {
        int cnt=0;
        while(n%prime[i]==0)
        {
            cnt++;
            n/=prime[i];
        }
        if(cnt)
            fact.pb({prime[i],cnt});
    }
    if(n>1)
        fact.pb({n,1});
}
ll bigmod(ll a,ll p,ll m)
{
    ll res=1%m,x=a%m;
    while(p)
    {
        if(p&1)
            res=(res*x)%m;
        x=(x*x)%m;
        p>>=1;
    }
    return res;
}
ll calc()
{
    int i;
    ll sum=1;
    rep0(i,fact.size())
    {
        ll pr=fact[i].fi,pw=fact[i].se;
        sum=(sum*(bigmod(pr,pw*m+1,MOD)-1+MOD))%MOD;
        sum=(sum*bigmod(pr-1,MOD-2,MOD))%MOD;
    }
    return sum;
}
int main()
{
    sieve();
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sll(n,m);
        fact.clear();
        factorize(n);
        pf("Case %d: %lld\n",t,calc());
    }
}
