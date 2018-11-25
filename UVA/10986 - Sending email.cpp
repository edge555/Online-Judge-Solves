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
int n,m,i;
vector<pi>grid[20001];
int dis[20001];
priority_queue<pi,vector<pi>,greater<pi>>pq;
void setvalue()
{
    rep0(i,n)
    {
        grid[i].clear();
        dis[i]=1e9;
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
            int c=pr.se,v=pr.fi;
            if(dis[u]+c<dis[v])
            {
                dis[v]=dis[u]+c;
                pq.push(mpp(dis[v],v));
            }
        }
    }
}
int main()
{
    int tc,t;
    sf(tc);
    rep(t,tc)
    {
        sff(n,m);
        int st,en;
        sff(st,en);
        if(m==0)
        {
            pf("Case #%d: unreachable\n",t);
            continue;
        }
        setvalue();
        int a,b,w;
        while(m--)
        {
            sfff(a,b,w);
            grid[a].pb(mpp(b,w));
            grid[b].pb(mpp(a,w));
        }
        dijkstra(st);
        pf("Case #%d: ",t);
        if(dis[en]==1e9)
            pf("unreachable\n");
        else
            pf("%d\n",dis[en]);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
