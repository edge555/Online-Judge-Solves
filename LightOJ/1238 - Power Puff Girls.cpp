#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 25
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m,ax,ay,bx,by,cx,cy,hx,hy;
string a[N];
bool vis[N][N];
int cost[N][N];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
void reset()
{
    int i,j;
    rep0(i,n)
    {
        rep0(j,m)
        {
            vis[i][j]=false;
            cost[i][j]=0;
        }
    }
}
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m && a[x][y]!='m' && a[x][y]!='#' && !vis[x][y])
        return true;
    return false;
}
void bfs(int sx,int sy)
{
    cost[sx][sy]=0;
    vis[sx][sy]=true;
    queue<pi>q;
    q.push({sx,sy});
    while(!q.empty())
    {
        pi p=q.front();
        q.pop();
        int x=p.fi,y=p.se,i;
        rep0(i,4)
        {
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(valid(xx,yy))
            {
                vis[xx][yy]=true;
                cost[xx][yy]=cost[x][y]+1;
                q.push({xx,yy});
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
        sff(n,m);
        getchar();
        int i,j;
        reset();
        rep0(i,n)
        {
            cin>>a[i];
            rep0(j,m)
            {
                if(a[i][j]=='a')
                {
                    ax=i;
                    ay=j;
                }
                if(a[i][j]=='b')
                {
                    bx=i;
                    by=j;
                }
                if(a[i][j]=='c')
                {
                    cx=i;
                    cy=j;
                }
                if(a[i][j]=='h')
                {
                    hx=i;
                    hy=j;
                }
            }
        }
        bfs(hx,hy);
        pf("Case %d: %d\n",t,max(cost[ax][ay],max(cost[bx][by],cost[cx][cy])));
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
