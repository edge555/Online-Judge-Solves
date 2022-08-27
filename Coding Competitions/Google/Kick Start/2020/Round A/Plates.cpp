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
#define N 55
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
ll dp[N][N*N],ara[N][N],n,k,p;
ll func(ll i,ll rem)
{
    if(rem==0 || i>=n)
        return 0;
    if(dp[i][rem]!=-1)
        return dp[i][rem];
    ll j,ans1=0,ans2=0,cur=0;
    ans1=func(i+1,rem);
    for(j=0;j<rem && j<k;j++)
    {
        cur+=ara[i][j];
        ans2=max(ans2,cur+func(i+1,rem-j-1));
    }
    return dp[i][rem]=max(ans1,ans2);
}
int main()
{
    ll t,tc;
    sl(tc);
    rep(t,tc)
    {
        ll i,j;
        slll(n,k,p);
        rep0(i,n)
        {
            rep0(j,k)
                sl(ara[i][j]);
        }
        mem(dp,-1);
        pf("Case #%lld: %lld\n",t,func(0,p));
    }
}
