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
#define N 1000005
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
bool mark[N],vis[N];
vector<int>prime,comp,primenum;
vector<int>grid[N];
void reset()
{
    prime.clear();
    comp.clear();
    int i;
    rep0(i,N)
    {
        vis[i]=false;
        grid[i].clear();
    }
}
void sieve()
{
    int i,j;
    memset(mark,true,sizeof(mark));
    for(i=4;i<N;i+=2)
        mark[i]=false;
    for(i=3;i*i<N;i++)
    {
        if(mark[i])
        {
            for(j=i*i;j<N;j+=i*2)
                mark[j]=false;
        }
    }
    mark[1]=false;
    primenum.pb(2);
    for(i=3;i<N;i+=2)
    {
        if(mark[i])
            primenum.pb(i);
    }
}
void primefact(int n)
{
    int i,m=n;
    for(i=0;sq(primenum[i])<=n;i++)
    {
        if(n%primenum[i]==0)
        {
            while(n%primenum[i]==0)
                n/=primenum[i];
            grid[m].pb(primenum[i]);
            grid[primenum[i]].pb(m);
        }
    }
    if(n>1)
    {
        grid[m].pb(n);
        grid[n].pb(m);
    }
}
void dfs(int u)
{
    vis[u]=true;
    int i,v;
    rep0(i,grid[u].size())
    {
        int v=grid[u][i];
        if(!vis[v])
            dfs(v);
    }
}
int main()
{
    sieve();
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,n,k,cnt=0;
        sf(n);
        reset();
        rep0(i,n)
        {
            sf(k);
            if(k==1)
                cnt++;
            else if(mark[k])
                prime.pb(k);
            else if(k>1)
                comp.pb(k);
        }
        rep0(i,comp.size())
            primefact(comp[i]);
        rep0(i,prime.size())
        {
            if(!vis[prime[i]])
            {
                cnt++;
                dfs(prime[i]);
            }
        }
        rep0(i,comp.size())
        {
            if(!vis[comp[i]])
            {
                cnt++;
                dfs(comp[i]);
            }
        }
        pf("Case %d: %d\n",t,cnt);
    }
}
