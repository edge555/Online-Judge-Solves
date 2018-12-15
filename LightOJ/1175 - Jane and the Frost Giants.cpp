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
#define N 201
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
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
bool vis[N][N],vis2[N][N];
int cost[N][N],cost2[N][N];
string a[N];
queue<pi>qq,qf;
void setvalue()
{
    int i,j;
    rep0(i,n)
    {
        rep0(j,m)
        {
            cost[i][j]=0;
            cost2[i][j]=INT_MAX;
            vis[i][j]=false;
            vis2[i][j]=false;
        }
    }
}
bool out(int x,int y)
{
    if(x<0 || x>=n || y<0 || y>=m)
        return true;
    return false;
}
int bfsjane(int x,int y)
{
    int i;
    vis[x][y]=true;
    cost[x][y]=0;
    queue<pi>q;
    q.push({x,y});
    while(!q.empty())
    {
        pi p=q.front();
        q.pop();
        rep0(i,4)
        {
            int xx=p.fi+dx[i],yy=p.se+dy[i];
            if(out(xx,yy))
                return cost[p.fi][p.se]+1;
            else
            {
                int cst=cost[p.fi][p.se]+1;
                if(!vis[xx][yy] && a[xx][yy]=='.' && !out(xx,yy) && cst<cost2[xx][yy])
                {
                    vis[xx][yy]=true;
                    cost[xx][yy]=cst;
                    q.push({xx,yy});
                }
            }
        }
    }
    while(!q.empty())
        q.pop();
    return INT_MAX;
}
void bfsfire()
{
    queue<pi>q;
    while(!qf.empty())
    {
        pi pr=qf.front();
        qf.pop();
        int x=pr.fi,y=pr.se;
        vis2[x][y]=true;
        cost2[x][y]=0;
        q.push({x,y});
    }
    int i;
    while(!q.empty())
    {
        pi p=q.front();
        q.pop();
        rep0(i,4)
        {
            int xx=p.fi+dx[i],yy=p.se+dy[i];
            if(!vis2[xx][yy] && !out(xx,yy) && a[xx][yy]=='.')
            {
                vis2[xx][yy]=true;
                cost2[xx][yy]=cost2[p.fi][p.se]+1;
                q.push({xx,yy});
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
        int i,j;
        int jx,jy,fx,fy;
        sff(n,m);
        setvalue();
        rep0(i,n)
        {
            cin>>a[i];
            rep0(j,m)
            {
                if(a[i][j]=='F')
                    qf.push({i,j});

                else if(a[i][j]=='J')
                {
                    jx=i;
                    jy=j;
                }
            }
        }
        bfsfire();
        pf("Case %d: ",t);
        int ans=bfsjane(jx,jy);
        if(ans==INT_MAX)
            pf("IMPOSSIBLE\n");
        else
            pf("%d\n",ans);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
