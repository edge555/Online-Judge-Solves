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
#define N 105
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
int n,cost[N][N];
bool path[N][N];
vector<int>grid[N];
void reset()
{
    int i,j;
    rep(i,n)
        grid[i].clear();
    memb(path);
}
int calc(int s)
{
    int sum=0,last=1;
    if(!path[1][s])
        sum=cost[1][s];
    while(s!=1)
    {
        int u=grid[s][0];
        int v=grid[s][1];
        if(u!=last)
        {
            if(!path[s][u])
                sum+=cost[s][u];
            last=s;
            s=u;
        }
        else
        {
            if(!path[s][v])
                sum+=cost[s][v];
            last=s;
            s=v;
        }
    }
    return sum;
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,u,v,w;
        sf(n);
        reset();
        rep0(i,n)
        {
            sfff(u,v,w);
            path[u][v]=true;
            cost[u][v]=w;
            cost[v][u]=w;
            grid[u].pb(v);
            grid[v].pb(u);
        }
        int left=calc(grid[1][0]),right=calc(grid[1][1]);
        pf("Case %d: %d\n",t,min(left,right));
    }
}
