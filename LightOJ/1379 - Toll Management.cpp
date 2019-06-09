#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 10005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<ll,ll>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
struct edge
{
    ll u,v,w;
};
ll n,m,st,en,p;
vector<pi>grid[N];
vector<pi>rgrid[N];
vector<edge>edges;
ll dis[N],rdis[N];
void reset()
{
    ll i;
    rep0(i,n+1)
    {
        grid[i].clear();
        rgrid[i].clear();
        dis[i]=1e18;
        rdis[i]=1e18;
    }
    edges.clear();
}
void dijkstra_forward()
{
    priority_queue<pi,vector<pi>,greater<pi> >pq;
    dis[st]=0;
    pq.push({0,st});
    while(!pq.empty())
    {
        pi p=pq.top();
        pq.pop();
        ll i,w=p.fi,u=p.se;
        rep0(i,grid[u].size())
        {
            pi pr=grid[u][i];
            ll v=pr.fi,c=pr.se;
            if(dis[v]>dis[u]+c)
            {
                dis[v]=dis[u]+c;
                pq.push({dis[v],v});
            }
        }
    }
}
void dijkstra_backward()
{
    priority_queue<pi,vector<pi>,greater<pi> >pq;
    rdis[en]=0;
    pq.push({0,en});
    while(!pq.empty())
    {
        pi p=pq.top();
        pq.pop();
        ll i,w=p.fi,u=p.se;
        rep0(i,rgrid[u].size())
        {
            pi pr=rgrid[u][i];
            ll v=pr.fi,c=pr.se;
            if(rdis[v]>rdis[u]+c)
            {
                rdis[v]=rdis[u]+c;
                pq.push({rdis[v],v});
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
        sll(n,m);
        slll(st,en,p);
        reset();
        ll i,u,v,w;
        rep0(i,m)
        {
            slll(u,v,w);
            grid[u].pb({v,w});
            rgrid[v].pb({u,w});
            edges.pb({u,v,w});
        }
        dijkstra_forward();
        dijkstra_backward();
        ll mx=-1;
        rep0(i,m)
        {
            u=edges[i].u;
            v=edges[i].v;
            w=edges[i].w;
            if(dis[u]==1e18 || rdis[v]==1e18)
                continue;
            if(dis[u]+rdis[v]+w<=p)
                mx=max(mx,w);
        }
        pf("Case %d: %lld\n",t,mx);
    }
}
