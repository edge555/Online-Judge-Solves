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
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<int,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int cost[10][10];
int dx[]={1,-1,1,-1,2,2,-2,-2};
int dy[]={2,2,-2,-2,1,-1,1,-1};
priority_queue<pii,vector<pii>,greater<pii> >pq;
bool valid(int x,int y)
{
    if(x>=0 && x<8 && y>=0 && y<8)
        return true;
    return false;
}
int calc(int x,int y,int xx,int yy)
{
    return x*xx+y*yy;
}
void setvalue()
{
    int i,j;
    rep0(i,8)
    {
        rep0(j,8)
            cost[i][j]=1e9;
    }
}
void dijkstra(int sx,int sy)
{
    cost[sx][sy]=0;
    pq.push({0,{sx,sy}});
    while(!pq.empty())
    {
        pii pr=pq.top();
        pq.pop();
        int w=pr.fi,i;
        pi p=pr.se;
        int x=p.fi,y=p.se;
        rep0(i,8)
        {
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(valid(xx,yy))
            {
                int val=calc(x,y,xx,yy);
                if(val+w<cost[xx][yy])
                {
                    cost[xx][yy]=val+w;
                    pq.push({cost[xx][yy],{xx,yy}});
                }
            }
        }
    }
}
int main()
{

    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        setvalue();
        dijkstra(a,b);
        if(cost[c][d]==1e9)
            cost[c][d]=-1;
        pf("%d\n",cost[c][d]);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
