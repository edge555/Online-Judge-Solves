#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL)
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
#define N 101
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m;
string a[N],s="ALLIZZWELL";
bool ans,vis[N][N];
int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1};
void reset()
{
    int i,j;
    rep0(i,n)
    {
        rep0(j,m)
            vis[i][j]=false;
    }
}
bool valid(int x,int y,int ind)
{
    if(x>=0 && x<n && y>=0 && y<m && !vis[x][y] && a[x][y]==s[ind+1])
        return true;
    return false;
}
void dfs(int x,int y,string c,int ind)
{
    if(c==s)
    {
        ans=true;
        return;
    }
    if(ind==10)
        return;
    int i;
    rep0(i,8)
    {
        int xx=x+dx[i];
        int yy=y+dy[i];
        if(valid(xx,yy,ind))
        {
            vis[xx][yy]=true;
            dfs(xx,yy,c+a[xx][yy],ind+1);
            vis[xx][yy]=false;
        }
    }

}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,j;
        sff(n,m);
        reset();
        rep0(i,n)
            cin>>a[i];
        ans=false;
        rep0(i,n)
        {
            if(ans)
                break;
            rep0(j,m)
            {
                if(a[i][j]=='A')
                    dfs(i,j,"A",0);
            }
        }
        if(ans)
            pf("YES\n");
        else
            pf("NO\n");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
