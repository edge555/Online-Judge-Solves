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
#define N 51
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m,tc=1,ans=0;
char ara[N][N];
bool vis[N][N];
int dx[]={-1,-1,0,1,1,1,0,-1};
int dy[]={0,1,1,1,0,-1,-1,-1};
void setvalue()
{
    int i,j;
    rep0(i,n)
    {
        rep0(j,m)
            vis[i][j]=false;
    }
}
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m && !vis[x][y])
        return true;
    return false;
}
void dfs(int x,int y,int c)
{
    int i;
    rep0(i,8)
    {
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(valid(xx,yy))
        {
            if(ara[xx][yy]==ara[x][y]+1)
            {
                vis[xx][yy]=true;
                dfs(xx,yy,c+1);
            }
        }
    }
    if(c>ans)
        ans=c;
}
int main()
{
    while(1)
    {
        sff(n,m);
        if(n+m==0)
            return 0;
        int i,j;
        rep0(i,n)
            cin>>ara[i];
        setvalue();
        ans=0;
        rep0(i,n)
        {
            rep0(j,m)
            {
                if(ara[i][j]=='A')
                {
                    vis[i][j]=true;
                    dfs(i,j,1);
                }
            }
        }
        pf("Case %d: %d\n",tc++,ans);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
