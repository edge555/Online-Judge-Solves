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
#define N 501
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
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int n,m;
ll cost[N][N];
bool vis[N][N];
string s[N];
bool valid(int x,int y)
{
    return x>=0 && x<n && y>=0 && y<m && s[x][y]!='#' && !vis[x][y];
}
void bfs(int u,int v)
{
    cost[u][v]=0;
    vis[u][v]=true;
    queue<pi>q;
    q.push({u,v});
    while(!q.empty())
    {
        pi p=q.front();
        q.pop();
        int i,x,y,xx,yy;
        x=p.fi,y=p.se;
        rep0(i,4)
        {
            xx=x+dx[i];
            yy=y+dy[i];
            if(valid(xx,yy))
            {
                cost[xx][yy]=cost[x][y]+1;
                vis[xx][yy]=true;
                q.push({xx,yy});
            }
        }
    }
}
int main()
{
    FAST;
    ll i,j,a,b;
    cin>>n>>m>>a>>b;
    swap(n,m);
    rep0(i,n)
        cin>>s[i];
    bfs(0,0);
    if(!vis[n-1][m-1])
    {
        cout<<"IMPOSSIBLE";
        return 0;
    }
    ll ans=cost[n-1][m-1];
    cout<<((ans+1)/2)*b+((ans/2)*a);
}
