#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 10001
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,dt;
int par[N],disc[N],low[N];
bool vis[N],AP[N];
vector<int>grid[N];
void reset()
{
    int i;
    rep(i,n)
    {
        vis[i]=false;
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
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,m,a,b;
        sff(n,m);
        reset();
        rep0(i,m)
        {
            sff(a,b);
            grid[a].pb(b);
            grid[b].pb(a);
        }
        tarjan();
        int cnt=0;
        rep(i,n)
        {
            if(AP[i])
                cnt++;
        }
        pf("Case %d: %d\n",t,cnt);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
