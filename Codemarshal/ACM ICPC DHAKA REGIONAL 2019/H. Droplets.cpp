#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(n) scanf("%d",&n)
#define sff(n1,n2) scanf("%d %d",&n1,&n2)
#define sfff(n1,n2,n3) scanf("%d %d %d",&n1,&n2,&n3)
#define sl(n) scanf("%lld",&n)
#define sll(n1,n2) scanf("%lld %lld",&n1,&n2)
#define slll(n1,n2,n3) scanf("%lld %lld %lld",&n1,&n2,&n3)
#define rep0(i,n) for(i=0;i<n;i++)
#define rep(i,n) for(i=1;i<=n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define nl puts("");
#define pb push_back
#define MOD 1000000007
#define fi first
#define se second
#define N 105
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define sq(x) ((x)*(x))
#define sz(x) x.size()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define line puts("-------");
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
typedef long long int ll;
using namespace std;
int n,m,cnt;
string a[N];
bool vis[N][N];
int ara[N][N];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
// 0 right 1 left 2 down 3 up
bool valid(int x,int y)
{
    return x>=1 && x<n && y>=1 && y<m && !vis[x][y];
}
void dfs(int x,int y)
{
    ara[x][y]=1;
    vis[x][y]=true;
    int i,xx,yy;
    rep0(i,4)
    {
        xx=x+dx[i];
        yy=y+dy[i];
        if(!valid(xx,yy))
            continue;
        if(i==0)
        {
            if(a[xx-1][yy-1]=='D' || a[xx-1][yy-1]=='B')
                continue;
        }
        else if(i==1)
        {
            if(a[xx-1][yy]=='D' || a[xx-1][yy]=='B')
                continue;
        }
        else if(i==2)
        {
            if(a[xx-1][yy-1]=='R' || a[xx-1][yy-1]=='B')
                continue;
        }
        else
        {
            if(a[xx][yy-1]=='R' || a[xx][yy-1]=='B')
                continue;
        }
        dfs(xx,yy);
    }
}
int main()
{
    FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        cin>>n>>m;
        int i,j;
        rep0(i,n)
            cin>>a[i];
        memb(vis);
        mem(ara,0);
        cnt=0;
        for(i=1;i<m;i++)
        {
            if(a[0][i-1]=='B' || a[0][i-1]=='R')
                continue;
            if(!vis[1][i])
                dfs(1,i);
        }
        rep0(i,n)
        {
            rep0(j,m)
                cnt+=ara[i][j];
        }
        cout<<"Case "<<t<<": "<<cnt<<endl;
    }
}
