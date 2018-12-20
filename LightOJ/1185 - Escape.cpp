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
#define N 1005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n,m,color[N][N];
vector<int>grid[N];
void reset()
{
    int i;
    rep(i,n)
        grid[i].clear();
}
int dfs(int n,int col)
{
    int clr,i;
    if(col!=-1)
        color[n][col]=1;
    clr=1;
    if(col==1)
        clr=2;
    rep0(i,grid[n].size())
    {
        int k=grid[n][i];
        if(!color[k][clr])
            dfs(k,clr);
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        sff(n,m);
        int i,a,b;
        reset();
        rep0(i,m)
        {
            sff(a,b);
            grid[a].pb(b);
            grid[b].pb(a);
        }
        mem(color);
        dfs(1,-1);
        int cnt=0;
        rep(i,n)
        {
            if(color[i][2]==1)
                cnt++;
        }
        pf("Case %d: %d\n",t,cnt);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
