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
#define N 10
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1};
int k,cost[N][N];
bool vis[N][N];
void reset()
{
    int i,j;
    rep(i,8)
    {
        rep(j,8)
        {
            vis[i][j]=false;
            cost[i][j]=0;
        }
    }
}
bool valid(int x,int y)
{
    if(x>=1 && x<=8 && y>=1 && y<=8 && !vis[x][y])
        return true;
    return false;
}
void bfs(int sx,int sy)
{
    vis[sx][sy]=true;
    cost[sx][sy]=0;
    queue<pi>q;
    q.push({sx,sy});
    while(!q.empty())
    {
        pi p=q.front();
        q.pop();
        int x=p.fi,y=p.se;
        if(cost[x][y]>=k)
            continue;
        int i,xx,yy;
        rep0(i,8)
        {
            xx=p.fi+dx[i];
            yy=p.se+dy[i];
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
        reset();
        int sx,sy;
        sfff(sx,sy,k);
        bfs(sx,sy);
        int i,j,cnt=0;
        rep(i,8)
        {
            rep(j,8)
            {
                if(vis[i][j])
                    cnt++;
            }
        }
        pf("%d\n",cnt);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
