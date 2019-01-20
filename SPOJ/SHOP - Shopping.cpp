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
#define N 26
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<int,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m,sx,sy,ex,ey;
char a[N][N];
int dis[N][N],cost[N][N];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
priority_queue<pii,vector<pii>,greater<pii> >pq;
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m && a[x][y]!='X')
        return true;
    return false;
}
void reset()
{
    int i,j;
    rep0(i,n)
    {
        rep0(j,m)
        {
            dis[i][j]=1e9;
            cost[i][j]=1e9;
        }
    }
}
void dijkstra()
{
    pq.push({0,{sx,sy}});
    dis[sx][sy]=0;
    cost[sx][sy]=0;
    cost[ex][ey]=0;
    while(!pq.empty())
    {
        pii p=pq.top();
        pq.pop();
        int w=p.fi,i;
        int x=p.se.fi;
        int y=p.se.se;
        rep0(i,4)
        {
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(valid(xx,yy))
            {
                if(dis[xx][yy]>w+cost[xx][yy])
                {
                    dis[xx][yy]=w+cost[xx][yy];
                    pq.push({dis[xx][yy],{xx,yy}});
                }
            }
        }
    }
}
int main()
{
    while(1)
    {
        sff(m,n);
        getchar();
        reset();
        if(n+m==0)
            break;
        int i,j;
        rep0(i,n)
        {
            scanf("%s",a[i]);
            rep0(j,m)
            {
                if(a[i][j]=='S')
                {
                    sx=i;
                    sy=j;
                }
                else if(a[i][j]=='D')
                {
                    ex=i;
                    ey=j;
                }
                if(a[i][j]!='X')
                    cost[i][j]=a[i][j]-'0';
            }
        }
        dijkstra();
        pf("%d\n",dis[ex][ey]);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
