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
#define N 100005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int ans;
vector<int>grid[N];
vector<int>vec;
bool vis[N];
void dfs(int u)
{
    int i;
    vis[u]=true;
    ans=min(ans,vec[u-1]);
    rep0(i,grid[u].size())
    {
        int v=grid[u][i];
        if(!vis[v])
            dfs(v);
    }
}
int main()
{
    int n,q;
    sff(n,q);
    int i,k,a,b;
    rep0(i,n)
    {
        sf(k);
        vec.pb(k);
    }
    while(q--)
    {
        sff(a,b);
        grid[a].pb(b);
        grid[b].pb(a);
    }
    memb(vis);
    ll sum=0;
    rep(i,n)
    {
        if(!vis[i])
        {
            ans=INT_MAX;
            dfs(i);
            sum+=ans;
        }
    }
    pf("%lld",sum);
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
