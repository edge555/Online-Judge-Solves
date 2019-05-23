#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
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
#define N 41
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
int n,m,k,ex,ey;
string a[N];
bool vis[N][N],flag=false;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
bool valid(int x,int y)
{
    return x>=0 && x<n && y>=0 && y<m && !vis[x][y] && a[x][y]!='#';
}
void dfs(int x,int y,int step)
{
    if(step*2>k || flag)
        return;
    if(a[x][y]=='@')
    {
        flag=true;
        return;
    }
    vis[x][y]=true;
    int i,xx,yy;
    rep0(i,4)
    {
        xx=x+dx[i];
        yy=y+dy[i];
        if(valid(xx,yy))
        {
            if(a[xx][yy]=='s')
                dfs(xx,yy,step+1);
            else
                dfs(xx,yy,step);
        }
        if(flag)
            return;
    }
    vis[x][y]=false;
}
int main()
{
    FAST;
    cin>>n>>m>>k;
    int i,j;
    rep0(i,n)
    {
        cin>>a[i];
        rep0(j,m)
        {
            if(a[i][j]=='x')
            {
                ex=i;
                ey=j;
            }
        }
    }
    dfs(ex,ey,0);
    puts(flag?"SUCCESS":"IMPOSSIBLE");
}
