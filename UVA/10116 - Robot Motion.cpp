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
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define autto(vec) for(auto it=vec.begin();it!=vec.end();it++)
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m,s;
string a[11];
bool vis[11][11];
int cost[11][11];
void setvalue()
{
    int i,j;
    rep0(i,n)
    {
        rep0(j,m)
        {
            cost[i][j]=0;
            vis[i][j]=false;
        }
    }
}
bool out(int x,int y)
{
    if(x<0 || x>=n || y<0 || y>=m)
        return true;
    return false;
}
void bfs(int x,int y)
{
    cost[x][y]=0;
    vis[x][y]=true;
    queue<pi>q;
    q.push({x,y});
    while(!q.empty())
    {
        pi p=q.front();
        q.pop();
        int xx=p.fi,yy=p.se;
        int prev=cost[xx][yy];
        char ch=a[xx][yy];
        if(ch=='W')
            yy--;
        else if(ch=='S')
            xx++;
        else if(ch=='E')
            yy++;
        else
            xx--;

        if(out(xx,yy))
        {
            pf("%d step(s) to exit\n",prev+1);
            return;
        }
        else
        {
            if(!vis[xx][yy])
            {
                vis[xx][yy]=true;
                cost[xx][yy]=prev+1;
                q.push({xx,yy});
            }
            else
            {
                int k=cost[xx][yy];
                pf("%d step(s) before a loop of %d step(s)\n",k,prev+1-k);
                return;
            }
        }
    }
}
int main()
{
    while(1)
    {
        sfff(n,m,s);
        if(n+m+s==0)
            return 0;
        setvalue();
        int i,j;
        rep0(i,n)
            cin>>a[i];
        bfs(0,s-1);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
