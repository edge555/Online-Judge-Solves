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
#define N 105
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
char grid[N][N];
bool vis[N][N];
int dx[]={-1,0,1,0,-1,1,1,-1};
int dy[]={0,1,0,-1,1,1,-1,-1};
int ans;
void dfs(int x,int y)
{
    if(x<0 || y<0 || grid[x][y]==0 || vis[x][y]==true || grid[x][y]!='W')
        return;
    int i;
    vis[x][y]=true;
    ans++;
    rep0(i,8)
    {
        int xx=x+dx[i],yy=y+dy[i];
        dfs(xx,yy);
    }
}
int main()
{
   int tc,t=0;
   sf(tc);
   getchar();
   getchar();
   while(tc--)
   {
      memset(grid,0,sizeof(grid));
      char a[200];
      int n=0;
      if(t!=0)
        puts("");
      t++;
      while(gets(a))
      {
         if(a[0]=='\0')
            break;
         if(a[0]=='W' || a[0]=='L')
         {
            sscanf(a,"%s",grid[n]);
            n++;
         }
         else
         {
             int i,j;
             sscanf(a,"%d %d",&i,&j);
             memset(vis,false,sizeof(vis));
             i--;j--;
             ans=0;
             dfs(i,j);
             pf("%d\n",ans);
         }
      }
   }
   //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
