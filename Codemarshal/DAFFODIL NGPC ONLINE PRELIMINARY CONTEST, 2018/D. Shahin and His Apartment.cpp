#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 205
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int n,m,cost[N][N];
bool vis[N][N];
char a[N][N];
void reset()
{
    int i,j;
    rep0(i,n)
    {
        rep0(j,m)
        {
            cost[i][j]=-1;
            vis[i][j]=false;
        }
    }
}
bool valid(int x,int y)
{
    return x>=0 && x<n && y>=0 && y<m && a[x][y]!='B' && !vis[x][y];
}
void bfs()
{
    queue<pi>q;
    q.push({0,0});
    q.push({0,m-1});
    q.push({n-1,0});
    q.push({n-1,m-1});
    cost[0][0]=0;
    cost[0][m-1]=0;
    cost[n-1][0]=0;
    cost[n-1][m-1]=0;
    vis[0][0]=true;
    vis[0][m-1]=true;
    vis[n-1][0]=true;
    vis[n-1][m-1]=true;
    while(!q.empty())
    {
        pi pr=q.front();
        q.pop();
        int k,x=pr.fi,y=pr.se;
        rep0(k,4)
        {
            int xx=x+dx[k];
            int yy=y+dy[k];
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
        int i,j;
        rep0(i,n)
            scanf("%s",a[i]);
        reset();
        bfs();
        ll sum=0;
        bool chk=true;
        rep0(i,n)
        {
            rep0(j,m)
            {
                if(a[i][j]=='F')
                {
                    sum+=cost[i][j];
                    if(cost[i][j]==-1)
                    {
                        chk=false;
                        break;
                    }
                }
            }
        }
        if(!chk)
            sum=-1;
        pf("Case %d: %lld\n",t,sum);
    }
}
