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
#define N 500005
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
int par[N],disc[N],low[N],ara[N];
int n,m,dt,mx;
bool vis[N],vis2[N],AP[N];
vector<int>grid[N];
void reset()
{
    int i;
    rep(i,n)
    {
        vis[i]=false;
        vis2[i]=false;
        par[i]=-1;
        grid[i].clear();
        AP[i]=false;
    }
    dt=0;
}
void dfs(int u)
{
    vis[u]=true;
    disc[u]=++dt;
    low[u]=disc[u];
    int i,child=0;
    rep0(i,grid[u].size())
    {
        int v=grid[u][i];
        if(!vis[v])
        {
            par[v]=u;
            child++;
            dfs(v);
            low[u]=min(low[u],low[v]);
            if(par[u]==-1 && child>1)
                AP[u]=true;
            else if(par[u]!=-1 && disc[u]<=low[v])
                AP[u]=true;
        }
        else if(par[u]!=v)
            low[u]=min(low[u],disc[v]);
    }
}
void tarjan()
{
    int i;
    rep(i,n)
    {
        if(!vis[i])
            dfs(i);
    }
}
void dfs2(int u)
{
    vis2[u]=true;
    mx=max(mx,ara[u]);
    int i,v;
    rep0(i,sz(grid[u]))
    {
        v=grid[u][i];
        if(!vis2[v] && !AP[v])
            dfs2(v);
    }
}
int main()
{
    int i,a,b,k;
    sfff(n,m,k);
    reset();
    rep0(i,m)
    {
        sff(a,b);
        grid[a].pb(b);
        grid[b].pb(a);
    }
    rep(i,n)
        sf(ara[i]);
    tarjan();
    ll sum=0;
    vector<ll>vec;
    rep(i,n)
    {
        if(!AP[i] && !vis2[i])
        {
            mx=0;
            dfs2(i);
            vec.pb(mx);
        }
    }
    sort(all(vec),greater<>());
    rep0(i,k)
        sum+=vec[i];
    pf("%lld",sum);
}
