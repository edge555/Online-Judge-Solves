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
int n,m,dis[N],dis2[N];
vector<pi>grid[N];
void reset()
{
    int i;
    rep0(i,n+5)
    {
        dis[i]=1e9;
        dis2[i]=1e9;
        grid[i].clear();
    }
}
void dijkstra2ndpath()
{
    priority_queue<pi,vector<pi>,greater<pi> >pq;
    pq.push({0,1});
    dis[1]=0;
    while(!pq.empty())
    {
        pi pr=pq.top();
        pq.pop();
        int u=pr.se,w=pr.fi,i,v;
        if(w>dis2[u])
            continue;
        rep0(i,grid[u].size())
        {
            pi p=grid[u][i];
            int v=p.fi,c=p.se;
            if(dis[v]>w+c)
            {
                dis2[v]=dis[v];
                dis[v]=w+c;
                pq.push({dis[v],v});
            }
            else if(w+c>dis[v] && w+c<dis2[v])
            {
                dis2[v]=w+c;
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
        sff(n,m);
        reset();
        int i,u,v,w;
        rep0(i,m)
        {
            sfff(u,v,w);
            grid[u].pb({v,w});
            grid[v].pb({u,w});
        }
        dijkstra2ndpath();
        pf("Case %d: %d\n",t,dis2[n]);
    }
}
