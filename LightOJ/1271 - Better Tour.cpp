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
#define N 50005
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
int n;
vector<int>grid[N];
bool vis[N];
int par[N];
void reset()
{
    int i;
    rep(i,N)
    {
        vis[i]=false;
        sort(all(grid[i]));
        par[i]=i;
    }
}
void bfs(int st,int en)
{
    reset();
    queue<int>q;
    vis[st]=true;
    q.push(st);
    int i,k;
    while(!q.empty())
    {
        k=q.front();
        q.pop();
        if(k==en)
            break;
        rep0(i,grid[k].size())
        {
            int p=grid[k][i];
            if(!vis[p])
            {
                vis[p]=true;
                par[p]=k;
                q.push(p);
            }
        }
    }
}
void printpath(int u)
{
    if(par[u]==u)
    {
        pf("%d",u);
        return;
    }
    printpath(par[u]);
    pf(" %d",u);
}
int main()
{
    int t,tc;
    sf(tc);
    rep(t,tc)
    {
        int i,k,n;
        sf(n);
        vector<int>vec;
        rep(i,N)
            grid[i].clear();
        rep0(i,n)
        {
            sf(k);
            vec.pb(k);
        }
        rep0(i,n-1)
        {
            int x=vec[i],y=vec[i+1];
            grid[x].pb(y);
            grid[y].pb(x);
        }
        bfs(vec[0],vec[n-1]);
        pf("Case %d:\n",t);
        printpath(vec[n-1]);
        puts("");
    }
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
