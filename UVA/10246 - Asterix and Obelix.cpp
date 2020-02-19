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
#define N 85
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
int n,m,q;
int dis[N][N],cost[N][N];
void reset()
{
    int i,j;
    rep(i,n)
    {
        rep(j,n)
        {
            dis[i][j]=i==j?0:1e9;
            cost[i][j]=0;
        }
    }
}
void floydwarshall()
{
    int i,j,k;
    rep(k,n)
    {
        rep(i,n)
        {
            rep(j,n)
            {
                if(dis[i][j]+cost[i][j]>dis[i][k]+dis[k][j]+max(cost[i][k],cost[k][j]))
                {
                    dis[i][j]=dis[i][k]+dis[k][j];
                    cost[i][j]=max(cost[i][k],cost[k][j]);
                }
            }
        }
    }
}
int main()
{
    int t=1;
    while(1)
    {
        sfff(n,m,q);
        reset();
        if(n+m+q==0)
            return 0;
        int i,j,k;
        rep(i,n)
            sf(cost[i][i]);
        int u,v,w;
        rep0(i,m)
        {
            sfff(u,v,w);
            dis[u][v]=w;
            dis[v][u]=w;
            cost[u][v]=max(cost[u][u],cost[v][v]);
            cost[v][u]=max(cost[u][u],cost[v][v]);
        }
        floydwarshall();
        floydwarshall();
        if(t!=1)
            puts("");
        pf("Case #%d\n",t++);
        rep0(i,q)
        {
            sff(u,v);
            if(dis[u][v]>=1e9)
                puts("-1");
            else
                pf("%d\n",dis[u][v]+cost[u][v]);
        }
    }
}
