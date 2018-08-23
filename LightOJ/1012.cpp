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
int vis[25][25];
char ara[25][25];
int dx[]={0,1,0,-1};
int dy[]={-1,0,1,0};
int mv,row,col;
void dfs(int x,int y)
{
    int i;
    for (i=0;i<4;i++)
    {
      if(x+dx[i]>=0 && x+dx[i]<row && y+dy[i]>=0 && y+dy[i]<col && !vis[x+dx[i]][y+dy[i]]&& ara[x+dx[i]][y+dy[i]]=='.')
      {
          mv++;
          vis[x+dx[i]][y+dy[i]]=true;
          dfs(x+dx[i],y+dy[i]);
      }
    }
}
int main()
{
   int t,k;
   sf(t);
   for (k=1;k<=t;k++)
   {
     memset(vis,0,sizeof vis);
     int i,j,x,y;
     sff(col,row);
     getchar();
     for (i=0;i<row;i++)
     {
        for(j=0;j<col;j++)
        {
            ara[i][j]=getchar();
            if(ara[i][j]=='@')
            {
                x=i;
                y=j;
                vis[i][j]=true;
            }
        }
        getchar();
     }
     mv=1;
     dfs(x,y);
     pf("Case %d: %d\n",k,mv);
   }
}
