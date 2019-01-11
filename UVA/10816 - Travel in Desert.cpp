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
#define N 101
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<double,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
const double INF=1e9;
int n,m,st,en,par[N];
double dis[N];
priority_queue<pi,vector<pi>,greater<pi> >pq;
struct edge
{
    int v;
    double t,d;
};
vector<edge>grid[N];
void reset()
{
    int i;
    rep(i,n)
    {
        grid[i].clear();
        par[i]=-1;
    }
}
void dijkstra(double lim)
{
    int i;
    rep(i,n)
        dis[i]=INF;
    dis[st]=0.0;
    pq.push({0.0,st});
    while(!pq.empty())
    {
        pi p=pq.top();
        pq.pop();
        int u=p.se,i;
        rep0(i,grid[u].size())
        {
            int v=grid[u][i].v;
            double temp=grid[u][i].t,c=grid[u][i].d;
            if(temp>lim)
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
    stack<int>s;
    s.push(en);
    while(s.top()!=st)
        s.push(par[s.top()]);
    while(!s.empty())
    {
        pf("%d",s.top());
        s.pop();
        if(s.empty())
            puts("");
        else
            pf(" ");
    }
}
int main()
{
    while(~sff(n,m))
    {
        reset();
        sff(st,en);
        int a,b;
        double t,d;
        while(m--)
        {
            sff(a,b);
            cin>>t>>d;
            grid[a].pb({b,t,d});
            grid[b].pb({a,t,d});
        }
        double low=0,high=100,ans=-1;
        int it=25;
        while(it--)
        {
            double mid=(low+high)/2;
            dijkstra(mid);
            if(dis[en]!=INF)
            {
                ans=mid;
                high=mid;
            }
            else
                low=mid;
        }
        dijkstra(ans);
        printpath();
        pf("%.1f %.1f\n",dis[en],ans);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
