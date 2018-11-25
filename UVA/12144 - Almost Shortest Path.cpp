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
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m,st,en,i,j;
vector<pi>grid[501];
vector<int>path[501];
int dis[501];
priority_queue<pi,vector<pi>,greater<pi>>pq;
void setvalue()
{
    rep0(i,n)
    {
        grid[i].clear();
        dis[i]=1e9;
    }
}
void deletepath()
{
    queue<int>q;
    q.push(en);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        rep0(i,path[u].size())
        {
            int v=path[u][i];
            if(v!=st)
                q.push(v);
            rep0(j,grid[v].size())
            {
                if(grid[v][j].fi==u)
                {
                    grid[v].erase(grid[v].begin()+j);
                    break;
                }
            }
        }
    }
    rep0(i,n)
    {
        dis[i]=1e9;
        path[i].clear();
    }
}
void dijkstra(int src)
{
    dis[src]=0;
    pq.push(mpp(0,src));
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
                path[v].clear();
                path[v].pb(u);
                dis[v]=dis[u]+c;
                pq.push(mpp(dis[v],v));
            }
            else if(dis[v]==dis[u]+c)
                path[v].pb(u);
        }
    }
}
int main()
{
    while(1)
    {
        sff(n,m);
        if(n+m==0)
            return 0;
        sff(st,en);
        setvalue();
        int a,b,w;
        while(m--)
        {
            sfff(a,b,w);
            grid[a].pb(mpp(b,w));
        }
        dijkstra(st);
        deletepath();
        dijkstra(st);
        if(dis[en]==1e9)
            pf("-1\n");
        else
            pf("%d\n",dis[en]);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
