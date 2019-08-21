#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3)
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3)
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
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
vector<int>grid[N];
bool vis[N];
void dfs(int u,int last)
{
    if(vis[u])
        return;
    vis[u]=true;
    int i,v;
    rep0(i,grid[u].size())
    {
        v=grid[u][i];
        if(v!=last)
        {
            if(!vis[v])
                dfs(v,u);
        }
    }
}
int main()
{
    int i,n,k;
    sf(n);
    vector<int>vec;
    rep0(i,n)
    {
        sf(k);
        vec.pb(k);
    }
    int j;
    rep0(i,n-1)
    {
        reps(j,i+1,n-1)
        {
            if(__gcd(vec[i],vec[j])>1)
            {
                grid[i].pb(j);
                grid[j].pb(i);
            }
        }
    }
    dfs(0,-1);
    int cnt=0,team=1;
    rep0(i,n)
    {
        if(vis[i])
            cnt++;
    }
    rep(i,n-1)
    {
        if(!vis[i])
        {
            team++;
            dfs(i,-1);
        }
    }
    pf("%d %d",team,cnt);
}
