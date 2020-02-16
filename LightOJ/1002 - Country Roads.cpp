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
struct node
{
    int w,u;
    node(int _w,int _u)
    {
        w=_w;
        u=_u;
    }
    bool operator<(node p) const{
        return p.w<w;
    }
};
int n,m,s;
vector<pi>grid[N];
int dis[N],ans[N];
void reset()
{
    int i;
    rep0(i,n)
    {
        grid[i].clear();
        dis[i]=1e9;
    }
}
void dijkstra()
{
    priority_queue<node>pq;
    pq.push({0,s});
    dis[s]=0;
    while(!pq.empty())
    {
        node n=pq.top();
        pq.pop();
        int i,u=n.u,w=n.w;
        dis[u]=min(dis[u],w);
        rep0(i,sz(grid[u]))
        {
            pi pr=grid[u][i];
            int v=pr.fi,c=max(pr.se,w);
            if(dis[v]>c)
            {
                dis[v]=c;
                pq.push({c,v});
            }
        }
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,u,v,w;
        sff(n,m);
        reset();
        rep0(i,m)
        {
            sfff(u,v,w);
            grid[u].pb({v,w});
            grid[v].pb({u,w});
        }
        sf(s);
        dijkstra();
        pf("Case %d:\n",t);
        rep0(i,n)
        {
            if(dis[i]==1e9)
                puts("Impossible");
            else
                pf("%d\n",dis[i]);
        }
    }
}
