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
#define N 105
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
bool vis[N];
vector<int>grid[N];
stack<int>s;
void setvalue()
{
    int i;
    rep(i,n)
    {
        vis[i]=false;
        grid[i].clear();
    }
}
void dfs(int n)
{
    vis[n]=true;
    int i;
    rep0(i,grid[n].size())
    {
        int k=grid[n][i];
        if(!vis[k])
            dfs(k);
    }
    s.push(n);
}
void topsort()
{
    while(!s.empty())
        s.pop();
    int i;
    rep(i,n)
    {
        if(!vis[i])
            dfs(i);
    }
    pf("%d",s.top());
    s.pop();
    while(!s.empty())
    {
        pf(" %d",s.top());
        s.pop();
    }
    puts("");
}
int main()
{
    while(1)
    {
        sff(n,m);
        if(n+m==0)
            return 0;
        setvalue();
        int i,a,b;
        rep0(i,m)
        {
            sff(a,b);
            grid[a].pb(b);
        }
        topsort();
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
