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
#define pi pair<long long int,long long int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
ll n,m,x,q;
ll dis[N],dis2[N];
vector<pi>grid[N],rgrid[N];
void reset()
{
    int i;
    rep0(i,N)
    {
        dis[i]=1e17;
        dis2[i]=1e17;
        grid[i].clear();
        rgrid[i].clear();
    }
}
void dijkstra()
{
    priority_queue<pi,vector<pi>,greater<pi> >pq;
    dis[x]=0;
    pq.push({0,x});
    while(!pq.empty())
    {
        pi p=pq.top();
        pq.pop();
        ll i,w=p.fi,u=p.se;
        if(w>dis[u])
            continue;
        rep0(i,grid[u].size())
        {
            pi p=grid[u][i];
            ll v=p.fi,c=p.se;
            if(dis[v]>dis[u]+c)
            {
                dis[v]=dis[u]+c;
                pq.push({dis[v],v});
            }
        }
    }
}
void dijkstra2()
{
    priority_queue<pi,vector<pi>,greater<pi> >pq;
    dis2[x]=0;
    pq.push({0,x});
    while(!pq.empty())
    {
        pi p=pq.top();
        pq.pop();
        ll i,w=p.fi,u=p.se;
        if(w>dis2[u])
            continue;
        rep0(i,rgrid[u].size())
        {
            pi p=rgrid[u][i];
            ll v=p.fi,c=p.se;
            if(dis2[v]>dis2[u]+c)
            {
                dis2[v]=dis2[u]+c;
                pq.push({dis2[v],v});
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
        sll(x,q);
        reset();
        ll i,u,v,w;
        rep0(i,m)
        {
            slll(u,v,w);
            grid[u].pb({v,w});
            rgrid[v].pb({u,w});
        }
        dijkstra();
        dijkstra2();
        pf("Case %d:\n",t);
        while(q--)
        {
            sff(u,v);
            if(dis[v]==1e17 || dis2[u]==1e17)
                puts("Be seeing ya, John");
            else
                pf("%lld\n",dis[v]+dis2[u]);
        }
    }
}
