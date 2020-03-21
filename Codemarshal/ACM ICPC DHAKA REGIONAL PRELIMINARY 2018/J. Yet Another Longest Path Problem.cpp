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
bool vis[N];
int n,cur,now,indeg[N],level[N];
vector<pi>ans;
void reset()
{
    int i;
    rep(i,n)
    {
        vis[i]=false;
        level[i]=0;
        grid[i].clear();
        indeg[i]=0;
    }
    cur=0;
    now=1;
    ans.clear();
}
void bfs()
{
    queue<int>q;
    int i;
    rep(i,n)
    {
        if(indeg[i]>1)
        {
            q.push(i);
            level[i]=1;
            vis[i]=true;
            break;
        }
    }
    while(!q.empty())
    {
        int i,u=q.front(),v;
        q.pop();
        if(now!=level[u])
        {
            cur^=1;
            now=level[u];
        }
        rep0(i,sz(grid[u]))
        {
            v=grid[u][i];
            if(!vis[v])
            {
                vis[v]=true;
                level[v]=level[u]+1;
                if(level[v]!=now)
                {
                    if(cur)
                        ans.pb({u,v});
                    else
                        ans.pb({v,u});
                }
                q.push(v);
            }
        }
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,u,v;
        sf(n);
        reset();
        rep0(i,n-1)
        {
            sff(u,v);
            grid[u].pb(v);
            grid[v].pb(u);
            indeg[u]++;
            indeg[v]++;
        }
        bfs();
        pf("Case %d:\n",t);
        if(n==2)
        {
            pf("1 2\n");
            continue;
        }
        rep0(i,ans.size())
            pf("%d %d\n",ans[i].fi,ans[i].se);
    }
}
