#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(p) scanf("%d",&p)
#define sff(p1,p2) scanf("%d %d",&p1,&p2)
#define sfff(p1,p2,p3) scanf("%d %d %d",&p1,&p2,&p3);
#define sl(p) scanf("%lld",&p)
#define sll(p1,p2) scanf("%lld %lld",&p1,&p2)
#define slll(p1,p2,p3) scanf("%lld %lld %lld",&p1,&p2,&p3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 51
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
bool vis[N][N];
int ans,n;
string a[N];
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
vector<pi>vec,vec2;
bool valid(int x,int y)
{
    if(x>=0 && x<n && y>=0 && y<n && !vis[x][y] && a[x][y]!='1')
        return true;
    return false;
}
void dfs(int x,int y)
{
    vis[x][y]=true;
    vec.pb({x+1,y+1});
    int i,xx,yy;
    for(i=0;i<4;i++)
    {
        xx=x+dx[i];
        yy=y+dy[i];
        if(valid(xx,yy))
            dfs(xx,yy);
    }
}
void dfs2(int x,int y)
{
    vis[x][y]=true;
    vec2.pb({x+1,y+1});
    int i,xx,yy;
    for(i=0;i<4;i++)
    {
        xx=x+dx[i];
        yy=y+dy[i];
        if(valid(xx,yy))
            dfs2(xx,yy);
    }
}
int calc(pi x,pi y)
{
    int x1=x.fi,y1=x.se;
    int x2=y.fi,y2=y.se;
    int ans=((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2));
    return ans;
}
int main()
{
    int i,j;
    sf(n);
    int ax,ay,bx,by;
    sff(ax,ay);
    sff(bx,by);
    getchar();
    for(i=0;i<n;i++)
        cin>>a[i];
    ans=INT_MAX;

    memb(vis);
    dfs(ax-1,ay-1);
    memb(vis);
    dfs2(bx-1,by-1);

    rep0(i,vec.size())
    {
        rep0(j,vec2.size())
        {
            int p=calc(vec[i],vec2[j]);
            if(p<ans)
                ans=p;
        }
    }
    pf("%d",ans);
}
