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
#define N 2005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define vi vector<int>
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
int ara[N],cost[N],n;
bool vis[N];
void reset()
{
    mem(cost,-1);
}
int bfs(int m)
{
    queue<int>q;
    q.push(m);
    cost[m]=0;
    vis[m]=true;
    while(!q.empty())
    {
        int k=q.front(),i;
        q.pop();
        rep0(i,grid[k].size())
        {
            int v=grid[k][i];
            if(cost[v]==-1)
            {
                cost[v]=cost[k]+1;
                q.push(v);
            }
            else if(cost[v]!=1 && v==m)
                return cost[k]+1;
        }
    }
    return 0;
}
int main()
{
    int i,j,k;
    sf(n);
    rep0(i,n)
    {
        rep0(j,n)
        {
            sf(k);
            if(k)
            {
                if(i==j)
                    ara[i]++;
                grid[i].pb(j);
            }
        }
    }
    rep0(i,n)
    {
        if(ara[i])
            puts("1");
        else
        {
            reset();
            int p=bfs(i);
            if(p)
                pf("%d\n",p);
            else
                puts("NO WAY");
        }
    }
}
