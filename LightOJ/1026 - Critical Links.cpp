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
vector<int>grid[N];
vector<pi>bridge;
int vis[N],seen[N],par[N];
int cnt,root,ap[N],n;
void dfs(int x)
{
    if(vis[x]!=-1)
        return;
    vis[x]=seen[x]=cnt++;
    int i,adj=0;
    rep0(i,grid[x].size())
    {
        int v=grid[x][i];
        if(par[x]==v)
            continue;
        if(vis[v]==-1)
        {
            adj++;
            par[v]=x;
            dfs(v);
            seen[x]=min(seen[x],seen[v]);
            if(seen[v]>=vis[x] && x!=root)
                ap[x]=1;
            if(seen[v]==vis[v])
                bridge.push_back({min(v,x),max(v,x)});
        }
        else
        {
            seen[x]=min(seen[x],vis[v]);
            seen[v]=min(seen[x],seen[v]);
        }
    }
    if(x==root)
        ap[x]=(adj>1);
}
void bridges()
{
    int i;
    bridge.clear();
    rep0(i,n+1)
    {
        vis[i]=seen[i]=par[i]=-1;
        ap[i]=0;
    }
    cnt=0;
    rep0(i,n+1)
    {
        if(vis[i]==-1)
        {
            root=i;
            dfs(i);
        }
    }

}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,u,v;
        char num[30];
        sf(n);
        rep0(i,n)
        {
            scanf("%d%s",&u,num);
            int k=atoi(&num[1]);
            while(k--)
            {
                sf(v);
                grid[u].push_back(v);
				grid[v].push_back(u);
            }
        }
        bridges();
        pf("Case %d:\n",t);
        pf("%d critical links\n",sz(bridge));
        sort(all(bridge));
        rep0(i,sz(bridge))
            pf("%d - %d\n",bridge[i].fi,bridge[i].se);
        rep0(i,n+1)
            grid[i].clear();
    }
}
