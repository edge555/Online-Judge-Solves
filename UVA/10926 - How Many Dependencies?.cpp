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
int n,maxdep;
bool vis[N];
vector<int>grid[N];
void reset()
{
    int i;
    rep(i,n)
    {
        vis[i]=false;
        grid[i].clear();
    }
    maxdep=-1;
}
void dfs(int n)
{
    vis[n]=true;
    int i;
    rep0(i,grid[n].size())
    {
        int p=grid[n][i];
        if(!vis[p])
            dfs(p);
    }
}
int main()
{
    while(1)
    {
        sf(n);
        if(n==0)
            return 0;
        reset();
        int i,j,k,ind;
        rep(i,n)
        {
            sf(j);
            while(j--)
            {
                sf(k);
                grid[i].pb(k);
            }
        }
        rep(i,n)
        {
            memb(vis);
            dfs(i);
            int cnt=0;
            rep(j,n)
            {
                if(vis[j])
                    cnt++;
            }
            if(cnt>maxdep)
            {
                maxdep=cnt;
                ind=i;
            }
        }
        pf("%d\n",ind);
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
