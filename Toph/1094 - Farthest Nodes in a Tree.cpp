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
#define N 30005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n;
int dis[N];
vector<pi>grid[N];
priority_queue<pi,vector<pi>,greater<pi> >pq;
void setvalue()
{
    int i;
    rep0(i,n)
    {
        grid[i].clear();
        dis[i]=1e9;
    }
}
void dijkstra(int src)
{
    dis[src]=0;
    pq.push({0,src});
    int i;
    while(!pq.empty())
    {
        pi p=pq.top();
        pq.pop();
        int u=p.se,w=p.fi;
        if(w>dis[u])
            continue;
        rep0(i,grid[u].size())
        {
            pi pr=grid[u][i];
            int v=pr.fi,c=pr.se;
            if(dis[v]>dis[u]+c)
            {
                dis[v]=dis[u]+c;
                pq.push({dis[v],v});
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
        sf(n);
        setvalue();
        int i,u,v,w;
        rep0(i,n-1)
        {
            sfff(u,v,w);
            grid[u].pb({v,w});
            grid[v].pb({u,w});
        }
        dijkstra(0);
        int mx=-1,farnode=-1;
        rep0(i,n)
        {
            if(dis[i]>mx)
            {
                mx=dis[i];
                farnode=i;
            }
        }
        rep0(i,n)
            dis[i]=1e9;
        dijkstra(farnode);
        mx=-1;
        rep0(i,n)
            mx=max(mx,dis[i]);
        pf("Case %d: %d\n",t,mx);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
