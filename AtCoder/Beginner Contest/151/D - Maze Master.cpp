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
#define N 100
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
int n,m;
int cost[N][N];
bool vis[N][N];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
string a[N];
bool valid(int x,int y)
{
    return x>=0 && x<n && y>=0 && y<m && a[x][y]=='.' && !vis[x][y];
}
int bfs(int u,int v)
{
    memb(vis);
    mem(cost,0);
    queue<pi>q;
    q.push({u,v});
    vis[u][v]=true;
    cost[u][v]=0;
    int i,j,ans=0;
    while(!q.empty())
    {
        pi p=q.front();
        q.pop();
        int x,y,xx,yy;
        x=p.fi,y=p.se;
        rep0(i,4)
        {
            xx=x+dx[i];
            yy=y+dy[i];
            if(valid(xx,yy))
            {
                vis[xx][yy]=true;
                cost[xx][yy]=cost[x][y]+1;
                q.push({xx,yy});
            }
        }
    }
    rep0(i,n)
    {
        rep0(j,m)
            ans=max(ans,cost[i][j]);
    }
    return ans;
}
int main()
{
    memb(vis);
    mem(cost,0);
    cin>>n>>m;
    int i,j,ans=0;
    rep0(i,n)
        cin>>a[i];
    rep0(i,n)
    {
        rep0(j,m)
        {
            if(a[i][j]=='.')
                ans=max(ans,bfs(i,j));
        }
    }
    cout<<ans;
}
