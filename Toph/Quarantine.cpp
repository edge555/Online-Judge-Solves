#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
vector<int>prime;
bool flag[N],check[N];
void sieve()
{
    int i,j;
    prime.pb(2);
    for(i=3;i*i<=N;i+=2)
    {
        if(check[i]==0)
        {
            prime.pb(i);
            for(j=(i*i);j<=N;j+=(2*i))
            check[j]=1;
        }
    }
    for(;i<=N;i+=2)
    {
        if(check[i]==0)
            prime.pb(i);
    }
}
int seg(ll a,ll b)
{
    int i,ans=0;
    for(i=0;i<(b-a+1);i++)
        flag[i]=0;
    if(a<2)
        a=2;
    for(i=0;(ll)(prime[i]* prime[i])<=b && i<prime.size();i++)
    {
        ll j=(prime[i]*(a/prime[i]));
        if(j<a)
            j+=prime[i];
        if(j<(ll)(prime[i]+prime[i]))
            j=prime[i]+prime[i];
        for(;j<=b;j+=prime[i])
            flag[j-a]=1;
    }
    for(i=0;i<(b-a+1);i++)
    {
        if(flag[i]==0)
             ans++;
    }
    return ans;
}
int main()
{
    sieve();
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int x,y;
        sff(x,y);
        pf("%d\n",seg(x,y));
    }
}
