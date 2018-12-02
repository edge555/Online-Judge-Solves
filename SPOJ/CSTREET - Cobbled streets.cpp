#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sf(num) scanf("%lld",&num)
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
#define N 300001
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m;
int par[N];
struct edge
{
    int u,v;
    ll w;
    bool operator<(const edge &p)const
    {
        return w<p.w;
    }
}grid[N];
void setpar(int n)
{
    int i;
    rep(i,n)
        par[i]=i;
}
int findpar(int n)
{
    return par[n]==n?n:findpar(par[n]);
}
ll mst()
{
    sort(grid,grid+m);
    ll sum=0,i;
    rep0(i,m)
    {
        int u=findpar(grid[i].u);
        int v=findpar(grid[i].v);
        if(u!=v)
        {
            par[u]=v;
            sum+=grid[i].w;
        }
    }
    return sum;
}
int main()
{
    int tc,i,c;
    scanf("%d",&tc);
    while(tc--)
    {
        sfff(c,n,m);
        setpar(n);
        rep0(i,m)
        {
            int u,v;
            ll w;
            sff(u,v);
            sf(w);
            grid[i].u=u;
            grid[i].v=v;
            grid[i].w=w;
        }

        ll ans=mst();
        pf("%lld\n",ans*c);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
