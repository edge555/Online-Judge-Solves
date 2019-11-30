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
int n,cost[N][N];
bool vis[N];
ll mx;
vector<pi>grid[N];
void reset()
{
    int i;
    rep(i,n)
    {
        grid[i].clear();
        vis[i]=false;
    }
}
void dfs(int u,int p,ll c)
{
    mx=max(mx,c);
    int i,v;
    rep0(i,grid[u].size())
    {
        v=grid[u][i].fi;
        if(v!=p)
            dfs(v,u,c+cost[u][v]);
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sf(n);
        reset();
        int i,u,v,w;
        ll sum=0;
        rep0(i,n-1)
        {
            sfff(u,v,w);
            grid[u].pb({v,w});
            grid[v].pb({u,w});
            cost[u][v]=w;
            cost[v][u]=w;
            sum+=2*w;
        }
        mx=-1;
        dfs(1,-1,ll(0));
        pf("Case %d: %lld\n",t,sum-mx);
    }
}
