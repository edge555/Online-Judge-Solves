#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;

void bfs(int a,int b);
queue<pair<int,int>>q;

int adj[1001][1001];
int cost[1001][1001];
bool vis[1001][1001];
int dx[]={-1,0,1,0};
int dy[]={0,-1,0,1};
int row,col;
int sx,sy,fx,fy;

int main()
{

    while(scanf ("%d %d",&row,&col)==2)
    {
        if (row==0 && col==0)
            break;
        memset(adj,0,sizeof(adj));
        memset(cost,0,sizeof(cost));
        memset(vis,false,sizeof(vis));
        int bomb;
        sf(bomb);
        for (int i=0;i<bomb;i++)
        {
            int r,amnt,c;
            sff(r,amnt);
            while(amnt--)
            {
                sf(c);
                adj[r][c]=1;
            }
        }
        sff(sx,sy);
        sff(fx,fy);
        bfs(sx,sy);

        cout<<cost[fx][fy]<<endl;

    }
}
void bfs(int a,int b)
{
    vis[a][b]=true;
    cost[a][b]=0;
    int i;
    q.push(make_pair(a,b));
    while(!q.empty())
    {
        int xx,yy;
        pair<int,int>top=q.front();
        q.pop();
        for (i=0;i<4;i++)
        {
            xx=top.first+dx[i];
            yy=top.second+dy[i];
            if((xx>=0 && xx<row) && (yy>=0 && yy<col) && adj[xx][yy]==0)
            {
                if(vis[xx][yy]==false)
                {
                    vis[xx][yy]=true;
                    adj[xx][yy]=1;
                    cost[xx][yy]=cost[top.first][top.second]+1;
                    q.push(make_pair(xx,yy));
                }
            }
        }
    }
}

