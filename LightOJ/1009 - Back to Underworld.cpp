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
#define N 20005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int color[N];
bool vis[N];
int v,l;
vector<int>grid[N];
void setvalue()
{
    int i;
    rep0(i,N)
    {
        color[i]=-1;
        vis[i]=false;
        grid[i].clear();
    }
}
void dfs(int n)
{
    if(vis[n])
        return;
    vis[n]=true;
    int i;
    rep0(i,grid[n].size())
    {
        int k=grid[n][i];
        if(color[n]==-1)
        {
            color[n]=1;
            v++;
        }
        if(color[n]==1 && color[k]==-1)
        {
            color[k]=0;
            l++;
        }
        if(color[n]==0 && color[k]==-1)
        {
            color[k]=1;
            v++;
        }
        dfs(k);
    }
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int m,i,x,y,lim=-1;
        sf(m);
        setvalue();
        rep0(i,m)
        {
            sff(x,y);
            grid[x].pb(y);
            grid[y].pb(x);
        }
        ll mx=0;
        rep0(i,N)
        {
            if(grid[i].size()!=0 && !vis[i])
            {
                v=0;l=0;
                dfs(i);
                mx+=max(v,l);
            }
        }
        pf("Case %d: %lld\n",t,mx);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
