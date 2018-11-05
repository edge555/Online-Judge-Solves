#include <bits/stdc++.h>

#define pf printf
#define sf(num) scanf("%d ",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define cspf(kk) printf("Case %d: %d\n",tc++,kk)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
typedef long long ll;
using namespace std;
bool vis[200][200];
char ara[200][200];
int ans;
void dfs(int x,int y)
{
   if(x<0 || y<0 || ara[x][y]==0|| vis[x][y]==true || ara[x][y]!='W')
        return;
   vis[x][y]=true;
   ans++;
   int i,j;
   for (i=-1;i<=1;i++)
   {
       for (j=-1;j<=1;j++)
       {
          dfs(x+i,y+j);
       }
   }
}
int main()
{
   int p;
   sf(p);
   while(p--)
   {
      memset(ara,0,sizeof(ara));

      char a[200];
      int k=0;
      while(gets(a))
      {
         if(a[0]=='\0')
            break;
         if(a[0]=='W' || a[0]=='L')
         {
            sscanf(a,"%s",ara[k]);
            k++;
         }
         else
         {
             int i,j;
             sscanf(a,"%d %d",&i,&j);
             ans=0;
             memset(vis,false,sizeof(vis));
             dfs(--i,--j);
             pf("%d\n",ans);

         }
      }
      if(p!=0)
        cout<<endl;
   }
}
