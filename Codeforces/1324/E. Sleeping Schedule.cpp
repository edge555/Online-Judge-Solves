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
#define N 2005
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
ll n,h,l,r;
ll ara[N],dp[N][N];
ll func(ll i, ll t)
{
    if(i>=n)
        return 0;
    if(dp[i][t]!=-1)
        return dp[i][t];
    ll t1=(t+(ara[i]-1))%h;
    ll t2=(t+ara[i])%h;
    ll h1=0,h2=0;
    if(t1>=l && t1<=r)
        h1=1+func(i+1,t1);
    else
        h1=func(i+1,t1);
    if(t2>=l && t2<=r)
        h2=1+func(i+1,t2);
    else
        h2=func(i+1,t2);
    dp[i][t]=max(h1,h2);
    return dp[i][t];
}
int main()
{
    FAST;
    int i;
    cin>>n>>h>>l>>r;
    rep0(i,n)
        cin>>ara[i];
    mem(dp,-1);
    cout<<func(0,0);
}
