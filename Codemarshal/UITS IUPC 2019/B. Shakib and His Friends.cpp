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
#define N 1005
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
vector<int>grid[N];
bool vis[N];
int n,m,dp[N][2];
void reset()
{
    int i;
    rep(i,n)
    {
        vis[i]=false;
        grid[i].clear();
    }
    mem(dp,0);
    memb(vis);
}
void solve(int u,int p=-1)
{
    dp[u][1]=1;
    vis[u]=1;
    int i;
    rep0(i,sz(grid[u]))
    {
        int v=grid[u][i];
        if(v!=p)
        {
            solve(v,u);
            dp[u][1]+=dp[v][0];
            dp[u][0]+=max(dp[v][1],dp[v][0]);
        }
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sff(n,m);
        reset();
        int i,u,v;
        rep0(i,m)
        {
            sff(u,v);
            grid[u].pb(v);
            grid[v].pb(u);
        }
        int ans=0;
        rep(i,n)
        {
            if(vis[i])
                continue;
            solve(i);
            ans+=max(dp[i][0],dp[i][1]);
        }
        pf("Case %d: %d\n",t,ans);
    }
}
