#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
#define sff(num1,num2) scanf("%lld %lld",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara) memset(ara,-1,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<long long int,long long int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
ll n,m,i;
vector<pi>grid[N];
bool vis[N];
ll dis[N],par[N];
stack<ll>s;
priority_queue<pi,vector<pi>,greater<pi>>pq;
void setvalue()
{
    rep(i,n)
    {
        dis[i]=1e18;
        par[i]=i;
    }
}
void dijkstra(ll src)
{
    dis[src]=0;
    pq.push({0,1});
    while(!pq.empty())
    {
        pi p=pq.top();
        pq.pop();
        int u=p.se,w=p.fi;
        if(vis[u])
            continue;
        vis[u]=true;
        rep0(i,grid[u].size())
        {
            pi pr=grid[u][i];
            int v=pr.fi,c=pr.se;
            if(vis[v])
                continue;
            if(dis[v]>dis[u]+c)
            {
                dis[v]=dis[u]+c;
                par[v]=u;
                pq.push({dis[v],v});
            }
        }
    }
}
void printpath()
{
    while(!s.empty())
    {
        pf("%lld ",s.top());
        s.pop();
    }
}
int main()
{
    sff(n,m);
    setvalue();
    rep0(i,m)
    {
        ll a,b,w;
        sfff(a,b,w);
        grid[a].pb({b,w});
        grid[b].pb({a,w});
    }
    dijkstra(1);
    if(dis[n]==1e18)
    {
        pf("-1");
        return 0;
    }
    s.push(n);
    while(1)
    {
        ll k=s.top();
        if(k==1)
            break;
        s.push(par[k]);
    }
    printpath();
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
