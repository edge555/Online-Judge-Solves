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
#define mem(ara) memset(ara,0,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define autto(vec) for(auto it=vec.begin();it!=vec.end();it++)
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
typedef long long int ll;
using namespace std;
vector<int>grid[100001];
bool vis[100001];
int cost[100001],i;
void bfs(int st)
{
    vis[st]=true;
    cost[st]=0;
    queue<int>q;
    q.push(st);
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        rep0(i,grid[p].size())
        {
            int k=grid[p][i];
            if(!vis[k])
            {
                vis[k]=true;
                cost[k]=cost[p]+1;
                q.push(k);
            }
        }
    }
}
int main()
{
    int n,i,a,b;
    sf(n);
    rep0(i,n-1)
    {
        sff(a,b);
        grid[a].pb(b);
        grid[b].pb(a);
    }

    bfs(1);
    int farnode,mx=-1;
    rep(i,n)
    {
        if(cost[i]>mx)
        {
            mx=cost[i];
            farnode=i;
        }
    }
    rep(i,n)
    {
        cost[i]=0;
        vis[i]=false;
    }
    bfs(farnode);
    mx=-1;
    rep(i,n)
        mx=max(mx,cost[i]);
    pf("%d",mx);
    //cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
}
