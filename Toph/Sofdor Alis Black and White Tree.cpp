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
vector<int>grid[N];
int color[N],white[N],black[N],ans[N];
void dfs(int u,int p)
{
    if(color[u]==1)
        white[u]=1;
    else
        black[u]=1;
    int i,v;
    rep0(i,grid[u].size())
    {
        v=grid[u][i];
        if(v!=p)
        {
            dfs(v,u);
            white[u]+=white[v];
            black[u]+=black[v];
        }
    }
    ans[u]=black[u]-white[u];
}
int main()
{
    int i,n,w=0;
    sf(n);
    rep0(i,n)
    {
        sf(color[i]);
        w+=color[i];
    }
    int u,v;
    rep0(i,n-1)
    {
        sff(u,v);
        grid[u].pb(v);
        grid[v].pb(u);
    }
    int mx=w;
    dfs(0,-1);
    rep0(i,n)
        mx=max(mx,w+ans[i]);
    pf("%d",mx);
}
