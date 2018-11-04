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
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
int cost[1001][1001],n,m,i;
bool vis[1001][1001],grid[1001][1001];
bool valid(int a,int b)
{
    if(a>=0 && a<n && b>=0 && b<m && !grid[a][b] && !vis[a][b])
        return true;
    return false;
}
void bfs(int x,int y)
{
    vis[x][y]=true;
    cost[x][y]=0;
    queue<pi>q;
    q.push(mpp(x,y));
    while(!q.empty())
    {
        pi top=q.front();
        q.pop();
        int xx=top.fi,yy=top.se;
        rep0(i,4)
        {
            int a=xx+dx[i],b=yy+dy[i];
            if(valid(a,b))
            {
                vis[a][b]=true;
                grid[a][b]=true;
                cost[a][b]=cost[xx][yy]+1;
                q.push(mpp(a,b));
            }
        }
    }
}
int main()
{
    while(1)
    {
        sff(n,m);
        if(m+n==0)
            return 0;
        memb(grid);
        mem(cost);
        memb(vis);
        int r,b,q,k;
        sf(q);
        while(q--)
        {
            sff(r,b);
            while(b--)
            {
                sf(k);
                grid[r][k]=true;
            }
        }
        int sx,sy,ex,ey;
        sff(sx,sy);
        sff(ex,ey);
        bfs(sx,sy);
        cout<<cost[ex][ey]<<endl;
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
