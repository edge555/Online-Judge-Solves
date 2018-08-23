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
char path [100][100];
int vis[100][100];
int main()
{
    int r,c,y;
    while(scanf ("%d %d %d",&r,&c,&y)==3)
    {
        if (r==0 && c==0 && y==0)
                break;
        c--;
        r--;
        y--;
        int i,j,step=0;
        for (i=0;i<=r;i++)
        {
            for (j=0;j<=c;j++)
            {
                vis[i][j]=0;
            }
        }
        for (i=0;i<=r;i++)
            cin>>path[i];
        int x=0;
        bool chk=false;
        while(1)
        {
           if(vis[x][y]!=0)
           {
               chk=true;
               break;
           }
           vis[x][y]=++step;
           char ch=path[x][y];
           if(ch=='E')
             y++;
           else if(ch=='W')
             y--;
           else if (ch=='S')
             x++;
           else
             x--;
           if(x<0 || x>r || y<0 || y>c)
            break;

        }
        if(chk==false)
            pf("%d step(s) to exit\n",step);
        else{
            vis[x][y]--;
            pf("%d step(s) before a loop of %d step(s)\n",vis[x][y],step-vis[x][y]);
        }
    }
}
