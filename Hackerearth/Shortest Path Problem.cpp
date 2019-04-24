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
#define inf 0x3f3f3f3f
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
vector<pi>grid[10001];
vector<int>dist;
int wt[10001];
int n,m,i;
priority_queue<pi,vector<pi>,greater<pi>>pq;
void setwt()
{
    rep0(i,n+1)
        dist.pb(1e9);
}
void dijkstra(int src)
{
    dist[src]=0;
    pq.push(mpp(0,src));
    while(!pq.empty())
    {
        pi p=pq.top();
        pq.pop();
        int u=p.se;
        rep0(i,grid[u].size())
        {
            pi pr=grid[u][i];
            int v=pr.fi;
            int w=pr.se;
            if(dist[v]>dist[u]+w)
            {
                dist[v]=dist[u]+w;
                pq.push(mpp(dist[v],v));
            }
        }
    }
}
void printpathcost()
{
    reps(i,2,n)
        cout<<dist[i]<<" ";
}
int main()
{
    sff(n,m);
    int a,b,w;
    rep0(i,m)
    {
        sfff(a,b,w);
        grid[a].pb(mpp(b,w));
    }
    setwt();
    dijkstra(1);
    printpathcost();
}
