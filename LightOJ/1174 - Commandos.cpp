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
#define N 101
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
vector<int>grid[N];
bool vis[N];
int cost[N],cost2[N];
void setvalue()
{
    rep0(i,n)
    {
        vis[i]=false;
        grid[i].clear();
        cost[i]=0;
        cost2[i]=0;
    }
}
void bfs(int st)
{
    vis[st]=true;
    queue<int>q;
    cost[st]=0;
    q.push(st);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        rep0(i,grid[u].size())
        {
            int v=grid[u][i];
            if(!vis[v])
            {
                vis[v]=true;
                cost[v]=cost[u]+1;
                q.push(v);
            }
        }
    }
}
void bfs2(int st)
{
    vis[st]=true;
    queue<int>q;
    cost2[st]=0;
    q.push(st);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        rep0(i,grid[u].size())
        {
            int v=grid[u][i];
            if(!vis[v])
            {
                vis[v]=true;
                cost2[v]=cost2[u]+1;
                q.push(v);
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
        setvalue();
        int a,b,st,en;
        rep0(i,m)
        {
            sff(a,b);
            grid[a].pb(b);
            grid[b].pb(a);
        }
        sff(st,en);
        bfs(st);
        memb(vis);
        bfs2(en);
        int ans=0;
        rep0(i,n)
            ans=max(ans,cost[i]+cost2[i]);
        pf("Case %d: %d\n",t,ans);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
