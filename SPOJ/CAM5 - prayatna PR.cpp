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
#define N 100001
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
vector<int>grid[N];
bool vis[N];
void reset()
{
    int i;
    rep0(i,n)
    {
        grid[i].clear();
        vis[i]=false;
    }
}
void dfs(int u)
{
    vis[u]=true;
    int i;
    rep0(i,grid[u].size())
    {
        int v=grid[u][i];
        if(!vis[v])
            dfs(v);
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
        int a,b;
        while(m--)
        {
            sff(a,b);
            grid[a].pb(b);
            grid[b].pb(a);
        }
        int color=0,i;
        rep0(i,n)
        {
            if(!vis[i])
            {
                color++;
                dfs(i);
            }
        }
        pf("%d\n",color);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
