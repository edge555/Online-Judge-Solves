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
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
vector<int>grid[10001],grid2[10001];
int cost[10001],cost2[10001],i;
bool vis[10001];
void bfs(int st)
{
    vis[st]=true;
    cost[st]=0;
    queue<int>q;
    q.push(st);
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        rep0(i,grid2[p].size())
        {
            int k=grid2[p][i];
            if(!vis[k])
            {
                vis[k]=true;
                cost[k]=cost[p]+1;
                q.push(k);
            }
        }
    }
}
void bfs2(int st)
{
    vis[st]=true;
    cost2[st]=0;
    queue<int>qq;
    qq.push(st);
    while(!qq.empty())
    {
        int p=qq.front();
        qq.pop();
        rep0(i,grid[p].size())
        {
            int k=grid[p][i];
            if(!vis[k])
            {
                vis[k]=true;
                cost2[k]=cost2[p]+1;
                qq.push(k);
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
        int n,e,c,q,a,b;
        sff(n,e);
        sff(c,q);
        while(e--)
        {
            sff(a,b);
            grid[a].pb(b);
            grid2[b].pb(a);
        }
        memb(vis);
        rep0(i,n)
            cost[i]=-1;
        bfs(c);
        memb(vis);
        rep0(i,n)
            cost2[i]=-1;
        bfs2(c);
        pf("Case %d:\n",t);
        while(q--)
        {
            sff(a,b);

            if(cost[a]==-1 || cost2[b]==-1)
                pf("Not possible to go from %d to %d.\n",a,b);
            else
                pf("The shortest distance from %d to %d is %d.\n",a,b,cost[a]+cost2[b]);
        }
        rep0(i,n)
        {
            grid[i].clear();
            grid2[i].clear();
        }
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
