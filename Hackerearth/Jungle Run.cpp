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
#define N 31
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
int n,ara[N][N],cost[N][N];
int sx,sy,ex,ey;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
bool vis[N][N];
bool valid(int x,int y)
{
    return x>=0 && x<n && y>=0 && y<n && !vis[x][y] && ara[x][y]==1;
}
void bfs()
{
    queue<pi>q;
    q.push({sx,sy});
    vis[sx][sy]=true;
    while(!q.empty())
    {
        pi p=q.front();
        q.pop();
        int x=p.fi,y=p.se;
        if(x==ex && y==ey)
            return;
        int i,xx,yy;
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
    cin>>n;
    int i,j;
    char ch;
    rep0(i,n)
    {
        rep0(j,n)
        {
            cin>>ch;
            if(ch=='S')
            {
                sx=i;
                sy=j;
                ara[i][j]=1;
            }
            else if(ch=='E')
            {
                ex=i;
                ey=j;
                ara[i][j]=1;
            }
            else if(ch=='P')
                ara[i][j]=1;
            else
                ara[i][j]=-1;
        }
    }
    bfs();
    pf("%d",cost[ex][ey]);
}
