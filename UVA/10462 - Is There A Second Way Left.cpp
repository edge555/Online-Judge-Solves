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
#define N 105
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m;
int par[N];
bool vis[N];
struct edge
{
    int u,v,w;
    bool taken;
    bool operator<(const edge &p)const
    {
        return w<p.w;
    }
};
vector<edge>vec;
vector<int>grid[N];

void makeset()
{
    int i;
    rep(i,n)
    {
        par[i]=i;
        vis[i]=false;
        grid[i].clear();
    }
}
int findpar(int n)
{
    return par[n]==n?n:par[n]=findpar(par[n]);
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
int firstmst()
{
    sort(all(vec));
    int cost=0,i;

    rep0(i,vec.size())
    {
        int u=findpar(vec[i].u);
        int v=findpar(vec[i].v);
        if(u!=v)
        {
            par[u]=v;
            cost+=vec[i].w;
            vec[i].taken=true;
        }
    }
    return cost;
}
int secondmst()
{
    int cost=INT_MAX,i,j,k;
    rep0(i,vec.size())
    {
        if(vec[i].taken)
        {
            int cost2=0,temp=vec[i].w;
            vec[i].w=INT_MAX;
            makeset();
            rep0(j,vec.size())
            {
                int u=findpar(vec[j].u);
                int v=findpar(vec[j].v);
                if(u!=v && vec[j].w!=INT_MAX)
                {
                    par[u]=v;
                    cost2+=vec[j].w;
                    grid[u].pb(v);
                    grid[v].pb(u);
                }
            }
            vec[i].w=temp;
            dfs(1);
            rep(k,n)
            {
                if(!vis[k])
                    cost2=INT_MAX;
            }
            cost=min(cost,cost2);
        }
    }
    return cost;
}
int main()
{
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        sff(n,m);
        makeset();
        int i,u,v,w;
        rep0(i,m)
        {
            sfff(u,v,w);
            vec.pb({u,v,w,false});
            grid[u].pb(v);
            grid[v].pb(u);
        }
        dfs(1);
        bool connected=true;
        rep(i,n)
        {
            if(!vis[i])
                connected=false;
        }
        pf("Case #%d : ",t);
        if(!connected)
            pf("No way\n");
        else
        {
            if(n==m+1)
                pf("No second way\n");
            else
            {
                int cost=firstmst();
                int cost2=secondmst();
                pf("%d\n",cost2);
            }
        }
        vec.clear();
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
