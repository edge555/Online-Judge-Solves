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
#define N 205
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define SZ(x) x.size()
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
bool vis[N];
void dfs(int u)
{
    vis[u]=true;
    int i,v;
    rep0(i,grid[u].size())
    {
        v=grid[u][i];
        if(!vis[v])
            dfs(v);
    }
}
int main()
{
    int n;
    while(1)
    {
        cin>>n;
        if(n==0)
            return 0;
        string a;
        int i,k;
        rep(i,n)
        {
            cin>>k>>a;
            int invi=i+n,invk=k+n;
            if(a=="true")
            {
                grid[i].pb(k);
                grid[invi].pb(invk);
            }
            else
            {
                grid[i].pb(invk);
                grid[invi].pb(k);
            }
        }
        bool f=true;
        rep(i,n)
        {
            memb(vis);
            dfs(i);
            if(vis[i+n])
            {
                f=false;
                break;
            }
        }
        puts(f?"NOT PARADOX":"PARADOX");
        rep(i,2*n)
            grid[i].clear();    
    }
}