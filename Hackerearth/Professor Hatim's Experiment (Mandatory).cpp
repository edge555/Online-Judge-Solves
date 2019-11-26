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
#define N 2001
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
int n,m,color[N];
bool ans;
vector<int>grid[N];
void reset()
{
    int i;
    rep(i,n)
    {
        color[i]=-1;
        grid[i].clear();
    }
}
void dfs(int u)
{
    int i;
    rep0(i,grid[u].size())
    {
        int v=grid[u][i];
        if(color[v]==color[u])
        {
            ans=false;
            return;
        }
        else if(color[v]==-1)
        {
            if(color[u]==1)
                color[v]=2;
            else
                color[v]=1;
            dfs(v);
        }
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sff(n,m);
        reset();
        int i,a,b;
        while(m--)
        {
            sff(a,b);
            grid[a].pb(b);
            grid[b].pb(a);
        }
        ans=true;
        rep(i,n)
        {
            if(color[i]==-1)
            {
                color[i]=1;
                dfs(i);
            }
            if(!ans)
                break;
        }
        if(!ans)
            puts("Suspicious lizards found!");
        else
            puts("No suspicious lizards found!");
    }
}
