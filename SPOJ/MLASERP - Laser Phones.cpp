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
#define N 101
#define mem(ara) memset(ara,-1,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int n,m,sx,sy,ex,ey;
string a[N];
bool vis[N][N];
int cost[N][N];
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m && a[x][y]!='*')
        return true;
    return false;
}
void bfs()
{
    queue<pi>q;
    q.push({sx,sy});
    cost[sx][sy]=0;
    while(!q.empty())
    {
        pi p=q.front();
        q.pop();
        int i,x,y;
        x=p.fi;
        y=p.se;
        rep0(i,4)
        {
            int xx=x+dx[i];
            int yy=y+dy[i];
            while(1)
            {
                if(!valid(xx,yy))
                    break;
                if(cost[xx][yy]==-1)
                {
                    cost[xx][yy]=cost[x][y]+1;
                    q.push({xx,yy});
                }
                else if(cost[x][y]+1<cost[xx][yy])
                {

                    cost[xx][yy]=cost[x][y]+1;
                    q.push({xx,yy});
                }
                xx+=dx[i];
                yy+=dy[i];
            }
        }
    }
}
int main()
{
    sff(m,n);
    int i,j;
    bool found=false;
    rep0(i,n)
    {
        cin>>a[i];
        rep0(j,m)
        {
            if(a[i][j]=='C')
            {
                if(!found)
                {
                    sx=i;
                    sy=j;
                    found=true;
                }
                else
                {
                    ex=i;
                    ey=j;
                }
            }
        }
    }
    mem(cost);
    bfs();
    pf("%d",cost[ex][ey]-1);
}
