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
#define N 10005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
struct edge
{
    int u,v,w;
    bool operator<(const edge &p)const
    {
        return w<p.w;
    }
};
vector<edge>vec;
vector<int>grid[N];
bool vis[N];
int par[N];
void setvalue(int n)
{
    int i;
    rep(i,n)
    {
        par[i]=i;
        vis[i]=false;
        grid[i].clear();
    }
    vec.clear();
}
void dfs(int n)
{
    int i;
    vis[n]=true;
    rep0(i,grid[n].size())
    {
        int k=grid[n][i];
        if(!vis[k])
            dfs(k);
    }
}
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
}
ll mst()
{
    ll cost=0;
    int i;
    sort(all(vec));
    rep0(i,vec.size())
    {
        int u=findpar(vec[i].u);
        int v=findpar(vec[i].v);
        if(u!=v)
        {
            cost+=vec[i].w;
            par[u]=v;
            grid[u].pb(v);
            grid[v].pb(u);
        }
    }
    return cost;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int n,m,c,u,v,w,i;
        sfff(n,m,c);
        setvalue(n);
        rep0(i,m)
        {
            sfff(u,v,w);
            if(w<c)
                vec.pb({u,v,w});
        }
        ll cost=mst();
        int color=0;
        rep(i,n)
        {
            if(!vis[i])
            {
                color++;
                dfs(i);
            }
        }
        ll ans=c*color+cost;
        pf("Case #%d: %lld %d\n",t,ans,color);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
