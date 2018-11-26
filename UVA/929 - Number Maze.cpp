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
int n,m,i,j;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int cost[1000][1000],dis[1000][1000];
priority_queue<pii,vector<pii>,greater<pii>>pq;
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<m)
        return true;
    return false;
}
void dijkstra()
{
    pq.push(mpp(cost[0][0],mpp(0,0)));
    dis[0][0]=cost[0][0];
    while(!pq.empty())
    {
        pii p=pq.top();
        pq.pop();
        pi u=p.se;
        int x=u.fi,y=u.se;
        int prevcost=dis[x][y];
        int w=p.fi;
        if(w>prevcost)
            continue;
        rep0(i,4)
        {
            int xx=x+dx[i],yy=y+dy[i];
            if(valid(xx,yy))
            {
                pi pp=mpp(xx,yy);
                int cst=cost[xx][yy];
                if(dis[xx][yy]>prevcost+cst)
                {
                    dis[xx][yy]=prevcost+cst;
                    pq.push(mpp(dis[xx][yy],pp));
                }
            }
        }
    }
}
int main()
{
    int tc,t,k;
    sf(tc);
    rep(t,tc)
    {
        sff(n,m);
        rep0(i,n)
        {
            rep0(j,m)
            {
                sf(k);
                dis[i][j]=1e9;
                cost[i][j]=k;
            }
        }
        dijkstra();
        pf("%d\n",dis[n-1][m-1]);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
