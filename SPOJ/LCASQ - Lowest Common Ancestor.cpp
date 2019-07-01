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
#define N 10005
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
int par[N],depth[N],n;
int table[N][22];
vector<int>grid[N];
void dfs(int from,int u,int dep)
{
    par[u]=from;
    depth[u]=dep;
    int i;
    rep0(i,grid[u].size())
    {
        int v=grid[u][i];
        if(v==from)
            continue;
        dfs(u,v,dep+1);
    }
}
void lcaInit()
{
    mem(table,-1);
    int i,j;
    rep0(i,n)
        table[i][0]=par[i];
    for(j=1;(1<<j)<n;j++)
    {
        rep0(i,n)
        {
            if(table[i][j-1]!=-1)
                table[i][j]=table[table[i][j-1]][j-1];
        }
    }
}
int lcaQuery(int p,int q)
{
    if(depth[p]<depth[q])
        swap(p,q);
    int i,log=1;
    while(1)
    {
        int next=log+1;
        if((1<<next)>depth[p])
            break;
        log++;
    }
    for(i=log;i>=0;i--)
    {
        if(depth[p]-(1<<i)>=depth[q])
            p=table[p][i];
    }
    if(p==q)
        return p;
    for(i=log;i>=0;i--)
    {
        if(table[p][i]!=-1 && table[p][i]!=table[q][i])
        {
            p=table[p][i];
            q=table[q][i];
        }
    }
    return par[p];
}
int main()
{
    int m,i,u,v,q;
    sf(n);
    rep0(i,n)
    {
        sf(m);
        while(m--)
        {
            sf(v);
            grid[i].pb(v);
            par[v]=i;
        }
    }
    dfs(0,0,0);
    lcaInit();
    sf(q);
    while(q--)
    {
        sff(u,v);
        pf("%d\n",lcaQuery(u,v));
    }
}
