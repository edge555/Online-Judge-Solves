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
int n,dt;
int disc[N],par[N],low[N];
bool vis[N],AP[N];
vector<int>grid[N];
void reset()
{
    int i;
    rep(i,n)
    {
        grid[i].clear();
        vis[i]=false;
        AP[i]=false;
        par[i]=-1;
    }
    dt=0;
}
void dfs(int u)
{
    vis[u]=true;
    disc[u]=++dt;
    low[u]=disc[u];
    int i,child=0;
    rep0(i,grid[u].size())
    {
        int v=grid[u][i];
        if(!vis[v])
        {
            child++;
            par[v]=u;
            dfs(v);
            low[u]=min(low[u],low[v]);
            if(par[u]==-1 && child>1)
                AP[u]=true;
            else if(par[u]!=-1 && disc[u]<=low[v])
                AP[u]=true;
        }
        else if(par[u]!=v)
            low[u]=min(low[u],disc[v]);
    }
}
void tarjan()
{
    int i;
    rep(i,n)
    {
        if(!vis[i])
            dfs(i);
    }
}
int main()
{
    while(1)
    {
        sf(n);
        if(n==0)
            return n;
        reset();
        while(1)
        {
            string s;
            getline(cin,s);
            if(s[0]=='0')
                break;
            stringstream ss(s);
            bool chk=false;
            int a,k;
            while(ss>>k)
            {
                if(!chk)
                    a=k;
                else
                {
                    grid[a].pb(k);
                    grid[k].pb(a);
                }
                chk=true;
            }
        }
        tarjan();
        int cnt=0,i;
        rep(i,n)
        {
            if(AP[i])
                cnt++;
        }
        pf("%d\n",cnt);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
